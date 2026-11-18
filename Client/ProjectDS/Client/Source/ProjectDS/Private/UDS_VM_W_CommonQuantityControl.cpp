// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// SetOnClickedPlusEvent_WrapperImpl @ 14b723a40

void __cdecl
UDS_VM_W_CommonQuantityControl::SetOnClickedPlusEvent_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)param_1 + 0x160) + *(float *)((longlong)param_1 + 0x170);
  if (*(float *)((longlong)param_1 + 0x16c) <= fVar1) {
    fVar1 = *(float *)((longlong)param_1 + 0x16c);
  }
  if (fVar1 <= *(float *)((longlong)param_1 + 0x168)) {
    fVar1 = *(float *)((longlong)param_1 + 0x168);
  }
  if (fVar1 != *(float *)((longlong)param_1 + 0x160)) {
    *(undefined1 *)((longlong)param_1 + 0x1b0) = 1;
    UpdateQuantity(param_1,fVar1,true);
    return;
  }
  return;
}

// SetOnClickedMinusEvent_WrapperImpl @ 14b723a50

void __cdecl
UDS_VM_W_CommonQuantityControl::SetOnClickedMinusEvent_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)param_1 + 0x160) - *(float *)((longlong)param_1 + 0x170);
  if (*(float *)((longlong)param_1 + 0x16c) <= fVar1) {
    fVar1 = *(float *)((longlong)param_1 + 0x16c);
  }
  if (fVar1 <= *(float *)((longlong)param_1 + 0x168)) {
    fVar1 = *(float *)((longlong)param_1 + 0x168);
  }
  if (fVar1 != *(float *)((longlong)param_1 + 0x160)) {
    *(undefined1 *)((longlong)param_1 + 0x1b0) = 1;
    UpdateQuantity(param_1,fVar1,true);
    return;
  }
  return;
}

// SetOnClickedMinEvent_WrapperImpl @ 14b723a60

void __cdecl
UDS_VM_W_CommonQuantityControl::SetOnClickedMinEvent_WrapperImpl(void *param_1,void *param_2)

{
  if (*(float *)((longlong)param_1 + 0x168) != *(float *)((longlong)param_1 + 0x160)) {
    *(undefined1 *)((longlong)param_1 + 0x1b0) = 1;
    UpdateQuantity(param_1,*(float *)((longlong)param_1 + 0x168),true);
    return;
  }
  return;
}

// SetOnClickedMaxEvent_WrapperImpl @ 14b723a70

void __cdecl
UDS_VM_W_CommonQuantityControl::SetOnClickedMaxEvent_WrapperImpl(void *param_1,void *param_2)

{
  if (*(float *)((longlong)param_1 + 0x16c) != *(float *)((longlong)param_1 + 0x160)) {
    *(undefined1 *)((longlong)param_1 + 0x1b0) = 1;
    UpdateQuantity(param_1,*(float *)((longlong)param_1 + 0x16c),true);
    return;
  }
  return;
}

// SetOnClickedAutoEvent_WrapperImpl @ 14b723a80

void __cdecl
UDS_VM_W_CommonQuantityControl::SetOnClickedAutoEvent_WrapperImpl(void *param_1,void *param_2)

{
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x198),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0x1a8) != 0) &&
     (*(longlong **)((longlong)param_1 + 0x1a0) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x1a0) + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// StaticClass @ 14b723a90

UClass * __cdecl UDS_VM_W_CommonQuantityControl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CommonQuantityControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CommonQuantityControl",
               &Z_Registration_Info_UClass_UDS_VM_W_CommonQuantityControl.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CommonQuantityControl,0x1c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CommonQuantityControl>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CommonQuantityControl>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CommonQuantityControl.InnerSingleton;
}

// UDS_VM_W_CommonQuantityControl @ 14b727b10

