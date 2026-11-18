// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 39

// SetEventDrop_WrapperImpl @ 14b6815d0

void __cdecl UDS_VM_ItemBasket::SetEventDrop_WrapperImpl(void *param_1,void *param_2)

{
  if ((*(longlong *)((longlong)param_1 + 0x248) != 0) &&
     (*(longlong *)((longlong)param_1 + 0x250) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014be2de0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x250) + 0x70))();
    return;
  }
  return;
}

// SetClickBasketAction_WrapperImpl @ 14b6815e0

void __cdecl UDS_VM_ItemBasket::SetClickBasketAction_WrapperImpl(void *param_1,void *param_2)

{
  if ((*(longlong *)((longlong)param_1 + 0x248) != 0) &&
     (*(longlong *)((longlong)param_1 + 0x250) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014be2c14e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x250) + 0x78))();
    return;
  }
  return;
}

// SetClickClearBasket_WrapperImpl @ 14b6815f0

void __cdecl UDS_VM_ItemBasket::SetClickClearBasket_WrapperImpl(void *param_1,void *param_2)

{
  if ((*(longlong *)((longlong)param_1 + 0x248) != 0) &&
     (*(longlong *)((longlong)param_1 + 0x250) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014be2c2de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x250) + 0x80))();
    return;
  }
  return;
}

// SetBasketTitle_WrapperImpl @ 14b681600

void __cdecl UDS_VM_ItemBasket::SetBasketTitle_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::BasketTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BasketTitle.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x1a0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetBasketActionButtonText_WrapperImpl @ 14b681610

void __cdecl UDS_VM_ItemBasket::SetBasketActionButtonText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::BasketActionButtonText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BasketActionButtonText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x1f0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbDisabledBasketActionButton_WrapperImpl @ 14b681620

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemBasket::SetbDisabledBasketActionButton_WrapperImpl(void *param_1,void *param_2)

{
  SetDisabledBasketActionButton(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b681630

UClass * __cdecl UDS_VM_ItemBasket::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemBasket.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemBasket",
               &Z_Registration_Info_UClass_UDS_VM_ItemBasket.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemBasket,0x260,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemBasket>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemBasket>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemBasket.InnerSingleton;
}

// UDS_VM_ItemBasket @ 14b683ce0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemBasket * __thiscall
UDS_VM_ItemBasket::UDS_VM_ItemBasket(UDS_VM_ItemBasket *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_QuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemBasket__6B_;
  (this->VM_MoneyDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr = (UDS_VM_MoneyTooltipDetector *)0x0;
  (this->EntryBindingEventField_Basket).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayMax = 0;
  *(undefined1 *)&(this->EventDrop)._padding_ = 0;
  (this->EventDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventDrop).PointerEvent);
  (this->EventDrop).DragCanceled = false;
  (this->ClickBasketAction)._padding_ = '\0';
  (this->ClickBasketAction).bIsCustomSelected = false;
  (this->ClickBasketAction).bIsLacked = false;
  (this->ClickBasketAction).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickBasketAction).Delegate = 0;
  *(undefined8 *)&(this->ClickBasketAction).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBasketAction).Delegate.field_0x10 = 0;
  (this->ClickClearBasket)._padding_ = '\0';
  (this->ClickClearBasket).bIsCustomSelected = false;
  (this->ClickClearBasket).bIsLacked = false;
  (this->ClickClearBasket).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClearBasket).Delegate = 0;
  *(undefined8 *)&(this->ClickClearBasket).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClearBasket).Delegate.field_0x10 = 0;
  (this->BasketTitle).StringTableType = None;
  (this->BasketTitle).StringTableID = 0;
  (this->BasketTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BasketTitle).StringEnumTableNameID.Number = 0;
  (this->BasketTitle).DateTime.Ticks = 0;
  (this->BasketTitle).TimeSpan.Ticks = 0;
  (this->BasketTitle).TimeExpressionType = None;
  (this->BasketTitle).IsExpression = false;
  (this->BasketTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BasketTitle).UniqueString.Data.ArrayNum = 0;
  (this->BasketTitle).UniqueString.Data.ArrayMax = 0;
  (this->BasketTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BasketTitle).FormatArgs.ArrayNum = 0;
  (this->BasketTitle).FormatArgs.ArrayMax = 0;
  (this->BasketActionButtonText).StringTableType = None;
  (this->BasketActionButtonText).StringTableID = 0;
  (this->BasketActionButtonText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BasketActionButtonText).StringEnumTableNameID.Number = 0;
  (this->BasketActionButtonText).DateTime.Ticks = 0;
  (this->BasketActionButtonText).TimeSpan.Ticks = 0;
  (this->BasketActionButtonText).TimeExpressionType = None;
  (this->BasketActionButtonText).IsExpression = false;
  (this->BasketActionButtonText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BasketActionButtonText).UniqueString.Data.ArrayNum = 0;
  (this->BasketActionButtonText).UniqueString.Data.ArrayMax = 0;
  (this->BasketActionButtonText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BasketActionButtonText).FormatArgs.ArrayNum = 0;
  (this->BasketActionButtonText).FormatArgs.ArrayMax = 0;
  this->bDisabledBasketActionButton = false;
  this->bIsAbleGarbage = false;
  *(undefined8 *)&this->BasketInterface = 0;
  *(undefined8 *)&(this->BasketInterface).field_0x8 = 0;
  (this->BasketWeightModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->BasketWeightModel).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// UDS_VM_ItemBasket @ 14b683e70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemBasket * __thiscall
