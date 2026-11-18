// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// SetClickSlotButton_WrapperImpl @ 14b69fc30

void __cdecl
UDS_VM_Mount_LostReclaim_Slot::SetClickSlotButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_MountEvent *pUVar1;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    pUVar1 = UDS_MountEvent::GetEvent();
    if (pUVar1 != (UDS_MountEvent *)0x0) {
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar1->LostListSelectedDelegate,*(long64 *)((longlong)param_1 + 0x1d8));
      return;
    }
  }
  return;
}

// StaticClass @ 14b69fc80

UClass * __cdecl UDS_VM_Mount_LostReclaim_Slot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mount_LostReclaim_Slot",
               &Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mount_LostReclaim_Slot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Mount_LostReclaim_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_Mount_LostReclaim_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_Slot.InnerSingleton;
}

// UDS_VM_Mount_LostReclaim_Slot @ 14b6a5f30

UDS_VM_Mount_LostReclaim_Slot * __thiscall
UDS_VM_Mount_LostReclaim_Slot::UDS_VM_Mount_LostReclaim_Slot
          (UDS_VM_Mount_LostReclaim_Slot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mount_LostReclaim_Slot__6B_;
  (this->TxtSlotName).StringTableID = 0;
  (this->TxtSlotName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtSlotName).StringEnumTableNameID.Number = 0;
  (this->TxtSlotName).DateTime.Ticks = 0;
  (this->TxtSlotName).TimeSpan.Ticks = 0;
  (this->TxtSlotName).TimeExpressionType = None;
  (this->TxtSlotName).IsExpression = false;
  (this->TxtSlotName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtSlotName).UniqueString.Data.ArrayNum = 0;
  (this->TxtSlotName).UniqueString.Data.ArrayMax = 0;
  (this->TxtSlotName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtSlotName).FormatArgs.ArrayNum = 0;
  (this->TxtSlotName).FormatArgs.ArrayMax = 0;
  (this->TxtRemainTime).StringTableType = None;
  (this->TxtRemainTime).StringTableID = 0;
  (this->TxtRemainTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtRemainTime).StringEnumTableNameID.Number = 0;
  (this->TxtRemainTime).DateTime.Ticks = 0;
  (this->TxtRemainTime).TimeSpan.Ticks = 0;
  (this->TxtRemainTime).TimeExpressionType = None;
  (this->TxtRemainTime).IsExpression = false;
  (this->TxtRemainTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtRemainTime).UniqueString.Data.ArrayNum = 0;
  (this->TxtRemainTime).UniqueString.Data.ArrayMax = 0;
  (this->TxtRemainTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtRemainTime).FormatArgs.ArrayNum = 0;
  (this->TxtRemainTime).FormatArgs.ArrayMax = 0;
  (this->TxtTimeOut).StringTableType = None;
  (this->TxtTimeOut).StringTableID = 0;
  (this->TxtTimeOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtTimeOut).StringEnumTableNameID.Number = 0;
  (this->TxtTimeOut).DateTime.Ticks = 0;
  (this->TxtTimeOut).TimeSpan.Ticks = 0;
  (this->TxtTimeOut).TimeExpressionType = None;
  (this->TxtTimeOut).IsExpression = false;
  (this->TxtTimeOut).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtTimeOut).UniqueString.Data.ArrayNum = 0;
  (this->TxtTimeOut).UniqueString.Data.ArrayMax = 0;
  (this->TxtTimeOut).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtTimeOut).FormatArgs.ArrayNum = 0;
  (this->TxtTimeOut).FormatArgs.ArrayMax = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  (this->VM_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->M_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  this->LostListUID = 0;
  *(undefined8 *)&this->UpdateProgressDelegate = 0;
  *(undefined8 *)&(this->UpdateProgressDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateProgressDelegate).field_0x10 = 0;
  (this->TxtSlotName).StringTableType = None;
  return this;
}

// UDS_VM_Mount_LostReclaim_Slot @ 14b6a60a0

