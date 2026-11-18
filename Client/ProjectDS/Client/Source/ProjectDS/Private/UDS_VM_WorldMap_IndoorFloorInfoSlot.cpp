// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetButtonClickEvent_WrapperImpl @ 14b709de0

void __cdecl
UDS_VM_WorldMap_IndoorFloorInfoSlot::SetButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WorldMapEvent *pUVar1;
  
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar1->ChangeIndoorGroupID,*(int *)((longlong)param_1 + 0x114));
    return;
  }
  return;
}

// StaticClass @ 14b709df0

UClass * __cdecl UDS_VM_WorldMap_IndoorFloorInfoSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoSlot.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_IndoorFloorInfoSlot",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_IndoorFloorInfoSlot,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_IndoorFloorInfoSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_IndoorFloorInfoSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoSlot.InnerSingleton;
}

// UDS_VM_WorldMap_IndoorFloorInfoSlot @ 14b711b20

UDS_VM_WorldMap_IndoorFloorInfoSlot * __thiscall
UDS_VM_WorldMap_IndoorFloorInfoSlot::UDS_VM_WorldMap_IndoorFloorInfoSlot
          (UDS_VM_WorldMap_IndoorFloorInfoSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IndoorFloorInfoSlot__6B_;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FloorText).StringTableType = None;
  (this->FloorText).StringTableID = 0;
  (this->FloorText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FloorText).StringEnumTableNameID.Number = 0;
  (this->FloorText).DateTime.Ticks = 0;
  (this->FloorText).TimeSpan.Ticks = 0;
  (this->FloorText).TimeExpressionType = None;
  (this->FloorText).IsExpression = false;
  (this->FloorText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloorText).UniqueString.Data.ArrayNum = 0;
  (this->FloorText).UniqueString.Data.ArrayMax = 0;
  (this->FloorText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloorText).FormatArgs.ArrayNum = 0;
  (this->FloorText).FormatArgs.ArrayMax = 0;
  this->SwitcherIndex = 0;
  this->IndoorGroupID = 0;
  (this->ButtonClickEvent)._padding_ = '\0';
  (this->ButtonClickEvent).bIsCustomSelected = false;
  (this->ButtonClickEvent).bIsLacked = false;
  (this->ButtonClickEvent).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_WorldMap_IndoorFloorInfoSlot @ 14b711bd0

UDS_VM_WorldMap_IndoorFloorInfoSlot * __thiscall
UDS_VM_WorldMap_IndoorFloorInfoSlot::UDS_VM_WorldMap_IndoorFloorInfoSlot
          (UDS_VM_WorldMap_IndoorFloorInfoSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IndoorFloorInfoSlot__6B_;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FloorText).StringTableType = None;
  (this->FloorText).StringTableID = 0;
  (this->FloorText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FloorText).StringEnumTableNameID.Number = 0;
  (this->FloorText).DateTime.Ticks = 0;
  (this->FloorText).TimeSpan.Ticks = 0;
  (this->FloorText).TimeExpressionType = None;
  (this->FloorText).IsExpression = false;
  (this->FloorText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloorText).UniqueString.Data.ArrayNum = 0;
  (this->FloorText).UniqueString.Data.ArrayMax = 0;
  (this->FloorText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloorText).FormatArgs.ArrayNum = 0;
  (this->FloorText).FormatArgs.ArrayMax = 0;
  this->SwitcherIndex = 0;
  this->IndoorGroupID = 0;
  (this->ButtonClickEvent)._padding_ = '\0';
  (this->ButtonClickEvent).bIsCustomSelected = false;
  (this->ButtonClickEvent).bIsLacked = false;
  (this->ButtonClickEvent).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_WorldMap_IndoorFloorInfoSlot @ 14b713640

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoSlot::~UDS_VM_WorldMap_IndoorFloorInfoSlot
          (UDS_VM_WorldMap_IndoorFloorInfoSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IndoorFloorInfoSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FloorText).FormatArgs.AllocatorInstance.Data,
             (this->FloorText).FormatArgs.ArrayNum);
  pFVar1 = (this->FloorText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FloorText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->ButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ButtonClickEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716d00

IClassDescriptor * __thiscall
UDS_VM_WorldMap_IndoorFloorInfoSlot::GetFieldNotificationDescriptor
          (UDS_VM_WorldMap_IndoorFloorInfoSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_IndoorFloorInfoSlot::FFieldNotificationClassDescriptor::GetDescriptor'
             ::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717f50

UClass * __cdecl UDS_VM_WorldMap_IndoorFloorInfoSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoSlot.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_IndoorFloorInfoSlot",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_IndoorFloorInfoSlot,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_IndoorFloorInfoSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_IndoorFloorInfoSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldMap_IndoorFloorInfoSlot @ 14b718ab0

void __cdecl
UDS_VM_WorldMap_IndoorFloorInfoSlot::StaticRegisterNativesUDS_VM_WorldMap_IndoorFloorInfoSlot(void)

{
  return;
}

// BindModel @ 14c06c440

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoSlot::BindModel(UDS_VM_WorldMap_IndoorFloorInfoSlot *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangedSeletedIndoorFloor,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_IndoorFloorInfoSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangedSeletedIndoorFloor,
               (UDS_VM_WorldMap_IndoorFloorInfoSlot *)&stack0x00000010,(pmf_1fb83c81 *)this);
  }
  return;
}