UDS_VM_ItemBasket::UDS_VM_ItemBasket(UDS_VM_ItemBasket *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_QuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemBasket__6B_;
  (this->VM_MoneyDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr = (UDS_VM_MoneyTooltipDetector *)0x0;
  (this->EntryBindingEventField_Basket).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayMax = 0;
  *(undefined1 *)&(this->EventDrop)._padding_ = 0;
  (this->EventDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventDrop).PointerEvent);
  (this->EventDrop).DragCanceled = false;
  (this->ClickBasketAction)._padding_ = '\0';
  (this->ClickBasketAction).bIsCustomSelected = false;
  (this->ClickBasketAction).bIsLacked = false;
  (this->ClickBasketAction).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickBasketAction).Delegate = 0;
  *(undefined8 *)&(this->ClickBasketAction).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBasketAction).Delegate.field_0x10 = 0;
  (this->ClickClearBasket)._padding_ = '\0';
  (this->ClickClearBasket).bIsCustomSelected = false;
  (this->ClickClearBasket).bIsLacked = false;
  (this->ClickClearBasket).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClearBasket).Delegate = 0;
  *(undefined8 *)&(this->ClickClearBasket).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClearBasket).Delegate.field_0x10 = 0;
  (this->BasketTitle).StringTableType = None;
  (this->BasketTitle).StringTableID = 0;
  (this->BasketTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BasketTitle).StringEnumTableNameID.Number = 0;
  (this->BasketTitle).DateTime.Ticks = 0;
  (this->BasketTitle).TimeSpan.Ticks = 0;
  (this->BasketTitle).TimeExpressionType = None;
  (this->BasketTitle).IsExpression = false;
  (this->BasketTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BasketTitle).UniqueString.Data.ArrayNum = 0;
  (this->BasketTitle).UniqueString.Data.ArrayMax = 0;
  (this->BasketTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BasketTitle).FormatArgs.ArrayNum = 0;
  (this->BasketTitle).FormatArgs.ArrayMax = 0;
  (this->BasketActionButtonText).StringTableType = None;
  (this->BasketActionButtonText).StringTableID = 0;
  (this->BasketActionButtonText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BasketActionButtonText).StringEnumTableNameID.Number = 0;
  (this->BasketActionButtonText).DateTime.Ticks = 0;
  (this->BasketActionButtonText).TimeSpan.Ticks = 0;
  (this->BasketActionButtonText).TimeExpressionType = None;
  (this->BasketActionButtonText).IsExpression = false;
  (this->BasketActionButtonText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BasketActionButtonText).UniqueString.Data.ArrayNum = 0;
  (this->BasketActionButtonText).UniqueString.Data.ArrayMax = 0;
  (this->BasketActionButtonText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BasketActionButtonText).FormatArgs.ArrayNum = 0;
  (this->BasketActionButtonText).FormatArgs.ArrayMax = 0;
  this->bDisabledBasketActionButton = false;
  this->bIsAbleGarbage = false;
  *(undefined8 *)&this->BasketInterface = 0;
  *(undefined8 *)&(this->BasketInterface).field_0x8 = 0;
  (this->BasketWeightModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->BasketWeightModel).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UDS_VM_ItemBasket @ 14b684440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemBasket::~UDS_VM_ItemBasket(UDS_VM_ItemBasket *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemBasket__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->BasketActionButtonText).FormatArgs.AllocatorInstance.Data,
             (this->BasketActionButtonText).FormatArgs.ArrayNum);
  pFVar1 = (this->BasketActionButtonText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BasketActionButtonText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->BasketTitle).FormatArgs.AllocatorInstance.Data,
             (this->BasketTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->BasketTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BasketTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClearBasket).Delegate);
  pvVar2 = *(void **)&(this->ClickClearBasket).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClearBasket).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickBasketAction).Delegate);
  pvVar2 = *(void **)&(this->ClickBasketAction).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickBasketAction).Delegate);
  FPointerEvent::~FPointerEvent(&(this->EventDrop).PointerEvent);
  pFVar1 = (this->EntryBindingEventField_Basket).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b685090

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_ItemBasket::GetFieldNotificationDescriptor(UDS_VM_ItemBasket *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemBasket::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6854c0

UClass * __cdecl UDS_VM_ItemBasket::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemBasket.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemBasket",
               &Z_Registration_Info_UClass_UDS_VM_ItemBasket.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemBasket,0x260,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemBasket>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemBasket>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemBasket.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemBasket @ 14b685690

void __cdecl UDS_VM_ItemBasket::StaticRegisterNativesUDS_VM_ItemBasket(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemBasket_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b685c10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_ItemBasket::__VTableCtorCaller(FVTableHelper *param_1)

{
  FSharedReferencer<1> *this;
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this_00;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this_00 = (UDS_ViewModelBase *)
            StaticAllocateObject
                      (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                       Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                       (FGCReconstructionGuard *)0x0);
  if (this_00 != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this_00,param_1);
    this_00->_padding_ = (longlong)&_vftable__for__UObject__;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this_00->_padding_ = (longlong)&___7UDS_VM_ItemBasket__6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined1 *)&this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    FPointerEvent::FPointerEvent((FPointerEvent *)&this_00[1]._padding_);
    *(undefined1 *)&this_00[2]._padding_ = 0;
    this = &this_00[3].ViewModelContext.SharedReferenceCount;
    *(undefined4 *)&this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0;
    *(undefined4 *)&this_00[2]._padding_ = 0;
    *(undefined4 *)&this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0;
    *(undefined4 *)&this_00[2]._padding_ = 0;
    *(undefined1 *)&this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0;
    this_00[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this_00[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this_00[2].Visibility = Visible;
    *(undefined3 *)&this_00[2].field_0x81 = 0;
    this_00[2].VMName.ComparisonIndex = 0;
    this_00[2].VMName.Number = 0;
    this_00[2].bIsCloseInit = false;
    this_00[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[2].TextPropertyIDList.ArrayNum = 0;
    this_00[2].TextPropertyIDList.ArrayMax = 0;
    this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    *(undefined1 *)&this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    *(undefined4 *)&this_00[3]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[3]._padding_ + 4) = 0;
    this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    *(undefined2 *)&this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    this_00[3].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this->ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_res10 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res10);
    return (UObject *)this_00;
  }
  return (UObject *)0x0;
}

// execGetBasketMoneyIconID @ 14b6860e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemBasket::execGetBasketMoneyIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetBasketMoneyIconID((UDS_VM_ItemBasket *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGetBasketMoneyQuantity @ 14b686120

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemBasket::execGetBasketMoneyQuantity(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetBasketMoneyQuantity((UDS_VM_ItemBasket *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGetBasketMoneyType @ 14b686160

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemBasket::execGetBasketMoneyType(UObject *param_1,FFrame *param_2,void *param_3)

{
  EDS_MoneyType EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = GetBasketMoneyType((UDS_VM_ItemBasket *)param_1);
  *(EDS_MoneyType *)param_3 = EVar1;
  return;
}

// execGetBasketMoneyVisibility @ 14b6861a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemBasket::execGetBasketMoneyVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = GetBasketMoneyVisibility((UDS_VM_ItemBasket *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// BindModel @ 14be119c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemBasket::BindModel(UDS_VM_ItemBasket *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedBasketType,
               this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ItemBasketType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_ItemBasket>
              (&pUVar1->OnChangedBasketType,(UDS_VM_ItemBasket *)&stack0x00000010,
               (pmf_77b5298b *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasket,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemBasket>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBasket,(UDS_VM_ItemBasket *)&stack0x00000010,(pmf_16d8c9d2 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasketSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemBasket>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBasketSlot,(UDS_VM_ItemBasket *)&stack0x00000010,
               (pmf_62420206 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemovedBasketSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemBasket>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemovedBasketSlot,(UDS_VM_ItemBasket *)&stack0x00000010,
               (pmf_62420206 *)this);
  }
  return;
}

// GetBasketMoneyIconID @ 14be20350

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_ItemBasket::GetBasketMoneyIconID(UDS_VM_ItemBasket *this)

{
  int iVar1;
  
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014be2036e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x50))();
    return iVar1;
  }
  return 0;
}

// GetBasketMoneyQuantity @ 14be20380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_ItemBasket::GetBasketMoneyQuantity(UDS_VM_ItemBasket *this)

{
  int iVar1;
  
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014be2039e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x58))();
    return iVar1;
  }
  return 0;
}

