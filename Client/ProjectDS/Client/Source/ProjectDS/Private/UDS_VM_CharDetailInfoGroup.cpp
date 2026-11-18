// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetClickStatusTabButton_WrapperImpl @ 14b5fd240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharDetailInfoGroup::SetClickStatusTabButton_WrapperImpl(void *param_1,void *param_2)

{
  UpdateTab(param_1,Status);
  return;
}

// SetClickBagTabButton_WrapperImpl @ 14b5fd250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharDetailInfoGroup::SetClickBagTabButton_WrapperImpl(void *param_1,void *param_2)

{
  UpdateTab(param_1,Bag);
  return;
}

// StaticClass @ 14b5fd260

UClass * __cdecl UDS_VM_CharDetailInfoGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharDetailInfoGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharDetailInfoGroup",
               &Z_Registration_Info_UClass_UDS_VM_CharDetailInfoGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharDetailInfoGroup,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_CharDetailInfoGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_CharDetailInfoGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharDetailInfoGroup.InnerSingleton;
}

// UDS_VM_CharDetailInfoGroup @ 14b600c70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_CharDetailInfoGroup * __thiscall
UDS_VM_CharDetailInfoGroup::UDS_VM_CharDetailInfoGroup
          (UDS_VM_CharDetailInfoGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharDetailInfoGroup__6B_;
  (this->VM_W_CharacterStatusPanel).field0_0x0.DebugPtr = (UDS_VM_W_CharacterStatusPanel *)0x0;
  (this->VM_InventoryBag).field0_0x0.DebugPtr = (UDS_VM_W_InventoryBag *)0x0;
  this->PanelSwitcherIndex = 0;
  (this->ClickStatusTabButton)._padding_ = '\0';
  (this->ClickStatusTabButton).bIsCustomSelected = false;
  (this->ClickStatusTabButton).bIsLacked = false;
  (this->ClickStatusTabButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickStatusTabButton).Delegate = 0;
  *(undefined8 *)&(this->ClickStatusTabButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickStatusTabButton).Delegate.field_0x10 = 0;
  (this->ClickBagTabButton)._padding_ = '\0';
  (this->ClickBagTabButton).bIsCustomSelected = false;
  (this->ClickBagTabButton).bIsLacked = false;
  (this->ClickBagTabButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickBagTabButton).Delegate = 0;
  *(undefined8 *)&(this->ClickBagTabButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBagTabButton).Delegate.field_0x10 = 0;
  (this->InventoryBagModel).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  *(undefined8 *)&this->OnUpdateBagItemModel = 0;
  *(undefined8 *)&(this->OnUpdateBagItemModel).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateBagItemModel).field_0x10 = 0;
  this->CharEntityID = 0;
  return this;
}

// UDS_VM_CharDetailInfoGroup @ 14b600d20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_CharDetailInfoGroup * __thiscall
UDS_VM_CharDetailInfoGroup::UDS_VM_CharDetailInfoGroup
          (UDS_VM_CharDetailInfoGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharDetailInfoGroup__6B_;
  (this->VM_W_CharacterStatusPanel).field0_0x0.DebugPtr = (UDS_VM_W_CharacterStatusPanel *)0x0;
  (this->VM_InventoryBag).field0_0x0.DebugPtr = (UDS_VM_W_InventoryBag *)0x0;
  this->PanelSwitcherIndex = 0;
  (this->ClickStatusTabButton)._padding_ = '\0';
  (this->ClickStatusTabButton).bIsCustomSelected = false;
  (this->ClickStatusTabButton).bIsLacked = false;
  (this->ClickStatusTabButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickStatusTabButton).Delegate = 0;
  *(undefined8 *)&(this->ClickStatusTabButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickStatusTabButton).Delegate.field_0x10 = 0;
  (this->ClickBagTabButton)._padding_ = '\0';
  (this->ClickBagTabButton).bIsCustomSelected = false;
  (this->ClickBagTabButton).bIsLacked = false;
  (this->ClickBagTabButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickBagTabButton).Delegate = 0;
  *(undefined8 *)&(this->ClickBagTabButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBagTabButton).Delegate.field_0x10 = 0;
  (this->InventoryBagModel).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  *(undefined8 *)&this->OnUpdateBagItemModel = 0;
  *(undefined8 *)&(this->OnUpdateBagItemModel).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateBagItemModel).field_0x10 = 0;
  this->CharEntityID = 0;
  return this;
}