UDS_VM_Mount_LostReclaim_Slot * __thiscall
UDS_VM_Mount_LostReclaim_Slot::UDS_VM_Mount_LostReclaim_Slot
          (UDS_VM_Mount_LostReclaim_Slot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mount_LostReclaim_Slot__6B_;
  (this->TxtSlotName).StringTableID = 0;
  (this->TxtSlotName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtSlotName).StringEnumTableNameID.Number = 0;
  (this->TxtSlotName).DateTime.Ticks = 0;
  (this->TxtSlotName).TimeSpan.Ticks = 0;
  (this->TxtSlotName).TimeExpressionType = None;
  (this->TxtSlotName).IsExpression = false;
  (this->TxtSlotName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtSlotName).UniqueString.Data.ArrayNum = 0;
  (this->TxtSlotName).UniqueString.Data.ArrayMax = 0;
  (this->TxtSlotName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtSlotName).FormatArgs.ArrayNum = 0;
  (this->TxtSlotName).FormatArgs.ArrayMax = 0;
  (this->TxtRemainTime).StringTableType = None;
  (this->TxtRemainTime).StringTableID = 0;
  (this->TxtRemainTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtRemainTime).StringEnumTableNameID.Number = 0;
  (this->TxtRemainTime).DateTime.Ticks = 0;
  (this->TxtRemainTime).TimeSpan.Ticks = 0;
  (this->TxtRemainTime).TimeExpressionType = None;
  (this->TxtRemainTime).IsExpression = false;
  (this->TxtRemainTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtRemainTime).UniqueString.Data.ArrayNum = 0;
  (this->TxtRemainTime).UniqueString.Data.ArrayMax = 0;
  (this->TxtRemainTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtRemainTime).FormatArgs.ArrayNum = 0;
  (this->TxtRemainTime).FormatArgs.ArrayMax = 0;
  (this->TxtTimeOut).StringTableType = None;
  (this->TxtTimeOut).StringTableID = 0;
  (this->TxtTimeOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtTimeOut).StringEnumTableNameID.Number = 0;
  (this->TxtTimeOut).DateTime.Ticks = 0;
  (this->TxtTimeOut).TimeSpan.Ticks = 0;
  (this->TxtTimeOut).TimeExpressionType = None;
  (this->TxtTimeOut).IsExpression = false;
  (this->TxtTimeOut).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtTimeOut).UniqueString.Data.ArrayNum = 0;
  (this->TxtTimeOut).UniqueString.Data.ArrayMax = 0;
  (this->TxtTimeOut).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtTimeOut).FormatArgs.ArrayNum = 0;
  (this->TxtTimeOut).FormatArgs.ArrayMax = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  (this->VM_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->M_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  this->LostListUID = 0;
  *(undefined8 *)&this->UpdateProgressDelegate = 0;
  *(undefined8 *)&(this->UpdateProgressDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateProgressDelegate).field_0x10 = 0;
  (this->TxtSlotName).StringTableType = None;
  return this;
}

// ~UDS_VM_Mount_LostReclaim_Slot @ 14b6a7670

void __thiscall
UDS_VM_Mount_LostReclaim_Slot::~UDS_VM_Mount_LostReclaim_Slot(UDS_VM_Mount_LostReclaim_Slot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mount_LostReclaim_Slot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateProgressDelegate);
  pvVar1 = *(void **)&(this->UpdateProgressDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateProgressDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlotButton).Delegate);
  pvVar1 = *(void **)&(this->ClickSlotButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlotButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TxtTimeOut).FormatArgs.AllocatorInstance.Data,
             (this->TxtTimeOut).FormatArgs.ArrayNum);
  pFVar2 = (this->TxtTimeOut).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TxtTimeOut).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TxtRemainTime).FormatArgs.AllocatorInstance.Data,
             (this->TxtRemainTime).FormatArgs.ArrayNum);
  pFVar2 = (this->TxtRemainTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TxtRemainTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TxtSlotName).FormatArgs.AllocatorInstance.Data,
             (this->TxtSlotName).FormatArgs.ArrayNum);
  pFVar2 = (this->TxtSlotName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TxtSlotName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a9a90

IClassDescriptor * __thiscall
UDS_VM_Mount_LostReclaim_Slot::GetFieldNotificationDescriptor(UDS_VM_Mount_LostReclaim_Slot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Mount_LostReclaim_Slot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aa700

UClass * __cdecl UDS_VM_Mount_LostReclaim_Slot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mount_LostReclaim_Slot",
               &Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mount_LostReclaim_Slot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Mount_LostReclaim_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_Mount_LostReclaim_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_Slot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Mount_LostReclaim_Slot @ 14b6aadb0

void __cdecl UDS_VM_Mount_LostReclaim_Slot::StaticRegisterNativesUDS_VM_Mount_LostReclaim_Slot(void)

{
  return;
}

// __VTableCtorCaller @ 14b6abc30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_Mount_LostReclaim_Slot::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_Mount_LostReclaim_Slot__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController + 4) = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)&this[2].Visibility = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14bed87d0

void __thiscall UDS_VM_Mount_LostReclaim_Slot::BindModel(UDS_VM_Mount_LostReclaim_Slot *this)

{
  UDS_MountEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->LostListSelectedDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Mount_LostReclaim_Slot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->LostListSelectedDelegate,(UDS_VM_Mount_LostReclaim_Slot *)&stack0x00000010,
               (pmf_dfb0430a *)this);
  }
  return;
}