// GetBasketMoneyType @ 14be203b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_MoneyType __thiscall UDS_VM_ItemBasket::GetBasketMoneyType(UDS_VM_ItemBasket *this)

{
  EDS_MoneyType EVar1;
  
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014be203ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x48))();
    return EVar1;
  }
  return None;
}

// GetBasketMoneyVisibility @ 14be203e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESlateVisibility __thiscall UDS_VM_ItemBasket::GetBasketMoneyVisibility(UDS_VM_ItemBasket *this)

{
  ESlateVisibility EVar1;
  
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014be203fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x60))();
    return EVar1;
  }
  return Collapsed;
}

// InitViewModel @ 14be250c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_ItemBasket::InitViewModel(UDS_VM_ItemBasket *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_W_CommonQuantityControl *pUVar3;
  UDS_VM_MoneyDisplay *pUVar4;
  UDS_VM_MoneyTooltipDetector *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_QuantityControl).field0_0x0.DebugPtr == (UDS_VM_W_CommonQuantityControl *)0x0) {
    local_a8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_W_CommonQuantityControl_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_W_CommonQuantityControl_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar3 = (UDS_VM_W_CommonQuantityControl *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_W_CommonQuantityControl *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_W_CommonQuantityControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_QuantityControl).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_MoneyDisplay).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr == (UDS_VM_MoneyTooltipDetector *)0x0) {
    local_a8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_MoneyTooltipDetector_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_MoneyTooltipDetector_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_MoneyTooltipDetector *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_MoneyTooltipDetector *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_MoneyTooltipDetector *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnChangedBasketType @ 14be29960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemBasket::OnChangedBasketType(UDS_VM_ItemBasket *this,EDS_ItemBasketType param_1)

{
  longlong *plVar1;
  FName FVar2;
  int iVar3;
  UDS_NPCShopEvent *pUVar4;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FDS_Text *pFVar5;
  longlong *plVar6;
  EDS_ItemBasketType local_res10 [2];
  FName local_88;
  ulonglong uStack_80;
  undefined1 local_78 [48];
  void *local_48;
  FDS_TextFormatArg *local_38;
  int local_30;
  
  local_res10[0] = param_1;
  pUVar4 = UDS_NPCShopEvent::GetEvent();
  plVar6 = (longlong *)0x0;
  if (pUVar4 != (UDS_NPCShopEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::Remove<UDS_VM_ItemBasket>
              (&pUVar4->OnSelectedBasketSlot,this);
    local_88 = (FName)OnSelectedBasketSlot;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<enum_EDS_ItemBasketType_const_&>
                        (&(pUVar4->OnSelectedBasketSlot).Subscriptions,local_res10[0],local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemBasket>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
               this_00,(UDS_VM_ItemBasket *)&stack0x00000008,(pmf_62420206 *)this);
  }
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
    plVar1 = *(longlong **)&(this->BasketInterface).field_0x8;
    pFVar5 = (FDS_Text *)(**(code **)(*plVar1 + 0x38))(plVar1,local_78);
    iVar3 = FFieldNotificationClassDescriptor::BasketTitle.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::BasketTitle.FieldName;
    FDS_Text::operator=(&this->BasketTitle,pFVar5);
    local_88 = FVar2;
    uStack_80 = CONCAT44(uStack_80._4_4_,iVar3);
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    DestructItems<FDS_TextFormatArg,int>(local_38,local_30);
    if (local_38 != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if (*(longlong *)&this->BasketInterface != 0) {
      plVar6 = *(longlong **)&(this->BasketInterface).field_0x8;
    }
    pFVar5 = (FDS_Text *)(**(code **)(*plVar6 + 0x40))(plVar6,local_78);
    iVar3 = FFieldNotificationClassDescriptor::BasketActionButtonText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::BasketActionButtonText.FieldName;
    FDS_Text::operator=(&this->BasketActionButtonText,pFVar5);
    local_88 = FVar2;
    uStack_80 = CONCAT44(uStack_80._4_4_,iVar3);
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    DestructItems<FDS_TextFormatArg,int>(local_38,local_30);
    if (local_38 != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    UpdateBasketSlots(this);
    UpdateBasketInfos(this);
  }
  return;
}

// OnClickBasketAction @ 14be2c130

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemBasket::OnClickBasketAction(UDS_VM_ItemBasket *this,FDS_ButtonEventField *param_1)

{
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014be2c14e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x78))();
    return;
  }
  return;
}