// ~UDS_VM_CharDetailInfoGroup @ 14b601f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharDetailInfoGroup::~UDS_VM_CharDetailInfoGroup(UDS_VM_CharDetailInfoGroup *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharDetailInfoGroup__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUpdateBagItemModel);
  pvVar1 = *(void **)&(this->OnUpdateBagItemModel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateBagItemModel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickBagTabButton).Delegate);
  pvVar1 = *(void **)&(this->ClickBagTabButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickBagTabButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickStatusTabButton).Delegate);
  pvVar1 = *(void **)&(this->ClickStatusTabButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickStatusTabButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b603ca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_CharDetailInfoGroup::GetFieldNotificationDescriptor(UDS_VM_CharDetailInfoGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CharDetailInfoGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b604520

UClass * __cdecl UDS_VM_CharDetailInfoGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharDetailInfoGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharDetailInfoGroup",
               &Z_Registration_Info_UClass_UDS_VM_CharDetailInfoGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharDetailInfoGroup,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_CharDetailInfoGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_CharDetailInfoGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharDetailInfoGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CharDetailInfoGroup @ 14b604980

void __cdecl UDS_VM_CharDetailInfoGroup::StaticRegisterNativesUDS_VM_CharDetailInfoGroup(void)

{
  return;
}

// BindModel @ 14bdaf2e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharDetailInfoGroup::BindModel(UDS_VM_CharDetailInfoGroup *this)

{
  UDS_CharacterUIEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClickEmptyEquipSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_EquipSlotType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_CharDetailInfoGroup>
              (&pUVar1->OnClickEmptyEquipSlot,(UDS_VM_CharDetailInfoGroup *)&stack0x00000010,
               (pmf_393011a1 *)this);
  }
  return;
}

// OnClickCharacterBagBtn @ 14bdcbb80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharDetailInfoGroup::OnClickCharacterBagBtn
          (UDS_VM_CharDetailInfoGroup *this,FDS_ButtonEventField *param_1)

{
  UpdateTab(this,Bag);
  return;
}

// OnClickCharacterStatusBtn @ 14bdcbb90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharDetailInfoGroup::OnClickCharacterStatusBtn
          (UDS_VM_CharDetailInfoGroup *this,FDS_ButtonEventField *param_1)

{
  UpdateTab(this,Status);
  return;
}

// OnClickEmptyEquipSlot @ 14bdcc6c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharDetailInfoGroup::OnClickEmptyEquipSlot
          (UDS_VM_CharDetailInfoGroup *this,EDS_EquipSlotType param_1)

{
  UDS_M_InventoryBag *pUVar1;
  code *pcVar2;
  bool bVar3;
  FDS_SlotBaseTableRow *this_00;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  UpdateTab(this,Bag);
  this_00 = FDS_SlotBaseTableRow::GetRef((longlong)(int)param_1,true);
  bVar3 = FDS_SlotBaseTableRow::IsValid(this_00);
  if ((bVar3) &&
     (pUVar1 = (this->InventoryBagModel).field0_0x0.DebugPtr, pUVar1 != (UDS_M_InventoryBag *)0x0))
  {
    UDS_M_InventoryBag::OnClickedTab(pUVar1,this_00->ClickLinkedBag);
    pUVar1 = (this->InventoryBagModel).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2e0);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    (*pcVar2)(pUVar1,local_res18,0);
  }
  return;
}