UDS_VM_W_CommonQuantityControl * __thiscall
UDS_VM_W_CommonQuantityControl::UDS_VM_W_CommonQuantityControl
          (UDS_VM_W_CommonQuantityControl *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CommonQuantityControl__6B_;
  (this->OnClickedPlusEvent)._padding_ = '\0';
  (this->OnClickedPlusEvent).bIsCustomSelected = false;
  (this->OnClickedPlusEvent).bIsLacked = false;
  (this->OnClickedPlusEvent).bIsCustomDisabled = false;
  (this->OnClickedPlusEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedPlusEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedPlusEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedPlusEvent).Delegate.field_0x8 = 0;
  (this->OnClickedMinusEvent)._padding_ = '\0';
  (this->OnClickedMinusEvent).bIsCustomSelected = false;
  (this->OnClickedMinusEvent).bIsLacked = false;
  (this->OnClickedMinusEvent).bIsCustomDisabled = false;
  (this->OnClickedMinusEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedMinusEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedMinusEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedMinusEvent).Delegate.field_0x8 = 0;
  (this->OnClickedMinEvent)._padding_ = '\0';
  (this->OnClickedMinEvent).bIsCustomSelected = false;
  (this->OnClickedMinEvent).bIsLacked = false;
  (this->OnClickedMinEvent).bIsCustomDisabled = false;
  (this->OnClickedMinEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedMinEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedMinEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedMinEvent).Delegate.field_0x8 = 0;
  (this->OnClickedMaxEvent)._padding_ = '\0';
  (this->OnClickedMaxEvent).bIsCustomSelected = false;
  (this->OnClickedMaxEvent).bIsLacked = false;
  (this->OnClickedMaxEvent).bIsCustomDisabled = false;
  (this->OnClickedMaxEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedMaxEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedMaxEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedMaxEvent).Delegate.field_0x8 = 0;
  (this->OnClickedAutoEvent)._padding_ = '\0';
  (this->OnClickedAutoEvent).bIsCustomSelected = false;
  (this->OnClickedAutoEvent).bIsLacked = false;
  (this->OnClickedAutoEvent).bIsCustomDisabled = false;
  (this->OnClickedAutoEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedAutoEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedAutoEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedAutoEvent).Delegate.field_0x8 = 0;
  this->Quantity = 0.0;
  this->QuantityRatio = 0.0;
  this->Min = 0.0;
  this->Max = 0.0;
  this->StepQuantity = 1.0;
  this->FractionalDigits = 0;
  *(undefined8 *)&this->OnQuantityChangeDelegate = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnClickAutoDelegate = 0;
  *(undefined8 *)&(this->OnClickAutoDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickAutoDelegate).field_0x10 = 0;
  this->bIsClickValueChanged = false;
  this->bIsSliderValueChanging = false;
  this->bBroadcastWithInit = true;
  FText::FText(&this->QuantityName);
  return this;
}

// UDS_VM_W_CommonQuantityControl @ 14b727c50