// OnClickClearBasket @ 14be2c2c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemBasket::OnClickClearBasket(UDS_VM_ItemBasket *this,FDS_ButtonEventField *param_1)

{
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014be2c2de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x80))();
    return;
  }
  return;
}

// OnEventDrop @ 14be2ddf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemBasket::OnEventDrop(UDS_VM_ItemBasket *this,FDS_DragDropEventField *param_1)

{
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014be2de0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x70))();
    return;
  }
  return;
}

// OnRemovedBasketSlot @ 14be32c40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemBasket::OnRemovedBasketSlot(UDS_VM_ItemBasket *this,int param_1)

{
  UDS_VM_W_CommonQuantityControl *this_00;
  UDS_VM_MoneyDisplay *this_01;
  code *pcVar1;
  FName FVar2;
  FDS_ViewModelContext_MoneyDisplay *pFVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UDS_M_Weight *this_02;
  UObject *pUVar8;
  longlong *plVar9;
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_10;
  FName FStack_88;
  int iStack_80;
  FName FStack_78;
  int iStack_70;
  FName FStack_68;
  int iStack_60;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> TStack_58;
  FDS_ViewModelContext *pFStack_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedPtr<FDS_ViewModelContext,1> TStack_38;
  TSharedPtr<FDS_ViewModelContext,1> TStack_28;
  
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
    if ((this->VM_QuantityControl).field0_0x0.DebugPtr != (UDS_VM_W_CommonQuantityControl *)0x0) {
      plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
      (**(code **)(*plVar9 + 0x30))(plVar9,&pFStack_48);
      this_00 = (this->VM_QuantityControl).field0_0x0.DebugPtr;
      TStack_38.Object = pFStack_48;
      TStack_38.SharedReferenceCount.ReferenceController = pTStack_40;
      if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&TStack_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
    }
    if (*(longlong *)&this->BasketInterface == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
    }
    iVar6 = (**(code **)(*plVar9 + 0x18))();
    iVar7 = FFieldNotificationClassDescriptor::bDisabledBasketActionButton.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::bDisabledBasketActionButton.FieldName;
    if (this->bDisabledBasketActionButton != iVar6 < 1) {
      this->bDisabledBasketActionButton = iVar6 < 1;
      iStack_80 = iVar7;
      FStack_88 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_88);
    }
    if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr != (UDS_VM_MoneyDisplay *)0x0) {
      MakeContext<FDS_ViewModelContext_MoneyDisplay>(&TStack_58);
      if ((*(longlong *)&this->BasketInterface == 0) ||
         (*(longlong *)&(this->BasketInterface).field_0x8 == 0)) {
        bVar4 = 0;
      }
      else {
        bVar4 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x48))();
      }
      pFVar3 = TStack_58.Object;
      if ((TStack_58.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3->MoneyId = (ulonglong)bVar4;
      if ((*(longlong *)&this->BasketInterface == 0) ||
         (*(longlong *)&(this->BasketInterface).field_0x8 == 0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x58))();
      }
      TStack_28.Object = (FDS_ViewModelContext *)TStack_58.Object;
      TStack_28.SharedReferenceCount.ReferenceController =
           TStack_58.SharedReferenceCount.ReferenceController;
      pFVar3->Quantity = (longlong)iVar7;
      this_01 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
      if (TStack_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&TStack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_58.SharedReferenceCount.ReferenceController);
    }
    iStack_70 = FFieldNotificationClassDescriptor::GetBasketMoneyType.BitNumber;
    FStack_78 = FFieldNotificationClassDescriptor::GetBasketMoneyType.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_78);
    iStack_60 = FFieldNotificationClassDescriptor::GetBasketMoneyVisibility.BitNumber;
    FStack_68 = FFieldNotificationClassDescriptor::GetBasketMoneyVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_68);
    bVar5 = FWeakObjectPtr::IsValid(&(this->BasketWeightModel).WeakPtr);
    if (bVar5) {
      this_02 = (UDS_M_Weight *)FWeakObjectPtr::Get(&(this->BasketWeightModel).WeakPtr);
      if (*(longlong *)&this->BasketInterface == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
      }
      iVar7 = (**(code **)(*plVar9 + 0x68))();
      UDS_M_Weight::SetAddWeight(this_02,iVar7);
      pUVar8 = FWeakObjectPtr::Get(&(this->BasketWeightModel).WeakPtr);
      uStackX_10 = 0;
      FStackX_8.ObjectIndex = 0;
      FStackX_8.ObjectSerialNumber = 0;
      pcVar1 = *(code **)(*(longlong *)pUVar8 + 0x2e0);
      FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
      (*pcVar1)(pUVar8,FStackX_8,0);
    }
  }
  return;
}