// OnSetViewModel @ 14bdd3d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharDetailInfoGroup::OnSetViewModel
          (UDS_VM_CharDetailInfoGroup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 auStackY_1d8 [32];
  TSharedPtr<FDS_ViewModelContext_CharDetailInfoGroup,1> local_1a8;
  UDS_VM_CharDetailInfoGroup *local_198 [2];
  code *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  FDestructionSentinel local_168;
  undefined1 *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharDetailInfoGroup>(&local_1a8,&local_178);
  if (local_1a8.Object == (FDS_ViewModelContext_CharDetailInfoGroup *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_CharDetailInfoGroup::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x1b,L"context is Invalid.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if (local_1a8.Object == (FDS_ViewModelContext_CharDetailInfoGroup *)0x0) {
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
    this->CharEntityID = (local_1a8.Object)->CharEntityID;
    uStack_180 = 0;
    local_188 = OnUpdateCharacterBagItemModel;
    uStack_17c = local_178.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUpdateBagItemModel
               ,(FWriteAccessScope *)&local_168);
    local_150 = &(this->OnUpdateBagItemModel).field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_150);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharDetailInfoGroup____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_198[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)local_198);
      puVar5[4] = local_188;
      puVar5[5] = CONCAT44(uStack_17c,uStack_180);
    }
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    UpdateTab(this,Status);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateCharacterBagItemModel @ 14bddf6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharDetailInfoGroup::OnUpdateCharacterBagItemModel
          (UDS_VM_CharDetailInfoGroup *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_3e8 [32];
  FWeakObjectPtr local_3b8;
  FWeakObjectPtr local_3b0;
  FWeakObjectPtr local_3a8;
  FWeakObjectPtr local_3a0;
  UObject *local_398;
  UObject *local_390;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_388._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_388,"UDS_VM_CharDetailInfoGroup::OnUpdateCharacterBagItemModel",0x39,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_388.Ptr,0xab,L"ModelEvent is Invalid.");
    if ((void *)local_388._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_388._padding_);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 == (UObject *)0x0) {
LAB_14bddf7e4:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bddf7e4;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_3b8.ObjectIndex = 0;
  local_3b8.ObjectSerialNumber = 0;
  local_398 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_3b8,(FObjectPtr)&local_398);
  bVar3 = FWeakObjectPtr::IsValid(&local_3b8);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_VM_CharDetailInfoGroup::OnUpdateCharacterBagItemModel",0x39,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_268.Ptr,0xb2,L"ModelEventItemBase is Invalid.");
    if ((void *)local_268._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_268._padding_);
    return;
  }
  UDS_CharInfoData::GetData((ulong64)&local_3a0);
  bVar3 = FWeakObjectPtr::IsValid(&local_3a0);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_CharDetailInfoGroup::OnUpdateCharacterBagItemModel",0x39,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xb9,L"charInfoData is Invalid. (%llu)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7354006582335635270>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharDetailInfoGroup.cpp"
                       ,0xba,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bddfa71;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_3b8);
  if (*(int *)&pUVar5[5].field_0x8 != 7) {
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 1));
  if (pUVar5 == (UObject *)0x0) {
LAB_14bddf9eb:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bddf9eb;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_3b0.ObjectIndex = 0;
  local_3b0.ObjectSerialNumber = 0;
  local_390 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_3b0,(FObjectPtr)&local_390);
  bVar3 = FWeakObjectPtr::IsValid(&local_3b0);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_3b0);
    (**(code **)(*(longlong *)pUVar5 + 0x3a0))(pUVar5);
    bVar3 = FWeakObjectPtr::IsValid(&local_3a8);
    if ((bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&local_3a8), bVar3)) {
      pUVar5 = FWeakObjectPtr::Get(&local_3a0);
      DS_ItemDataUtil::Use
                ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_3a8,0,
                 *(int *)&pUVar5[8].field_0x8,0);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7354006582335635263>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharDetailInfoGroup.cpp"
                       ,0xc1,"false");
    if (bVar3) {
code_r0x00014bddfa71:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// UnbindModel @ 14bdebaf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CharDetailInfoGroup::UnbindModel(UDS_VM_CharDetailInfoGroup *this)

{
  longlong *plVar1;
  char cVar2;
  UDS_LanguageManager *pUVar3;
  UDS_CharacterUIEvent *pUVar4;
  FReadAccessScope local_28;
  
  pUVar3 = UDS_LanguageManager::GetInst();
  if (pUVar3 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLanguageChanged,this
              );
  }
  pUVar4 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar4 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnClickEmptyEquipSlot,
               this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUpdateBagItemModel,
             &local_28);
  if ((*(int *)&(this->OnUpdateBagItemModel).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnUpdateBagItemModel).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUpdateBagItemModel);
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// UpdateTab @ 14bdf81b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_CharDetailInfoGroup::UpdateTab(UDS_VM_CharDetailInfoGroup *this,EDS_CharacterInfoTab param_1)