UDS_VM_W_CommonQuantityControl * __thiscall
UDS_VM_W_CommonQuantityControl::UDS_VM_W_CommonQuantityControl
          (UDS_VM_W_CommonQuantityControl *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CommonQuantityControl__6B_;
  (this->OnClickedPlusEvent)._padding_ = '\0';
  (this->OnClickedPlusEvent).bIsCustomSelected = false;
  (this->OnClickedPlusEvent).bIsLacked = false;
  (this->OnClickedPlusEvent).bIsCustomDisabled = false;
  (this->OnClickedPlusEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedPlusEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedPlusEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedPlusEvent).Delegate.field_0x8 = 0;
  (this->OnClickedMinusEvent)._padding_ = '\0';
  (this->OnClickedMinusEvent).bIsCustomSelected = false;
  (this->OnClickedMinusEvent).bIsLacked = false;
  (this->OnClickedMinusEvent).bIsCustomDisabled = false;
  (this->OnClickedMinusEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedMinusEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedMinusEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedMinusEvent).Delegate.field_0x8 = 0;
  (this->OnClickedMinEvent)._padding_ = '\0';
  (this->OnClickedMinEvent).bIsCustomSelected = false;
  (this->OnClickedMinEvent).bIsLacked = false;
  (this->OnClickedMinEvent).bIsCustomDisabled = false;
  (this->OnClickedMinEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedMinEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedMinEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedMinEvent).Delegate.field_0x8 = 0;
  (this->OnClickedMaxEvent)._padding_ = '\0';
  (this->OnClickedMaxEvent).bIsCustomSelected = false;
  (this->OnClickedMaxEvent).bIsLacked = false;
  (this->OnClickedMaxEvent).bIsCustomDisabled = false;
  (this->OnClickedMaxEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedMaxEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedMaxEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedMaxEvent).Delegate.field_0x8 = 0;
  (this->OnClickedAutoEvent)._padding_ = '\0';
  (this->OnClickedAutoEvent).bIsCustomSelected = false;
  (this->OnClickedAutoEvent).bIsLacked = false;
  (this->OnClickedAutoEvent).bIsCustomDisabled = false;
  (this->OnClickedAutoEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedAutoEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedAutoEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedAutoEvent).Delegate.field_0x8 = 0;
  this->Quantity = 0.0;
  this->QuantityRatio = 0.0;
  this->Min = 0.0;
  this->Max = 0.0;
  this->StepQuantity = 1.0;
  this->FractionalDigits = 0;
  *(undefined8 *)&this->OnQuantityChangeDelegate = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnClickAutoDelegate = 0;
  *(undefined8 *)&(this->OnClickAutoDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickAutoDelegate).field_0x10 = 0;
  this->bIsClickValueChanged = false;
  this->bIsSliderValueChanging = false;
  this->bBroadcastWithInit = true;
  FText::FText(&this->QuantityName);
  return this;
}

// ~UDS_VM_W_CommonQuantityControl @ 14b729140

void __thiscall
UDS_VM_W_CommonQuantityControl::~UDS_VM_W_CommonQuantityControl
          (UDS_VM_W_CommonQuantityControl *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CommonQuantityControl__6B_;
  pIVar1 = (this->QuantityName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickAutoDelegate);
  pvVar2 = *(void **)&(this->OnClickAutoDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickAutoDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnQuantityChangeDelegate).field_0x8,
             *(int *)&(this->OnQuantityChangeDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnQuantityChangeDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQuantityChangeDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickedAutoEvent).Delegate);
  pvVar2 = *(void **)&(this->OnClickedAutoEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedAutoEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickedMaxEvent).Delegate);
  pvVar2 = *(void **)&(this->OnClickedMaxEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedMaxEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickedMinEvent).Delegate);
  pvVar2 = *(void **)&(this->OnClickedMinEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedMinEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickedMinusEvent).Delegate);
  pvVar2 = *(void **)&(this->OnClickedMinusEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedMinusEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickedPlusEvent).Delegate);
  pvVar2 = *(void **)&(this->OnClickedPlusEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedPlusEvent).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72af80