// OnSelectedBasketSlot @ 14be33000

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemBasket::OnSelectedBasketSlot(UDS_VM_ItemBasket *this,int param_1)

{
  UDS_VM_W_CommonQuantityControl *this_00;
  UDS_VM_MoneyDisplay *this_01;
  code *pcVar1;
  FName FVar2;
  FDS_ViewModelContext_MoneyDisplay *pFVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UDS_M_Weight *this_02;
  UObject *pUVar8;
  longlong *plVar9;
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_10;
  FName FStack_88;
  int iStack_80;
  FName FStack_78;
  int iStack_70;
  FName FStack_68;
  int iStack_60;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> TStack_58;
  FDS_ViewModelContext *pFStack_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedPtr<FDS_ViewModelContext,1> TStack_38;
  TSharedPtr<FDS_ViewModelContext,1> TStack_28;
  
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
    if ((this->VM_QuantityControl).field0_0x0.DebugPtr != (UDS_VM_W_CommonQuantityControl *)0x0) {
      plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
      (**(code **)(*plVar9 + 0x30))(plVar9,&pFStack_48);
      this_00 = (this->VM_QuantityControl).field0_0x0.DebugPtr;
      TStack_38.Object = pFStack_48;
      TStack_38.SharedReferenceCount.ReferenceController = pTStack_40;
      if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&TStack_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
    }
    if (*(longlong *)&this->BasketInterface == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
    }
    iVar6 = (**(code **)(*plVar9 + 0x18))();
    iVar7 = FFieldNotificationClassDescriptor::bDisabledBasketActionButton.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::bDisabledBasketActionButton.FieldName;
    if (this->bDisabledBasketActionButton != iVar6 < 1) {
      this->bDisabledBasketActionButton = iVar6 < 1;
      iStack_80 = iVar7;
      FStack_88 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_88);
    }
    if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr != (UDS_VM_MoneyDisplay *)0x0) {
      MakeContext<FDS_ViewModelContext_MoneyDisplay>(&TStack_58);
      if ((*(longlong *)&this->BasketInterface == 0) ||
         (*(longlong *)&(this->BasketInterface).field_0x8 == 0)) {
        bVar4 = 0;
      }
      else {
        bVar4 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x48))();
      }
      pFVar3 = TStack_58.Object;
      if ((TStack_58.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3->MoneyId = (ulonglong)bVar4;
      if ((*(longlong *)&this->BasketInterface == 0) ||
         (*(longlong *)&(this->BasketInterface).field_0x8 == 0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x58))();
      }
      TStack_28.Object = (FDS_ViewModelContext *)TStack_58.Object;
      TStack_28.SharedReferenceCount.ReferenceController =
           TStack_58.SharedReferenceCount.ReferenceController;
      pFVar3->Quantity = (longlong)iVar7;
      this_01 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
      if (TStack_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&TStack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_58.SharedReferenceCount.ReferenceController);
    }
    iStack_70 = FFieldNotificationClassDescriptor::GetBasketMoneyType.BitNumber;
    FStack_78 = FFieldNotificationClassDescriptor::GetBasketMoneyType.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_78);
    iStack_60 = FFieldNotificationClassDescriptor::GetBasketMoneyVisibility.BitNumber;
    FStack_68 = FFieldNotificationClassDescriptor::GetBasketMoneyVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_68);
    bVar5 = FWeakObjectPtr::IsValid(&(this->BasketWeightModel).WeakPtr);
    if (bVar5) {
      this_02 = (UDS_M_Weight *)FWeakObjectPtr::Get(&(this->BasketWeightModel).WeakPtr);
      if (*(longlong *)&this->BasketInterface == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
      }
      iVar7 = (**(code **)(*plVar9 + 0x68))();
      UDS_M_Weight::SetAddWeight(this_02,iVar7);
      pUVar8 = FWeakObjectPtr::Get(&(this->BasketWeightModel).WeakPtr);
      uStackX_10 = 0;
      FStackX_8.ObjectIndex = 0;
      FStackX_8.ObjectSerialNumber = 0;
      pcVar1 = *(code **)(*(longlong *)pUVar8 + 0x2e0);
      FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
      (*pcVar1)(pUVar8,FStackX_8,0);
    }
  }
  return;
}