// OnClickSlotButton @ 14befb370

void __thiscall
UDS_VM_Mount_LostReclaim_Slot::OnClickSlotButton
          (UDS_VM_Mount_LostReclaim_Slot *this,FDS_ButtonEventField *param_1)

{
  UDS_MountEvent *pUVar1;
  
  if (param_1->bIsCustomDisabled != true) {
    pUVar1 = UDS_MountEvent::GetEvent();
    if (pUVar1 != (UDS_MountEvent *)0x0) {
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar1->LostListSelectedDelegate,this->LostListUID);
      return;
    }
  }
  return;
}

// OnLostListSelected @ 14befecb0

void __thiscall
UDS_VM_Mount_LostReclaim_Slot::OnLostListSelected
          (UDS_VM_Mount_LostReclaim_Slot *this,long64 param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SelectSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectSlot.FieldName;
  bVar1 = this->LostListUID == param_1;
  if (this->SelectSlot != bVar1) {
    this->SelectSlot = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnProgressUpdate @ 14bf03040

void __thiscall
UDS_VM_Mount_LostReclaim_Slot::OnProgressUpdate
          (UDS_VM_Mount_LostReclaim_Slot *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    SetSlotStateWidgetIndex(this);
  }
  return;
}

// OnSetViewModel @ 14bf06cd0

void __thiscall
UDS_VM_Mount_LostReclaim_Slot::OnSetViewModel
          (UDS_VM_Mount_LostReclaim_Slot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  UObject *pUVar7;
  int iVar8;
  FWeakObjectPtr local_res10;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  TSharedPtr<FDS_ViewModelContext_MountLostReclaim_Slot,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_MountLostReclaim_Slot>(&local_38,&local_28);
  if (local_38.Object == (FDS_ViewModelContext_MountLostReclaim_Slot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  else {
    if (local_38.Object == (FDS_ViewModelContext_MountLostReclaim_Slot *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->LostListUID = (local_38.Object)->LostListUID;
    SetVM_Progress(this);
    SetTxtSlotName(this);
    (this->TxtRemainTime).StringTableType = StringUi;
    (this->TxtRemainTime).StringTableID = 0x5576d;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(this->TxtRemainTime).FormatArgs.AllocatorInstance.Data,
               (this->TxtRemainTime).FormatArgs.ArrayNum);
    iVar8 = 0;
    piVar1 = &(this->TxtRemainTime).FormatArgs.ArrayMax;
    (this->TxtRemainTime).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->TxtRemainTime).FormatArgs.AllocatorInstance,0,piVar1);
    }
    local_80 = FFieldNotificationClassDescriptor::TxtRemainTime.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::TxtRemainTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    FDS_Text::SetTextFromStringTable(&this->TxtTimeOut,StringUi,0x5576e);
    local_70 = FFieldNotificationClassDescriptor::TxtTimeOut.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::TxtTimeOut.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    UDS_MountLostData::GetData
              ((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,SUB81(this->LostListUID,0));
    bVar6 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar6) {
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      iVar8 = *(int *)&pUVar7[2].field_0x20 - *(int *)&pUVar7[3].field_0x24;
    }
    iVar5 = FFieldNotificationClassDescriptor::LostReclaimItemCount.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::LostReclaimItemCount.FieldName;
    if (this->LostReclaimItemCount != iVar8) {
      this->LostReclaimItemCount = iVar8;
      local_60 = iVar5;
      local_68 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    }
    iVar8 = FFieldNotificationClassDescriptor::SlotIconID.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::SlotIconID.FieldName;
    if (this->SlotIconID != 0x35b6a) {
      this->SlotIconID = 0x35b6a;
      local_50 = iVar8;
      local_58 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    iVar8 = FFieldNotificationClassDescriptor::TimeOutIconID.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::TimeOutIconID.FieldName;
    if (this->TimeOutIconID != 0x35b6b) {
      this->TimeOutIconID = 0x35b6b;
      local_40 = iVar8;
      local_48 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    SetSlotStateWidgetIndex(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetLostReclaimItemCount @ 14bf15d00

void __thiscall
UDS_VM_Mount_LostReclaim_Slot::SetLostReclaimItemCount(UDS_VM_Mount_LostReclaim_Slot *this)

{
  bool bVar1;
  UObject *pUVar2;
  int iVar3;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  iVar3 = 0;
  UDS_MountLostData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->LostListUID,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    iVar3 = *(int *)&pUVar2[2].field_0x20 - *(int *)&pUVar2[3].field_0x24;
  }
  local_10 = FFieldNotificationClassDescriptor::LostReclaimItemCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LostReclaimItemCount.FieldName;
  if (this->LostReclaimItemCount != iVar3) {
    this->LostReclaimItemCount = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSelectSlot @ 14bf18a00

void __thiscall
UDS_VM_Mount_LostReclaim_Slot::SetSelectSlot(UDS_VM_Mount_LostReclaim_Slot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SelectSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectSlot.FieldName;
  if (this->SelectSlot != param_1) {
    this->SelectSlot = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSlotIconID @ 14bf18b00

void __thiscall
UDS_VM_Mount_LostReclaim_Slot::SetSlotIconID(UDS_VM_Mount_LostReclaim_Slot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SlotIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotIconID.FieldName;
  if (this->SlotIconID != param_1) {
    this->SlotIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSlotStateWidgetIndex @ 14bf18b50

void __thiscall
UDS_VM_Mount_LostReclaim_Slot::SetSlotStateWidgetIndex(UDS_VM_Mount_LostReclaim_Slot *this)

{
  bool bVar1;
  UDS_MountLostData *this_00;
  int iVar2;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  iVar2 = 0;
  UDS_MountLostData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->LostListUID,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this_00 = (UDS_MountLostData *)FWeakObjectPtr::Get(&local_res8);
    bVar1 = UDS_MountLostData::IsRecoveryTimeLeft(this_00);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = 1;
    }
  }
  local_10 = FFieldNotificationClassDescriptor::SlotStateWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotStateWidgetIndex.FieldName;
  if (this->SlotStateWidgetIndex != iVar2) {
    this->SlotStateWidgetIndex = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTimeOutIconID @ 14bf18fb0

void __thiscall
UDS_VM_Mount_LostReclaim_Slot::SetTimeOutIconID(UDS_VM_Mount_LostReclaim_Slot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TimeOutIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TimeOutIconID.FieldName;
  if (this->TimeOutIconID != param_1) {
    this->TimeOutIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTxtRemainTime @ 14bf196d0

void __thiscall UDS_VM_Mount_LostReclaim_Slot::SetTxtRemainTime(UDS_VM_Mount_LostReclaim_Slot *this)

{
  int *piVar1;
  FName local_18;
  int local_10;
  
  (this->TxtRemainTime).StringTableType = StringUi;
  (this->TxtRemainTime).StringTableID = 0x5576d;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TxtRemainTime).FormatArgs.AllocatorInstance.Data,
             (this->TxtRemainTime).FormatArgs.ArrayNum);
  piVar1 = &(this->TxtRemainTime).FormatArgs.ArrayMax;
  (this->TxtRemainTime).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->TxtRemainTime).FormatArgs.AllocatorInstance,0,piVar1);
  }
  local_10 = FFieldNotificationClassDescriptor::TxtRemainTime.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TxtRemainTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxtSlotName @ 14bf19770

void __thiscall UDS_VM_Mount_LostReclaim_Slot::SetTxtSlotName(UDS_VM_Mount_LostReclaim_Slot *this)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  FString *pFVar7;
  FObjectPtr_u_0 *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FWeakObjectPtr local_res8;
  FString local_38;
  FString local_28;
  
  pFVar9 = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  UDS_MountLostData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->LostListUID,0));
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    pUVar6 = FWeakObjectPtr::Get(&local_res8);
    pFVar7 = UDS_TimeUtilManager::ConvertStringFromUnixTime
                       (&local_38,*(double *)&pUVar6[2].field_0x10,DateHourMin,false);
    iVar10 = 0;
    if (&local_28 != pFVar7) {
      pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar10 = (pFVar7->Data).ArrayNum;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  (this->TxtSlotName).StringTableType = StringUi;
  pTVar2 = &(this->TxtSlotName).FormatArgs;
  (this->TxtSlotName).StringTableID = 0x5576c;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
             (this->TxtSlotName).FormatArgs.ArrayNum);
  piVar1 = &(this->TxtSlotName).FormatArgs.ArrayMax;
  (this->TxtSlotName).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar5 = (this->TxtSlotName).FormatArgs.ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TxtSlotName).FormatArgs.ArrayNum = iVar5 + 1;
  this_00 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(this_00);
  pFVar8 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar3 = pFVar8[1];
  this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar8;
  this_00[1].StructMemory = (uchar *)FVar3;
  this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar8[2];
  FInstancedStruct::InitializeAs<FDS_StringFormatArg>(this_00);
  pFVar7 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(this_00)->Value;
  if (pFVar7 != (FString *)0x0) {
    iVar5 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(pFVar7,(wchar_t *)pFVar9,iVar5);
  }
  local_38.Data.ArrayNum = FFieldNotificationClassDescriptor::TxtSlotName.BitNumber;
  local_38.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::TxtSlotName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return;
}

// SetTxtTimeOut @ 14bf19920

void __thiscall UDS_VM_Mount_LostReclaim_Slot::SetTxtTimeOut(UDS_VM_Mount_LostReclaim_Slot *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->TxtTimeOut,StringUi,0x5576e);
  local_10 = FFieldNotificationClassDescriptor::TxtTimeOut.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TxtTimeOut.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVM_Progress @ 14bf1b490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Mount_LostReclaim_Slot::SetVM_Progress(UDS_VM_Mount_LostReclaim_Slot *this)

{
  undefined1 *puVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UClass *pUVar9;
  UDS_M_CommonProgress *pUVar10;
  UClass *pUVar11;
  UDS_VM_CommonProgress *pUVar12;
  FDS_ViewModelContext *pFVar13;
  UScriptStruct *pUVar14;
  UDS_ViewModelContextManager *this_00;
  UObject *pUVar15;
  longlong *plVar16;
  FDS_ViewModelContext *pFVar17;
  FDS_ViewModelContext *pFVar18;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  UDS_VM_Mount_LostReclaim_Slot *local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  FDestructionSentinel local_178;
  undefined1 *local_160;
  FReadAccessScope local_158;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->UpdateProgressDelegate
             ,&local_158);
  pFVar18 = (FDS_ViewModelContext *)0x0;
  puVar1 = &(this->UpdateProgressDelegate).field_0x8;
  if (((*(int *)&(this->UpdateProgressDelegate).field_0x10 == 0) ||
      (*(longlong **)puVar1 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)puVar1 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_158);
    uStack_1b0 = 0;
    local_1b8 = (FWeakObjectPtr)OnProgressUpdate;
    uStack_1ac = local_188.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->UpdateProgressDelegate,(FWriteAccessScope *)&local_178);
    local_160 = puVar1;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Mount_LostReclaim_Slot____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_Mount_LostReclaim_Slot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_1a0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_Mount_LostReclaim_Slot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_1a0);
      *(FWeakObjectPtr *)(puVar7 + 4) = local_1b8;
      puVar7[5] = CONCAT44(uStack_1ac,uStack_1b0);
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_158);
  }
  if ((this->M_RemainTimeProgress).field0_0x0.DebugPtr == (UDS_M_CommonProgress *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UDS_M_CommonProgress_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar9);
    local_b8._8_8_ = this;
    pUVar10 = (UDS_M_CommonProgress *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar16 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_M_CommonProgress *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->M_RemainTimeProgress).field0_0x0.DebugPtr = pUVar10;
    UDS_ModelBase::AddUpdateModelDelegate((UDS_ModelBase *)pUVar10,&this->UpdateProgressDelegate);
  }
  if ((this->VM_RemainTimeProgress).field0_0x0.DebugPtr == (UDS_VM_CommonProgress *)0x0) {
    local_1a8 = 0;
    pUVar9 = Z_Construct_UClass_UDS_VM_CommonProgress_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar11 = Z_Construct_UClass_UDS_VM_CommonProgress_NoRegister();
    CheckIsClassChildOf_Internal(pUVar11,pUVar9);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_138,pUVar9);
    local_138._48_8_ = (FObjectInstancingGraph *)0x0;
    local_138._56_8_ = (UPackage *)0x0;
    local_138._16_4_ = 0;
    local_138._20_4_ = 0;
    local_138._24_4_ = RF_Transient;
    local_138._40_8_ = (UObject *)0x0;
    local_138[0x20] = false;
    local_138._8_8_ = this;
    pUVar12 = (UDS_VM_CommonProgress *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
    if (local_138._64_8_ != 0) {
      plVar16 = (longlong *)(local_138 + 0x50);
      if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_138._104_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (pUVar12 != (UDS_VM_CommonProgress *)0x0) {
      pUVar12->field_0x8c = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UDS_VM_CommonProgress *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->VM_RemainTimeProgress).field0_0x0.DebugPtr = pUVar12;
    if (pUVar12 == (UDS_VM_CommonProgress *)0x0) {
      return;
    }
  }
  pUVar10 = (this->M_RemainTimeProgress).field0_0x0.DebugPtr;
  if (pUVar10 != (UDS_M_CommonProgress *)0x0) {
    UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)pUVar10,W_CommonProgress);
    pFVar13 = ::operator_new(0x28);
    pFVar17 = pFVar18;
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar13->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar13->DerivedStaticStruct = 0;
      (pFVar13->ViewModelName).ComparisonIndex = 0;
      (pFVar13->ViewModelName).Number = 0;
      pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_ModelBase__6B_;
      pFVar13[1]._padding_ = 0;
      pFVar17 = pFVar13;
    }
    pFVar13 = ::operator_new(0x20);
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar13->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar13->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar13->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ModelBase__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar13->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar13->ViewModelTemplateKey = pFVar17;
      pFVar18 = pFVar13;
    }
    if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar14 = FDS_ViewModelContext_ModelBase::StaticStruct();
    *(UScriptStruct **)&pFVar17->DerivedStaticStruct = pUVar14;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar18 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar18->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_198.Object = pFVar17;
      local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_198);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 = (this->M_RemainTimeProgress).field0_0x0.DebugPtr,
       pUVar10 != (UDS_M_CommonProgress *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    *(TObjectPtr<UDS_M_CommonProgress>_u_0 *)(pFVar17 + 1) = (this->M_RemainTimeProgress).field0_0x0
    ;
    pUVar12 = (this->VM_RemainTimeProgress).field0_0x0.DebugPtr;
    if (pFVar18 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar18->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_188.Object = pFVar17;
    local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar12,&local_188);
    UDS_MountLostData::GetData
              ((ulong64)&local_1b8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->LostListUID,0));
    bVar6 = FWeakObjectPtr::IsValid(&local_1b8);
    if (bVar6) {
      pUVar10 = (this->M_RemainTimeProgress).field0_0x0.DebugPtr;
      pUVar15 = FWeakObjectPtr::Get(&local_1b8);
      dVar2 = *(double *)&pUVar15[2].field_0x8;
      dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
      UDS_M_CommonProgress::Init(pUVar10,dVar4,dVar2,true,DayHourSec);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar18);
  }
  return;
}

// UnbindModel @ 14bf1e1e0

void __thiscall UDS_VM_Mount_LostReclaim_Slot::UnbindModel(UDS_VM_Mount_LostReclaim_Slot *this)

{
  UDS_MountEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->LostListSelectedDelegate,this);
    return;
  }
  return;
}