IClassDescriptor * __thiscall
UDS_VM_W_CommonQuantityControl::GetFieldNotificationDescriptor(UDS_VM_W_CommonQuantityControl *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_CommonQuantityControl::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72b760

UClass * __cdecl UDS_VM_W_CommonQuantityControl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CommonQuantityControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CommonQuantityControl",
               &Z_Registration_Info_UClass_UDS_VM_W_CommonQuantityControl.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CommonQuantityControl,0x1c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CommonQuantityControl>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CommonQuantityControl>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CommonQuantityControl.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_CommonQuantityControl @ 14b72be40

void __cdecl
UDS_VM_W_CommonQuantityControl::StaticRegisterNativesUDS_VM_W_CommonQuantityControl(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_CommonQuantityControl_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b72c910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_W_CommonQuantityControl::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_VM_ModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_VM_ModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_VM_ModelBase *)0x0) {
    UDS_VM_ModelBase::UDS_VM_ModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_W_CommonQuantityControl__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Model.field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
    *(undefined8 *)&this[1].UpdateViewDelegate = 0;
    *(undefined8 *)&this[1].UpdateViewDelegate.field_0x8 = 0x3f800000;
    *(undefined8 *)&this[1].UpdateViewDelegate.field_0x10 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 2) = 1;
    FText::FText((FText *)&this[2]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execIsValidQuantityControl @ 14b72ce40

void __cdecl
UDS_VM_W_CommonQuantityControl::execIsValidQuantityControl
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsValidQuantityControl((UDS_VM_W_CommonQuantityControl *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnClickAuto @ 14b72cf00

void __cdecl
UDS_VM_W_CommonQuantityControl::execOnClickAuto(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ButtonEventField *pFVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  local_30[0] = '\0';
  local_30[1] = false;
  local_30[2] = false;
  local_30[3] = false;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar2 = (FDS_ButtonEventField *)local_30;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar2 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickAuto((UDS_VM_W_CommonQuantityControl *)param_1,pFVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// execOnClickMax @ 14b72d020

void __cdecl
UDS_VM_W_CommonQuantityControl::execOnClickMax(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ButtonEventField *pFVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  local_30[0] = '\0';
  local_30[1] = false;
  local_30[2] = false;
  local_30[3] = false;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar2 = (FDS_ButtonEventField *)local_30;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar2 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickMax((UDS_VM_W_CommonQuantityControl *)param_1,pFVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// execOnClickMinus @ 14b72d140

void __cdecl
UDS_VM_W_CommonQuantityControl::execOnClickMinus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ButtonEventField *pFVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  local_30[0] = '\0';
  local_30[1] = false;
  local_30[2] = false;
  local_30[3] = false;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar2 = (FDS_ButtonEventField *)local_30;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar2 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickMinus((UDS_VM_W_CommonQuantityControl *)param_1,pFVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// execOnClickPlus @ 14b72d260

void __cdecl
UDS_VM_W_CommonQuantityControl::execOnClickPlus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ButtonEventField *pFVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  local_30[0] = '\0';
  local_30[1] = false;
  local_30[2] = false;
  local_30[3] = false;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar2 = (FDS_ButtonEventField *)local_30;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar2 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickPlus((UDS_VM_W_CommonQuantityControl *)param_1,pFVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// execOnClickReset @ 14b72d380

void __cdecl
UDS_VM_W_CommonQuantityControl::execOnClickReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ButtonEventField *pFVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  local_30[0] = '\0';
  local_30[1] = false;
  local_30[2] = false;
  local_30[3] = false;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar2 = (FDS_ButtonEventField *)local_30;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar2 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickReset((UDS_VM_W_CommonQuantityControl *)param_1,pFVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// execOnQuantityValueChanged @ 14b72d4a0

void __cdecl
UDS_VM_W_CommonQuantityControl::execOnQuantityValueChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnQuantityValueChanged((UDS_VM_W_CommonQuantityControl *)param_1,local_res10[0]);
  return;
}

// execQuantityNameText @ 14b72d530

void __cdecl
UDS_VM_W_CommonQuantityControl::execQuantityNameText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = QuantityNameText((UDS_VM_W_CommonQuantityControl *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// Init @ 14bdc5970

void __thiscall
UDS_VM_W_CommonQuantityControl::Init
          (UDS_VM_W_CommonQuantityControl *this,float param_1,float param_2,float param_3,
          float param_4)

{
  FName FVar1;
  int iVar2;
  FName local_38;
  int local_30;
  
  iVar2 = FFieldNotificationClassDescriptor::Min.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Min.FieldName;
  if (param_1 != this->Min) {
    this->Min = param_1;
    local_30 = iVar2;
    local_38 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  iVar2 = FFieldNotificationClassDescriptor::Max.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Max.FieldName;
  if (param_2 != this->Max) {
    this->Max = param_2;
    local_30 = iVar2;
    local_38 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  iVar2 = FFieldNotificationClassDescriptor::StepQuantity.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::StepQuantity.FieldName;
  if (param_4 != this->StepQuantity) {
    this->StepQuantity = param_4;
    local_30 = iVar2;
    local_38 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  this->Quantity = -1.0;
  UpdateQuantity(this,param_3,this->bBroadcastWithInit);
  local_30 = FFieldNotificationClassDescriptor::IsValidQuantityControl.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::IsValidQuantityControl.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  return;
}

// InitQuantity @ 14bdc5bd0

void __thiscall
UDS_VM_W_CommonQuantityControl::InitQuantity(UDS_VM_W_CommonQuantityControl *this,float param_1)

{
  this->Quantity = -1.0;
  UpdateQuantity(this,param_1,this->bBroadcastWithInit);
  return;
}

// IsValidQuantityControl @ 14bdc96f0

bool __thiscall
UDS_VM_W_CommonQuantityControl::IsValidQuantityControl(UDS_VM_W_CommonQuantityControl *this)

{
  return this->Min < this->Max;
}

// OnClickAuto @ 14bdcb870

void __thiscall
UDS_VM_W_CommonQuantityControl::OnClickAuto
          (UDS_VM_W_CommonQuantityControl *this,FDS_ButtonEventField *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClickAutoDelegate,
             &local_28);
  if ((*(int *)&(this->OnClickAutoDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnClickAutoDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnClickMax @ 14bdcd170

void __thiscall
UDS_VM_W_CommonQuantityControl::OnClickMax
          (UDS_VM_W_CommonQuantityControl *this,FDS_ButtonEventField *param_1)

{
  if (this->Max != this->Quantity) {
    this->bIsClickValueChanged = true;
    UpdateQuantity(this,this->Max,true);
    return;
  }
  return;
}

// OnClickMinus @ 14bdcd1a0

void __thiscall
UDS_VM_W_CommonQuantityControl::OnClickMinus
          (UDS_VM_W_CommonQuantityControl *this,FDS_ButtonEventField *param_1)

{
  float fVar1;
  
  fVar1 = this->Quantity - this->StepQuantity;
  if (this->Max <= fVar1) {
    fVar1 = this->Max;
  }
  if (fVar1 <= this->Min) {
    fVar1 = this->Min;
  }
  if (fVar1 != this->Quantity) {
    this->bIsClickValueChanged = true;
    UpdateQuantity(this,fVar1,true);
    return;
  }
  return;
}

// OnClickPlus @ 14bdcd280

void __thiscall
UDS_VM_W_CommonQuantityControl::OnClickPlus
          (UDS_VM_W_CommonQuantityControl *this,FDS_ButtonEventField *param_1)

{
  float fVar1;
  
  fVar1 = this->Quantity + this->StepQuantity;
  if (this->Max <= fVar1) {
    fVar1 = this->Max;
  }
  if (fVar1 <= this->Min) {
    fVar1 = this->Min;
  }
  if (fVar1 != this->Quantity) {
    this->bIsClickValueChanged = true;
    UpdateQuantity(this,fVar1,true);
    return;
  }
  return;
}

// OnClickReset @ 14bdcd2c0

void __thiscall
UDS_VM_W_CommonQuantityControl::OnClickReset
          (UDS_VM_W_CommonQuantityControl *this,FDS_ButtonEventField *param_1)

{
  if (this->Min != this->Quantity) {
    this->bIsClickValueChanged = true;
    UpdateQuantity(this,this->Min,true);
    return;
  }
  return;
}

// OnQuantityValueChanged @ 14bdd1570

void __thiscall
UDS_VM_W_CommonQuantityControl::OnQuantityValueChanged
          (UDS_VM_W_CommonQuantityControl *this,float param_1)

{
  float fVar1;
  FName local_28;
  int local_20;
  
  if ((this->bIsClickValueChanged == true) || (this->bIsSliderValueChanging == true)) {
    this->bIsClickValueChanged = false;
  }
  else if (param_1 != this->Quantity) {
    UpdateQuantity(this,param_1,true);
    fVar1 = QuantityToNormalizedRatio(this,param_1);
    if (__real_38d1b717 < (float)((uint)(fVar1 - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff))
    {
      this->bIsSliderValueChanging = true;
      local_20 = FFieldNotificationClassDescriptor::QuantityRatio.BitNumber;
      local_28 = FFieldNotificationClassDescriptor::QuantityRatio.FieldName;
      if (fVar1 != this->QuantityRatio) {
        this->QuantityRatio = fVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      }
      this->bIsSliderValueChanging = false;
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bdddfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CommonQuantityControl::OnSetViewModel
          (UDS_VM_W_CommonQuantityControl *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1a8 [32];
  TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> local_178;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_158);
  if (this->_padding_ == 0) {
    local_148.Object = param_1->Object;
    local_148.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SafeCast<FDS_ViewModelContext_CommonQuantityControl>(&local_178,&local_148);
    if (local_178.Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_CommonQuantityControl::OnSetViewModel",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x1b,L"templateContext is Invalid.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      if (local_178.Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
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
      FText::operator=(&this->QuantityName,&(local_178.Object)->QuantityName);
      if (local_178.Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
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
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (&this->OnClickAutoDelegate,&(local_178.Object)->OnClickAutoDelegate);
      if (local_178.Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
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
      if (&(local_178.Object)->OnQuantityChangeEvent != &this->OnQuantityChangeDelegate) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnQuantityChangeDelegate,
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &(local_178.Object)->OnQuantityChangeEvent);
      }
      if (local_178.Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
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
      this->bBroadcastWithInit = (local_178.Object)->bBroadcastWithInit;
      Init(this,(local_178.Object)->Min,(local_178.Object)->Max,(local_178.Object)->InitialQuantity,
           (local_178.Object)->StepQuantity);
      FVar2 = FFieldNotificationClassDescriptor::FractionalDigits.FieldName;
      if (this->FractionalDigits != (local_178.Object)->FractionalDigits) {
        local_160 = FFieldNotificationClassDescriptor::FractionalDigits.BitNumber;
        this->FractionalDigits = (local_178.Object)->FractionalDigits;
        local_168 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// QuantityNameText @ 14bde22c0

FText * __thiscall
UDS_VM_W_CommonQuantityControl::QuantityNameText
          (UDS_VM_W_CommonQuantityControl *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->QuantityName).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->QuantityName).Flags;
  return __return_storage_ptr__;
}

// QuantityToNormalizedRatio @ 14bde2310

float __thiscall
UDS_VM_W_CommonQuantityControl::QuantityToNormalizedRatio
          (UDS_VM_W_CommonQuantityControl *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = this->Min;
  fVar1 = this->Max;
  if (fVar1 == fVar2) {
    return __real_3f800000;
  }
  if ((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    fVar2 = 0.0;
    if (__real_3f800000 <= 0.0) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    return fVar2;
  }
  fVar2 = (fVar2 - param_1) / (fVar2 - fVar1);
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}

// UpdateQuantity @ 14bdf3810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_CommonQuantityControl::UpdateQuantity
          (UDS_VM_W_CommonQuantityControl *this,float param_1,bool param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  FName FVar13;
  FString *pFVar14;
  UDS_ModelBase *this_00;
  wchar_t *_Str;
  longlong *plVar15;
  FName *pFVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  FWeakObjectPtr local_178;
  FString local_170;
  FWeakObjectPtr local_160;
  UObject *local_158;
  UObject *local_150;
  FName local_148;
  int local_140;
  FName local_138;
  int local_130;
  FName local_128;
  int local_120;
  FDestructionSentinel local_118;
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [128];
  ulonglong local_68;
  
  local_140 = FFieldNotificationClassDescriptor::Quantity.BitNumber;
  local_148 = FFieldNotificationClassDescriptor::Quantity.FieldName;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (param_1 == this->Quantity) {
    return;
  }
  this->Quantity = param_1;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  if (param_2) {
    fVar20 = this->Quantity;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnQuantityChangeDelegate,(FWriteAccessScope *)&local_118);
    puVar1 = &(this->OnQuantityChangeDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar8 = false;
    uVar17 = *(int *)&(this->OnQuantityChangeDelegate).field_0x10 - 1;
    if (-1 < (int)uVar17) {
      lVar19 = (longlong)(int)uVar17;
      lVar18 = lVar19 << 4;
      bVar8 = false;
      do {
        iVar10 = *(int *)&(this->OnQuantityChangeDelegate).field_0x10;
        uVar9 = 0;
        if ((int)uVar17 < iVar10) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_188 = lVar19, local_180 = (longlong)iVar10,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar2 = *(longlong *)&(this->OnQuantityChangeDelegate).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar18) == 0) ||
            (plVar15 = *(longlong **)(lVar2 + lVar18), plVar15 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar15 + 0x68))(plVar15,fVar20), cVar7 == '\0')) {
          bVar8 = true;
        }
        lVar19 = lVar19 + -1;
        lVar18 = lVar18 + -0x10;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
    puVar1 = &(this->OnQuantityChangeDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar8) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnQuantityChangeDelegate,false);
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
  }
  iVar10 = FFieldNotificationClassDescriptor::QuantityRatio.BitNumber;
  FVar13 = FFieldNotificationClassDescriptor::QuantityRatio.FieldName;
  if (this->Min == this->Max) {
    if (__real_3f800000 != this->QuantityRatio) {
      this->QuantityRatio = 1.0;
      pFVar16 = &local_138;
      local_138 = FVar13;
      local_130 = iVar10;
LAB_14bdf3a1e:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar16);
    }
  }
  else {
    fVar20 = QuantityToNormalizedRatio(this,this->Quantity);
    iVar10 = FFieldNotificationClassDescriptor::QuantityRatio.BitNumber;
    FVar13 = FFieldNotificationClassDescriptor::QuantityRatio.FieldName;
    if (fVar20 != this->QuantityRatio) {
      this->QuantityRatio = fVar20;
      pFVar16 = &local_128;
      local_128 = FVar13;
      local_120 = iVar10;
      goto LAB_14bdf3a1e;
    }
  }
  if (this->_padding_ != 0) {
    pUVar11 = Z_Construct_UClass_UDS_M_CommonQuantityControl_NoRegister();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar11);
    if (bVar8) {
      pUVar12 = (UObject *)this->_padding_;
      goto LAB_14bdf3a5f;
    }
  }
  pUVar12 = (UObject *)0x0;
LAB_14bdf3a5f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  local_178.ObjectIndex = 0;
  local_178.ObjectSerialNumber = 0;
  local_158 = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_158);
  bVar8 = FWeakObjectPtr::IsValid(&local_178);
  if (bVar8) {
    pUVar12 = FWeakObjectPtr::Get(&local_178);
    FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonQuantityControlData>
                       ((FDS_DataContainer *)&pUVar12[1].field_0x18,
                        (EDS_CommonQuantityControlData)local_100);
    uVar3 = *(undefined8 *)FVar13;
    uVar17 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar12[1].field_0x18,uVar17 + (int)((ulonglong)uVar3 >> 0x20),
                         (FName *)FVar13);
    if ((pFVar14->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    iVar10 = _wtoi(_Str);
    if ((float)iVar10 != this->Quantity) {
      pUVar12 = FWeakObjectPtr::Get(&local_178);
      ::FString::PrintfImpl(&local_170,L"%f");
      FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonQuantityControlData>
                         ((FDS_DataContainer *)&pUVar12[1].field_0x18,
                          (EDS_CommonQuantityControlData)local_f8);
      uVar3 = *(undefined8 *)FVar13;
      uVar17 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&pUVar12[1].field_0x18,uVar17 + (int)((ulonglong)uVar3 >> 0x20),
                           (FName *)FVar13);
      if (pFVar14 != &local_170) {
        pFVar4 = (pFVar14->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar14->Data).AllocatorInstance.Data = local_170.Data.AllocatorInstance.Data;
        local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar14->Data).ArrayNum = local_170.Data.ArrayNum;
        (pFVar14->Data).ArrayMax = local_170.Data.ArrayMax;
        local_170.Data.ArrayNum = 0;
        local_170.Data.ArrayMax = 0;
      }
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&local_178);
      pUVar12 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar12,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar11 = Z_Construct_UClass_UDS_ModelEventCommonQuantityControl_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_e8,pUVar11);
      local_e8._8_8_ = pUVar12;
      pUVar12 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
      if (local_e8._64_8_ != 0) {
        plVar15 = (longlong *)(local_e8 + 0x50);
        if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
          plVar15 = (longlong *)local_e8._104_8_;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      local_160.ObjectIndex = 0;
      local_160.ObjectSerialNumber = 0;
      local_150 = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_150);
      UDS_ModelBase::UpdateModel
                (this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_160);
    }
  }
  return;
}

// UpdateQuantityRatio @ 14bdf4270

void __thiscall
UDS_VM_W_CommonQuantityControl::UpdateQuantityRatio(UDS_VM_W_CommonQuantityControl *this)

{
  float fVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::QuantityRatio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::QuantityRatio.FieldName;
  if (this->Min == this->Max) {
    if (__real_3f800000 == this->QuantityRatio) {
      return;
    }
    this->QuantityRatio = 1.0;
  }
  else {
    fVar1 = QuantityToNormalizedRatio(this,this->Quantity);
    local_10 = FFieldNotificationClassDescriptor::QuantityRatio.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::QuantityRatio.FieldName;
    if (fVar1 == this->QuantityRatio) {
      return;
    }
    this->QuantityRatio = fVar1;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateView @ 14bdfa200

void __thiscall
UDS_VM_W_CommonQuantityControl::UpdateView
          (UDS_VM_W_CommonQuantityControl *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName FVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *_Str;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  pUVar5 = (UObject *)0x0;
  if (this->_padding_ != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonQuantityControl_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)this->_padding_;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonQuantityControlData>
                      ((FDS_DataContainer *)&pUVar5[1].field_0x18,
                       (EDS_CommonQuantityControlData)&local_res18);
    uVar1 = *(undefined8 *)FVar6;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&pUVar5[1].field_0x18,uVar3 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)FVar6);
    _Str = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    dVar9 = _wtof(pwVar8);
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonQuantityControlData>
                      ((FDS_DataContainer *)&pUVar5[1].field_0x18,
                       (EDS_CommonQuantityControlData)&local_res18);
    uVar1 = *(undefined8 *)FVar6;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&pUVar5[1].field_0x18,uVar3 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)FVar6);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    dVar10 = _wtof(pwVar8);
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonQuantityControlData>
                      ((FDS_DataContainer *)&pUVar5[1].field_0x18,
                       (EDS_CommonQuantityControlData)&local_res18);
    uVar1 = *(undefined8 *)FVar6;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&pUVar5[1].field_0x18,uVar3 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)FVar6);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    dVar11 = _wtof(pwVar8);
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonQuantityControlData>
                      ((FDS_DataContainer *)&pUVar5[1].field_0x18,
                       (EDS_CommonQuantityControlData)&local_res18);
    uVar1 = *(undefined8 *)FVar6;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&pUVar5[1].field_0x18,uVar3 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)FVar6);
    if ((pFVar7->Data).ArrayNum != 0) {
      _Str = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    dVar12 = _wtof(_Str);
    Init(this,(float)dVar12,(float)dVar11,(float)dVar10,(float)dVar9);
  }
  return;
}