// OnSetViewModel @ 14be39030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemBasket::OnSetViewModel
          (UDS_VM_ItemBasket *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_W_CommonQuantityControl *this_00;
  UDS_VM_MoneyDisplay *this_01;
  UDS_VM_MoneyTooltipDetector *this_02;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EDS_ItemBasketType EVar5;
  UDS_LogManager *pUVar6;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *pUVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  undefined1 auStackY_208 [32];
  TSharedPtr<FDS_ViewModelContext_ItemBasket,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_1a8.Object = param_1->Object;
  local_1a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ItemBasket>(&local_1d8,&local_1a8);
  if (local_1d8.Object == (FDS_ViewModelContext_ItemBasket *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_ItemBasket::OnSetViewModel",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_158.Ptr,0x19,L"itemShopContext.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    if ((local_1d8.Object == (FDS_ViewModelContext_ItemBasket *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)&(local_1d8.Object)->BasketInterface != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)&(local_1d8.Object)->BasketInterface);
    }
    *(undefined8 *)&this->BasketInterface = *(undefined8 *)&(local_1d8.Object)->BasketInterface;
    *(undefined8 *)&(this->BasketInterface).field_0x8 =
         *(undefined8 *)&((local_1d8.Object)->BasketInterface).field_0x8;
    if ((local_1d8.Object == (FDS_ViewModelContext_ItemBasket *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar12 = (FDS_ViewModelContext *)0x0;
    (this->BasketWeightModel).WeakPtr = ((local_1d8.Object)->BasketWeightModel).WeakPtr;
    if ((this->VM_QuantityControl).field0_0x0.DebugPtr != (UDS_VM_W_CommonQuantityControl *)0x0) {
      pFVar7 = ::operator_new(0x88);
      pFVar11 = pFVar12;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
        *(undefined8 *)&pFVar7[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7[1].field_0x1c = 0;
        *(undefined8 *)((longlong)&pFVar7[2]._padding_ + 4) = 0;
        *(undefined8 *)((atomic<int> *)&pFVar7[2].DerivedStaticStruct + 1) = 0;
        *(undefined8 *)&pFVar7[2].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7[2].field_0x1c = 0;
        *(undefined8 *)((longlong)&pFVar7[3]._padding_ + 4) = 0;
        *(undefined8 *)((atomic<int> *)&pFVar7[3].DerivedStaticStruct + 1) = 0;
        *(undefined8 *)&pFVar7[3].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7[3].field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar7[4]._padding_ + 4) = 0;
        pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonQuantityControl__6B_;
        *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
        (pFVar7->ViewModelName).ComparisonIndex = 0;
        (pFVar7->ViewModelName).Number = 0;
        pFVar7[1]._padding_ = 0;
        *(atomic<int> *)&pFVar7[1].DerivedStaticStruct = (atomic<int>)0x0;
        *(undefined8 *)((atomic<int> *)&pFVar7[1].DerivedStaticStruct + 1) = 0x3f800000;
        FText::FromString((FText *)&pFVar7[1].ViewModelTemplateKey,L"Quantity");
        *(undefined1 *)&pFVar7[2].DerivedStaticStruct = 1;
        pFVar7[2].ViewModelName.ComparisonIndex = 0;
        pFVar7[2].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7[2].ViewModelTemplateKey = 0;
        pFVar7[3]._padding_ = 0;
        *(undefined8 *)&pFVar7[3].DerivedStaticStruct = 2;
        pFVar7[3].ViewModelName.ComparisonIndex = 0;
        pFVar7[3].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7[3].ViewModelTemplateKey = 0;
        *(undefined4 *)&pFVar7[4]._padding_ = 0;
        pFVar11 = pFVar7;
      }
      pFVar8 = ::operator_new(0x20);
      pFVar7 = pFVar12;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        pFVar8->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonQuantityControl__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar11;
        pFVar7 = pFVar8;
      }
      if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar9 = FDS_ViewModelContext_CommonQuantityControl::StaticStruct();
      *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar9;
      pUVar10 = UDS_ViewModelContextManager::GetInst();
      if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar7->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_1c8.Object = pFVar11;
        local_1c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_1c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c8.SharedReferenceCount.ReferenceController);
      }
      pFVar11->ViewModelTemplateKey = W_CommonQuantityControl;
      *(undefined4 *)&pFVar11[1]._padding_ = 0x3f800000;
      iVar4 = DS_CommonDataHelper::ItemValueMax();
      *(float *)((longlong)&pFVar11[1]._padding_ + 4) = (float)iVar4;
      *(atomic<int> *)&pFVar11[1].DerivedStaticStruct = (atomic<int>)0x3f800000;
      ((atomic<int> *)&pFVar11[1].DerivedStaticStruct)[1] = (atomic<int>)0x3f800000;
      this_00 = (this->VM_QuantityControl).field0_0x0.DebugPtr;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_198.Object = pFVar11;
      local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_198);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar7);
    }
    if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr != (UDS_VM_MoneyDisplay *)0x0) {
      MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_178);
      this_01 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
      local_168.Object = (FDS_ViewModelContext *)local_178.Object;
      local_168.SharedReferenceCount.ReferenceController =
           local_178.SharedReferenceCount.ReferenceController;
      if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
    }
    if ((this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr != (UDS_VM_MoneyTooltipDetector *)0x0) {
      pFVar7 = ::operator_new(0x48);
      pFVar11 = pFVar12;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
        pFVar7[1].ViewModelName.ComparisonIndex = 0;
        pFVar7[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
        (pFVar7->ViewModelName).ComparisonIndex = 0;
        (pFVar7->ViewModelName).Number = 0;
        pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyTooltipDetector__6B_;
        pFVar7[1]._padding_ = 0;
        *(undefined8 *)&pFVar7[1].DerivedStaticStruct = 0;
        *(undefined8 *)&pFVar7[1].ViewModelTemplateKey = 0;
        pFVar7[2]._padding_ = 0;
        pFVar11 = pFVar7;
      }
      pFVar8 = ::operator_new(0x20);
      pFVar7 = pFVar12;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        pFVar8->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyTooltipDetector__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar11;
        pFVar7 = pFVar8;
      }
      if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar9 = FDS_ViewModelContext_MoneyTooltipDetector::StaticStruct();
      *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar9;
      pUVar10 = UDS_ViewModelContextManager::GetInst();
      if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar7->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_1b8.Object = pFVar11;
        local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_1b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.SharedReferenceCount.ReferenceController);
      }
      pFVar11->ViewModelTemplateKey = MoneyTooltipDetector;
      *(undefined1 *)&pFVar11[1].ViewModelName.ComparisonIndex.Value = 0;
      *(undefined8 *)&pFVar11[1].ViewModelTemplateKey = 0x4084500000000000;
      pFVar11[2]._padding_ = 0x4051800000000000;
      this_02 = (this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_188.Object = pFVar11;
      local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar7);
    }
    if (*(longlong *)&this->BasketInterface != 0) {
      pFVar12 = *(FDS_ViewModelContext **)&(this->BasketInterface).field_0x8;
    }
    EVar5 = (**(code **)(pFVar12->_padding_ + 0x10))(pFVar12);
    OnChangedBasketType(this,EVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdatedBasket @ 14be451f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemBasket::OnUpdatedBasket(UDS_VM_ItemBasket *this)

{
  UpdateBasketSlots(this);
  UpdateBasketInfos(this);
  return;
}

// OnUpdatedBasketSlot @ 14be45220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemBasket::OnUpdatedBasketSlot(UDS_VM_ItemBasket *this,int param_1)

{
  UDS_VM_W_CommonQuantityControl *this_00;
  UDS_VM_MoneyDisplay *this_01;
  code *pcVar1;
  FName FVar2;
  FDS_ViewModelContext_MoneyDisplay *pFVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UDS_M_Weight *this_02;
  UObject *pUVar8;
  longlong *plVar9;
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_10;
  FName FStack_88;
  int iStack_80;
  FName FStack_78;
  int iStack_70;
  FName FStack_68;
  int iStack_60;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> TStack_58;
  FDS_ViewModelContext *pFStack_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedPtr<FDS_ViewModelContext,1> TStack_38;
  TSharedPtr<FDS_ViewModelContext,1> TStack_28;
  
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
    if ((this->VM_QuantityControl).field0_0x0.DebugPtr != (UDS_VM_W_CommonQuantityControl *)0x0) {
      plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
      (**(code **)(*plVar9 + 0x30))(plVar9,&pFStack_48);
      this_00 = (this->VM_QuantityControl).field0_0x0.DebugPtr;
      TStack_38.Object = pFStack_48;
      TStack_38.SharedReferenceCount.ReferenceController = pTStack_40;
      if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&TStack_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
    }
    if (*(longlong *)&this->BasketInterface == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
    }
    iVar6 = (**(code **)(*plVar9 + 0x18))();
    iVar7 = FFieldNotificationClassDescriptor::bDisabledBasketActionButton.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::bDisabledBasketActionButton.FieldName;
    if (this->bDisabledBasketActionButton != iVar6 < 1) {
      this->bDisabledBasketActionButton = iVar6 < 1;
      iStack_80 = iVar7;
      FStack_88 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_88);
    }
    if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr != (UDS_VM_MoneyDisplay *)0x0) {
      MakeContext<FDS_ViewModelContext_MoneyDisplay>(&TStack_58);
      if ((*(longlong *)&this->BasketInterface == 0) ||
         (*(longlong *)&(this->BasketInterface).field_0x8 == 0)) {
        bVar4 = 0;
      }
      else {
        bVar4 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x48))();
      }
      pFVar3 = TStack_58.Object;
      if ((TStack_58.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3->MoneyId = (ulonglong)bVar4;
      if ((*(longlong *)&this->BasketInterface == 0) ||
         (*(longlong *)&(this->BasketInterface).field_0x8 == 0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x58))();
      }
      TStack_28.Object = (FDS_ViewModelContext *)TStack_58.Object;
      TStack_28.SharedReferenceCount.ReferenceController =
           TStack_58.SharedReferenceCount.ReferenceController;
      pFVar3->Quantity = (longlong)iVar7;
      this_01 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
      if (TStack_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&TStack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_58.SharedReferenceCount.ReferenceController);
    }
    iStack_70 = FFieldNotificationClassDescriptor::GetBasketMoneyType.BitNumber;
    FStack_78 = FFieldNotificationClassDescriptor::GetBasketMoneyType.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_78);
    iStack_60 = FFieldNotificationClassDescriptor::GetBasketMoneyVisibility.BitNumber;
    FStack_68 = FFieldNotificationClassDescriptor::GetBasketMoneyVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_68);
    bVar5 = FWeakObjectPtr::IsValid(&(this->BasketWeightModel).WeakPtr);
    if (bVar5) {
      this_02 = (UDS_M_Weight *)FWeakObjectPtr::Get(&(this->BasketWeightModel).WeakPtr);
      if (*(longlong *)&this->BasketInterface == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
      }
      iVar7 = (**(code **)(*plVar9 + 0x68))();
      UDS_M_Weight::SetAddWeight(this_02,iVar7);
      pUVar8 = FWeakObjectPtr::Get(&(this->BasketWeightModel).WeakPtr);
      uStackX_10 = 0;
      FStackX_8.ObjectIndex = 0;
      FStackX_8.ObjectSerialNumber = 0;
      pcVar1 = *(code **)(*(longlong *)pUVar8 + 0x2e0);
      FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
      (*pcVar1)(pUVar8,FStackX_8,0);
    }
  }
  return;
}