// InitViewModel @ 14c08c7a0

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoSlot::InitViewModel(UDS_VM_WorldMap_IndoorFloorInfoSlot *this)

{
  return;
}

// OnButtonEventField @ 14c092000

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoSlot::OnButtonEventField
          (UDS_VM_WorldMap_IndoorFloorInfoSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_WorldMapEvent *pUVar1;
  
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast(&pUVar1->ChangeIndoorGroupID,this->IndoorGroupID);
    return;
  }
  return;
}

// OnCloseInit @ 14c093050

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoSlot::OnCloseInit(UDS_VM_WorldMap_IndoorFloorInfoSlot *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnSeletedChange @ 14c0993c0

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoSlot::OnSeletedChange
          (UDS_VM_WorldMap_IndoorFloorInfoSlot *this,int param_1)

{
  uint uVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  uVar1 = (uint)(param_1 == this->IndoorGroupID);
  if (this->SwitcherIndex != uVar1) {
    this->SwitcherIndex = uVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14c099e10

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoSlot::OnSetViewModel
          (UDS_VM_WorldMap_IndoorFloorInfoSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  bool bVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  uint uVar5;
  long64 lVar6;
  int local_res10 [2];
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelConext_WorldMapIndoorFloorInfoSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
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
  SafeCast<FDS_ViewModelConext_WorldMapIndoorFloorInfoSlot>(&local_28,&local_18);
  if (local_28.Object == (FDS_ViewModelConext_WorldMapIndoorFloorInfoSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    goto LAB_14c099f2c;
  }
  this->IndoorGroupID = (local_28.Object)->IndoorGroupID;
  bVar1 = (local_28.Object)->IsSelected;
  iVar2 = (local_28.Object)->IndoorFloor;
  if (iVar2 < 0) {
    lVar6 = 0x44628;
LAB_14c099ea3:
    local_res10[0] = -iVar2;
    if (-iVar2 < 0) {
      local_res10[0] = iVar2;
    }
    FDS_Text::SetTextFormatFromStringTable<int>(&this->FloorText,StringUi,lVar6,local_res10);
    local_40 = FFieldNotificationClassDescriptor::FloorText.BitNumber;
    local_48 = FFieldNotificationClassDescriptor::FloorText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  else if (0 < iVar2) {
    lVar6 = 0x44627;
    goto LAB_14c099ea3;
  }
  iVar2 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  uVar5 = (uint)(bVar1 == true);
  if (this->SwitcherIndex != uVar5) {
    this->SwitcherIndex = uVar5;
    local_30 = iVar2;
    local_38 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
LAB_14c099f2c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14c0adc20

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoSlot::UnbindModel(UDS_VM_WorldMap_IndoorFloorInfoSlot *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangedSeletedIndoorFloor,this);
    return;
  }
  return;
}