{
  code *pcVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_M_InventoryBag *pUVar8;
  FDS_DataContainer *pFVar9;
  UClass *pUVar10;
  UDS_VM_W_CharacterStatusPanel *pUVar11;
  FDS_ViewModelContext *pFVar12;
  UScriptStruct *pUVar13;
  UDS_ViewModelContextManager *this_00;
  longlong *plVar14;
  FDS_ViewModelContext *pFVar15;
  FDS_ViewModelContext *pFVar16;
  undefined1 auStackY_5d8 [32];
  FWeakObjectPtr local_5a8;
  FWeakObjectPtr local_5a0;
  FWeakObjectPtr local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  UObject *local_578 [2];
  FName local_568;
  int local_560;
  FName local_558;
  int local_550;
  TSharedPtr<FDS_ViewModelContext,1> local_548;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_538;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_520;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_508;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_4f0;
  TSharedPtr<FDS_ViewModelContext,1> local_4d8;
  FDS_DataContainer local_4c8;
  FDS_DataContainer local_428;
  undefined1 local_388 [128];
  undefined1 local_308 [128];
  undefined1 local_288 [32];
  void *local_268;
  undefined4 local_260;
  uint local_25c;
  undefined4 local_258;
  undefined4 local_254;
  void *local_248;
  undefined4 local_240;
  undefined1 local_238 [32];
  void *local_218;
  undefined4 local_210;
  uint local_20c;
  undefined4 local_208;
  undefined4 local_204;
  void *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [64];
  void *local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [64];
  void *local_158;
  undefined4 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  UDS_CharInfoData::GetData((ulong64)&local_5a8);
  bVar4 = FWeakObjectPtr::IsValid(&local_5a8);
  iVar2 = FFieldNotificationClassDescriptor::PanelSwitcherIndex.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::PanelSwitcherIndex.FieldName;
  if (bVar4) {
    pFVar15 = (FDS_ViewModelContext *)0x0;
    if (this->PanelSwitcherIndex != (uint)(param_1 != Status)) {
      this->PanelSwitcherIndex = (uint)(param_1 != Status);
      local_560 = iVar2;
      local_568 = FVar3;
      (**(code **)(this->_padding_ + 0x38))();
    }
    if (param_1 == Status) {
      if ((this->VM_W_CharacterStatusPanel).field0_0x0.DebugPtr ==
          (UDS_VM_W_CharacterStatusPanel *)0x0) {
        local_590 = 0;
        pUVar7 = Z_Construct_UClass_UDS_VM_W_CharacterStatusPanel_NoRegister();
        local_588 = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar10 = Z_Construct_UClass_UDS_VM_W_CharacterStatusPanel_NoRegister();
        CheckIsClassChildOf_Internal(pUVar10,pUVar7);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_388,pUVar7);
        local_388._48_8_ = (FObjectInstancingGraph *)0x0;
        local_388._56_8_ = (UPackage *)0x0;
        local_388._16_4_ = 0;
        local_388._20_4_ = 0;
        local_388._24_4_ = RF_Transient;
        local_388._40_8_ = (UObject *)0x0;
        local_388[0x20] = false;
        local_388._8_8_ = this;
        pUVar11 = (UDS_VM_W_CharacterStatusPanel *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_388);
        if (local_388._64_8_ != 0) {
          plVar14 = (longlong *)(local_388 + 0x50);
          if ((longlong *)local_388._104_8_ != (longlong *)0x0) {
            plVar14 = (longlong *)local_388._104_8_;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        if (pUVar11 != (UDS_VM_W_CharacterStatusPanel *)0x0) {
          *(undefined1 *)((longlong)&pUVar11->_padding_ + 4) = 0;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar11 != (UDS_VM_W_CharacterStatusPanel *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        (this->VM_W_CharacterStatusPanel).field0_0x0.DebugPtr = pUVar11;
      }
      pFVar12 = ::operator_new(0x28);
      pFVar16 = pFVar15;
      if (pFVar12 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar12->ViewModelTemplateKey = 0;
        *(undefined8 *)&pFVar12->DerivedStaticStruct = 0;
        (pFVar12->ViewModelName).ComparisonIndex = 0;
        (pFVar12->ViewModelName).Number = 0;
        pFVar12->_padding_ = (longlong)&___7FDS_ViewModelContext_CharacterStatusPanel__6B_;
        pFVar12[1]._padding_ = 0;
        pFVar16 = pFVar12;
      }
      pFVar12 = ::operator_new(0x20);
      if (pFVar12 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar12->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar12->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar12->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharacterStatusPanel__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar12->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar12->ViewModelTemplateKey = pFVar16;
        pFVar15 = pFVar12;
      }
      if ((pFVar16 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar13 = FDS_ViewModelContext_CharacterStatusPanel::StaticStruct();
      *(UScriptStruct **)&pFVar16->DerivedStaticStruct = pUVar13;
      this_00 = UDS_ViewModelContextManager::GetInst();
      if (this_00 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar15 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar15->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_548.Object = pFVar16;
        local_548.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
        UDS_ViewModelContextManager::RegisterContext(this_00,&local_548);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_548.SharedReferenceCount.ReferenceController);
      }
      pFVar16[1]._padding_ = this->CharEntityID;
      pUVar11 = (this->VM_W_CharacterStatusPanel).field0_0x0.DebugPtr;
      if (pFVar15 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar15->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_4d8.Object = pFVar16;
      local_4d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar11,&local_4d8);
      local_550 = FFieldNotificationClassDescriptor::VM_W_CharacterStatusPanel.BitNumber;
      local_558 = FFieldNotificationClassDescriptor::VM_W_CharacterStatusPanel.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_558);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar15);
    }
    else if (param_1 == Bag) {
      if ((this->InventoryBagModel).field0_0x0.DebugPtr == (UDS_M_InventoryBag *)0x0) {
        pUVar6 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar6,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar7 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_308,pUVar7);
        local_308._8_8_ = pUVar6;
        pUVar8 = (UDS_M_InventoryBag *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_308);
        if (local_308._64_8_ != 0) {
          plVar14 = (longlong *)(local_308 + 0x50);
          if ((longlong *)local_308._104_8_ != (longlong *)0x0) {
            plVar14 = (longlong *)local_308._104_8_;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
           (pUVar8 == (UDS_M_InventoryBag *)0x0)) {
          (this->InventoryBagModel).field0_0x0.DebugPtr = pUVar8;
          if (pUVar8 == (UDS_M_InventoryBag *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7354006582335635333>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharDetailInfoGroup.cpp"
                               ,0x7b,"false");
            if (!bVar4) {
              return;
            }
            goto code_r0x00014bdf8546;
          }
        }
        else {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
          (this->InventoryBagModel).field0_0x0.DebugPtr = pUVar8;
        }
        local_1e8._0_8_ = 0;
        local_1e8._8_8_ = 0;
        local_1e8._32_8_ = 0;
        local_1e8._40_4_ = 0;
        local_1e8._44_4_ = 0x80;
        local_1e8._48_4_ = 0xffffffff;
        local_1e8._52_4_ = 0;
        local_1a8 = (void *)0x0;
        local_1a0 = 0;
        local_198._0_8_ = 0;
        local_198._8_8_ = 0;
        local_198._32_8_ = 0;
        local_198._40_4_ = 0;
        local_198._44_4_ = 0x80;
        local_198._48_4_ = 0xffffffff;
        local_198._52_4_ = 0;
        local_158 = (void *)0x0;
        local_150 = 0;
        FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                  ((FDS_DataContainer *)local_1e8,BagGroupType,Character);
        FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_InventoryBagData>
                  ((FDS_DataContainer *)local_1e8,SortType,Equip);
        pUVar6 = FWeakObjectPtr::Get(&local_5a8);
        FDS_DataContainer::SetData<int,enum_EDS_InventoryBagData>
                  ((FDS_DataContainer *)local_1e8,SelectedCharID,*(int *)&pUVar6[8].field_0x8);
        pUVar8 = (this->InventoryBagModel).field0_0x0.DebugPtr;
        local_538._16_8_ = 0;
        local_538._0_8_ = 0;
        local_538._8_8_ = 0;
        local_520._16_8_ = 0;
        local_520._0_8_ = 0;
        local_520._8_8_ = 0;
        pFVar9 = FDS_DataContainer::FDS_DataContainer(&local_4c8,(FDS_DataContainer *)local_1e8);
        UDS_M_InventoryBag::InitModel(pUVar8,pFVar9,&local_520,&local_538);
        UDS_ModelBase::AddUpdateModelDelegate
                  ((UDS_ModelBase *)(this->InventoryBagModel).field0_0x0.DebugPtr,
                   &this->OnUpdateBagItemModel);
        local_150 = 0;
        if (local_158 != (void *)0x0) {
          FMemory::Free(local_158);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_198);
        local_1a0 = 0;
        if (local_1a8 != (void *)0x0) {
          FMemory::Free(local_1a8);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_1e8);
      }
      else {
        local_288._0_8_ = (FScriptContainerElement *)0x0;
        local_288._8_8_ = 0;
        local_268 = (void *)0x0;
        local_260 = 0;
        local_25c = 0x80;
        local_258 = 0xffffffff;
        local_254 = 0;
        local_248 = (void *)0x0;
        local_240 = 0;
        local_238._0_8_ = (FScriptContainerElement *)0x0;
        local_238._8_8_ = 0;
        local_218 = (void *)0x0;
        local_210 = 0;
        local_20c = 0x80;
        local_208 = 0xffffffff;
        local_204 = 0;
        local_1f8 = (void *)0x0;
        local_1f0 = 0;
        FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                  ((FDS_DataContainer *)local_288,BagGroupType,Character);
        FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_InventoryBagData>
                  ((FDS_DataContainer *)local_288,SortType,Equip);
        pUVar6 = FWeakObjectPtr::Get(&local_5a8);
        FDS_DataContainer::SetData<int,enum_EDS_InventoryBagData>
                  ((FDS_DataContainer *)local_288,SelectedCharID,*(int *)&pUVar6[8].field_0x8);
        pUVar8 = (this->InventoryBagModel).field0_0x0.DebugPtr;
        local_508._16_8_ = 0;
        local_508._0_8_ = 0;
        local_508._8_8_ = 0;
        local_4f0._16_8_ = 0;
        local_4f0._0_8_ = 0;
        local_4f0._8_8_ = 0;
        pFVar9 = FDS_DataContainer::FDS_DataContainer(&local_428,(FDS_DataContainer *)local_288);
        UDS_M_InventoryBag::InitModel(pUVar8,pFVar9,&local_4f0,&local_508);
        pUVar8 = (this->InventoryBagModel).field0_0x0.DebugPtr;
        local_580 = 0;
        local_5a0.ObjectIndex = 0;
        local_5a0.ObjectSerialNumber = 0;
        pcVar1 = *(code **)(pUVar8->_padding_ + 0x2e0);
        FWeakObjectPtr::operator=(&local_5a0,(FObjectPtr)&local_580);
        (*pcVar1)(pUVar8,local_5a0,0);
        local_1f0 = 0;
        if (local_1f8 != (void *)0x0) {
          FMemory::Free(local_1f8);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_238,0,local_238._8_4_);
        iVar2 = SUB84(local_238._8_8_,4);
        local_238._8_8_ = local_238._8_8_ & 0xffffffff00000000;
        if (iVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)local_238,0,(int *)(local_238 + 0xc));
        }
        local_208 = 0xffffffff;
        local_204 = 0;
        local_210 = 0;
        if (0x80 < local_20c) {
          local_20c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10),0);
        }
        if (local_218 != (void *)0x0) {
          FMemory::Free(local_218);
        }
        if ((FScriptContainerElement *)local_238._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_238._0_8_);
        }
        local_240 = 0;
        if (local_248 != (void *)0x0) {
          FMemory::Free(local_248);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_288,0,local_288._8_4_);
        iVar2 = SUB84(local_288._8_8_,4);
        local_288._8_8_ = local_288._8_8_ & 0xffffffff00000000;
        if (iVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)local_288,0,(int *)(local_288 + 0xc));
        }
        local_258 = 0xffffffff;
        local_254 = 0;
        local_260 = 0;
        if (0x80 < local_25c) {
          local_25c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x10),0);
        }
        if (local_268 != (void *)0x0) {
          FMemory::Free(local_268);
        }
        if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_288._0_8_);
        }
      }
      for (pUVar6 = (UObject *)this->_padding_; pUVar6 != (UObject *)0x0;
          pUVar6 = *(UObject **)&pUVar6->field_0x20) {
        pUVar7 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
        iVar2 = (int)pUVar7->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar7->_padding_)) {
          pUVar8 = (this->InventoryBagModel).field0_0x0.DebugPtr;
          pcVar1 = *(code **)(pUVar8->_padding_ + 0x2e8);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          local_598.ObjectIndex = 0;
          local_598.ObjectSerialNumber = 0;
          local_578[0] = pUVar6;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=(&local_598,(FObjectPtr)local_578);
          (*pcVar1)(pUVar8,local_598);
          return;
        }
      }
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_CharDetailInfoGroup::UpdateTab",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x5d,L"charInfoData is Invalid. (%llu)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7354006582335635362>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharDetailInfoGroup.cpp"
                       ,0x5e,"false");
    if (bVar4) {
code_r0x00014bdf8546:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