// SetBasketActionButtonText @ 14be49380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemBasket::SetBasketActionButtonText(UDS_VM_ItemBasket *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::BasketActionButtonText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BasketActionButtonText.FieldName;
  FDS_Text::operator=(&this->BasketActionButtonText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetBasketTitle @ 14be493e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemBasket::SetBasketTitle(UDS_VM_ItemBasket *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::BasketTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BasketTitle.FieldName;
  FDS_Text::operator=(&this->BasketTitle,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetDisabledBasketActionButton @ 14be4ac80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemBasket::SetDisabledBasketActionButton(UDS_VM_ItemBasket *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bDisabledBasketActionButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bDisabledBasketActionButton.FieldName;
  if (this->bDisabledBasketActionButton != param_1) {
    this->bDisabledBasketActionButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14be55430

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemBasket::UnbindModel(UDS_VM_ItemBasket *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedBasketType,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasket,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasketSlot,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemovedBasketSlot,
               this);
    FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::Remove<UDS_VM_ItemBasket>
              (&pUVar1->OnSelectedBasketSlot,this);
  }
  return;
}

// UpdateBasketInfos @ 14be561c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemBasket::UpdateBasketInfos(UDS_VM_ItemBasket *this)

{
  UDS_VM_W_CommonQuantityControl *this_00;
  UDS_VM_MoneyDisplay *this_01;
  code *pcVar1;
  FName FVar2;
  FDS_ViewModelContext_MoneyDisplay *pFVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UDS_M_Weight *this_02;
  UObject *pUVar8;
  longlong *plVar9;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_58;
  FDS_ViewModelContext *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
    if ((this->VM_QuantityControl).field0_0x0.DebugPtr != (UDS_VM_W_CommonQuantityControl *)0x0) {
      plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_48);
      this_00 = (this->VM_QuantityControl).field0_0x0.DebugPtr;
      local_38.Object = local_48;
      local_38.SharedReferenceCount.ReferenceController = pTStack_40;
      if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
    }
    if (*(longlong *)&this->BasketInterface == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
    }
    iVar6 = (**(code **)(*plVar9 + 0x18))();
    iVar7 = FFieldNotificationClassDescriptor::bDisabledBasketActionButton.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::bDisabledBasketActionButton.FieldName;
    if (this->bDisabledBasketActionButton != iVar6 < 1) {
      this->bDisabledBasketActionButton = iVar6 < 1;
      local_80 = iVar7;
      local_88 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
    if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr != (UDS_VM_MoneyDisplay *)0x0) {
      MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_58);
      if ((*(longlong *)&this->BasketInterface == 0) ||
         (*(longlong *)&(this->BasketInterface).field_0x8 == 0)) {
        bVar4 = 0;
      }
      else {
        bVar4 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x48))();
      }
      pFVar3 = local_58.Object;
      if ((local_58.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3->MoneyId = (ulonglong)bVar4;
      if ((*(longlong *)&this->BasketInterface == 0) ||
         (*(longlong *)&(this->BasketInterface).field_0x8 == 0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = (**(code **)(**(longlong **)&(this->BasketInterface).field_0x8 + 0x58))();
      }
      local_28.Object = (FDS_ViewModelContext *)local_58.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      pFVar3->Quantity = (longlong)iVar7;
      this_01 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    local_70 = FFieldNotificationClassDescriptor::GetBasketMoneyType.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::GetBasketMoneyType.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    local_60 = FFieldNotificationClassDescriptor::GetBasketMoneyVisibility.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::GetBasketMoneyVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    bVar5 = FWeakObjectPtr::IsValid(&(this->BasketWeightModel).WeakPtr);
    if (bVar5) {
      this_02 = (UDS_M_Weight *)FWeakObjectPtr::Get(&(this->BasketWeightModel).WeakPtr);
      if (*(longlong *)&this->BasketInterface == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)&(this->BasketInterface).field_0x8;
      }
      iVar7 = (**(code **)(*plVar9 + 0x68))();
      UDS_M_Weight::SetAddWeight(this_02,iVar7);
      pUVar8 = FWeakObjectPtr::Get(&(this->BasketWeightModel).WeakPtr);
      local_res10 = 0;
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      pcVar1 = *(code **)(*(longlong *)pUVar8 + 0x2e0);
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      (*pcVar1)(pUVar8,local_res8,0);
    }
  }
  return;
}

// UpdateBasketSlots @ 14be56480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemBasket::UpdateBasketSlots(UDS_VM_ItemBasket *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  bool bVar3;
  FName this_00;
  UDS_LogManager *pUVar4;
  ulonglong uVar5;
  longlong *plVar6;
  atomic<int> *paVar7;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar8;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar9;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [16];
  FName local_198;
  int local_190;
  uint local_188;
  TSharedPtr<FDS_ViewModelContext,1> *local_180;
  uint local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Basket);
  if ((*(longlong *)&this->BasketInterface != 0) &&
     (*(longlong *)&(this->BasketInterface).field_0x8 != 0)) {
    plVar6 = *(longlong **)&(this->BasketInterface).field_0x8;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_180);
    uVar5 = (ulonglong)(int)local_178;
    pTVar8 = local_180 + uVar5;
    local_188 = local_178;
    pTVar9 = local_180;
    while( true ) {
      if (local_178 != (uint)uVar5) {
        `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1a8);
      }
      if (pTVar9 == pTVar8) break;
      pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
      pFVar2 = pTVar9->Object;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        paVar7 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar7 = &pTVar1->SharedReferenceCount;
        LOCK();
        *paVar7 = (atomic<int>)((int)*paVar7 + 1);
        UNLOCK();
      }
      this_00 = (FName)NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 == (FName)0x0) goto LAB_14be565dc;
LAB_14be56577:
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar7 = (atomic<int>)((int)*paVar7 + 1);
          UNLOCK();
        }
        local_170.Object = pFVar2;
        local_170.SharedReferenceCount.ReferenceController = pTVar1;
        UDS_UserObjectListItem::AddContext((UDS_UserObjectListItem *)this_00,&local_170);
        local_198 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField_Basket,
                   (TObjectPtr<UDS_UserObjectListItem>)&local_198);
      }
      else {
        if (this_00 != (FName)0x0) {
          UE::GC::MarkAsReachable((UObject *)this_00);
          goto LAB_14be56577;
        }
LAB_14be565dc:
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_ItemBasket::UpdateBasketSlots",0x24,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0xca,L"listItem is nullptr.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      pTVar9 = pTVar9 + 1;
      uVar5 = (ulonglong)local_188;
    }
    if (*(longlong *)&this->BasketInterface == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)&(this->BasketInterface).field_0x8;
    }
    bVar3 = (bool)(**(code **)(*plVar6 + 0xa0))();
    this->bIsAbleGarbage = bVar3;
    local_190 = FFieldNotificationClassDescriptor::bIsAbleGarbage.BitNumber;
    local_198 = FFieldNotificationClassDescriptor::bIsAbleGarbage.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    DestructItems<TSharedPtr<FDS_ViewModelContext,1>,int>(local_180,local_178);
    if (local_180 != (TSharedPtr<FDS_ViewModelContext,1> *)0x0) {
      FMemory::Free(local_180);
    }
  }
  local_190 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
  local_198 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
  return;
}

