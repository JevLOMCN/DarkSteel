// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 45

// SetClickRingCmd_WrapperImpl @ 14b747c00

void __cdecl UDS_VM_W_RingCmd::SetClickRingCmd_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetClickRingCmdVisibility_WrapperImpl @ 14b747c10

void __cdecl UDS_VM_W_RingCmd::SetClickRingCmdVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xf0) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::ClickRingCmdVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ClickRingCmdVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetRingCmdEntryCount_WrapperImpl @ 14b747c20

void __cdecl UDS_VM_W_RingCmd::SetRingCmdEntryCount_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0x128) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::RingCmdEntryCount.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::RingCmdEntryCount.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetCurrentRingItemText_WrapperImpl @ 14b747c30

void __cdecl UDS_VM_W_RingCmd::SetCurrentRingItemText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x130),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::CurrentRingItemText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CurrentRingItemText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetCurrentRingItemSubText_WrapperImpl @ 14b747c40

void __cdecl UDS_VM_W_RingCmd::SetCurrentRingItemSubText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x180),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::CurrentRingItemSubText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CurrentRingItemSubText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetCurrentRingItemSubTextVisibility_WrapperImpl @ 14b747c50

void __cdecl
UDS_VM_W_RingCmd::SetCurrentRingItemSubTextVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::CurrentRingItemSubTextVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CurrentRingItemSubTextVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0x1d0) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x1d0) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b747c60

UClass * __cdecl UDS_VM_W_RingCmd::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCmd.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCmd",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCmd.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCmd,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_RingCmd>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RingCmd>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCmd.InnerSingleton;
}

// UDS_VM_W_RingCmd @ 14b74e280

UDS_VM_W_RingCmd * __thiscall
UDS_VM_W_RingCmd::UDS_VM_W_RingCmd(UDS_VM_W_RingCmd *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd__6B_;
  *(undefined8 *)&this->OnClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDoubleClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnDoubleClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 = 0;
  (this->ClickRingCmd)._padding_ = '\0';
  (this->ClickRingCmd).bIsCustomSelected = false;
  (this->ClickRingCmd).bIsLacked = false;
  (this->ClickRingCmd).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRingCmd).Delegate = 0;
  *(undefined8 *)&(this->ClickRingCmd).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRingCmd).Delegate.field_0x10 = 0;
  (this->RingCmdEntrySlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RingCmdEntrySlotEventField).UserObjectList.ArrayNum = 0;
  (this->RingCmdEntrySlotEventField).UserObjectList.ArrayMax = 0;
  (this->RingCmdEntryIconEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RingCmdEntryIconEventField).UserObjectList.ArrayNum = 0;
  (this->RingCmdEntryIconEventField).UserObjectList.ArrayMax = 0;
  (this->RingCmdDeckIndexEntry).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RingCmdDeckIndexEntry).UserObjectList.ArrayNum = 0;
  (this->RingCmdDeckIndexEntry).UserObjectList.ArrayMax = 0;
  (this->CurrentRingItemText).StringTableType = None;
  (this->CurrentRingItemText).StringTableID = 0;
  (this->CurrentRingItemText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CurrentRingItemText).StringEnumTableNameID.Number = 0;
  (this->CurrentRingItemText).DateTime.Ticks = 0;
  (this->CurrentRingItemText).TimeSpan.Ticks = 0;
  (this->CurrentRingItemText).TimeExpressionType = None;
  (this->CurrentRingItemText).IsExpression = false;
  (this->CurrentRingItemText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentRingItemText).UniqueString.Data.ArrayNum = 0;
  (this->CurrentRingItemText).UniqueString.Data.ArrayMax = 0;
  (this->CurrentRingItemText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentRingItemText).FormatArgs.ArrayNum = 0;
  (this->CurrentRingItemText).FormatArgs.ArrayMax = 0;
  (this->CurrentRingItemSubText).StringTableType = None;
  (this->CurrentRingItemSubText).StringTableID = 0;
  (this->CurrentRingItemSubText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CurrentRingItemSubText).StringEnumTableNameID.Number = 0;
  (this->CurrentRingItemSubText).DateTime.Ticks = 0;
  (this->CurrentRingItemSubText).TimeSpan.Ticks = 0;
  (this->CurrentRingItemSubText).TimeExpressionType = None;
  (this->CurrentRingItemSubText).IsExpression = false;
  (this->CurrentRingItemSubText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentRingItemSubText).UniqueString.Data.ArrayNum = 0;
  (this->CurrentRingItemSubText).UniqueString.Data.ArrayMax = 0;
  (this->CurrentRingItemSubText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentRingItemSubText).FormatArgs.ArrayNum = 0;
  (this->CurrentRingItemSubText).FormatArgs.ArrayMax = 0;
  (this->VM_NextDeckInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_PrevDeckInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_QuickSlotInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->RingCmdData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->RingCmdDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  this->bIsEditMode = false;
  this->RingCmdRadius = 0.0;
  (this->CenterMousePos).field0_0x0._s_0.X = 0.0;
  (this->CenterMousePos).field0_0x0._s_0.Y = 0.0;
  this->bIsExecuted = false;
  return this;
}

// UDS_VM_W_RingCmd @ 14b74e400

UDS_VM_W_RingCmd * __thiscall
UDS_VM_W_RingCmd::UDS_VM_W_RingCmd(UDS_VM_W_RingCmd *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd__6B_;
  *(undefined8 *)&this->OnClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDoubleClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnDoubleClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 = 0;
  (this->ClickRingCmd)._padding_ = '\0';
  (this->ClickRingCmd).bIsCustomSelected = false;
  (this->ClickRingCmd).bIsLacked = false;
  (this->ClickRingCmd).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRingCmd).Delegate = 0;
  *(undefined8 *)&(this->ClickRingCmd).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRingCmd).Delegate.field_0x10 = 0;
  (this->RingCmdEntrySlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RingCmdEntrySlotEventField).UserObjectList.ArrayNum = 0;
  (this->RingCmdEntrySlotEventField).UserObjectList.ArrayMax = 0;
  (this->RingCmdEntryIconEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RingCmdEntryIconEventField).UserObjectList.ArrayNum = 0;
  (this->RingCmdEntryIconEventField).UserObjectList.ArrayMax = 0;
  (this->RingCmdDeckIndexEntry).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RingCmdDeckIndexEntry).UserObjectList.ArrayNum = 0;
  (this->RingCmdDeckIndexEntry).UserObjectList.ArrayMax = 0;
  (this->CurrentRingItemText).StringTableType = None;
  (this->CurrentRingItemText).StringTableID = 0;
  (this->CurrentRingItemText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CurrentRingItemText).StringEnumTableNameID.Number = 0;
  (this->CurrentRingItemText).DateTime.Ticks = 0;
  (this->CurrentRingItemText).TimeSpan.Ticks = 0;
  (this->CurrentRingItemText).TimeExpressionType = None;
  (this->CurrentRingItemText).IsExpression = false;
  (this->CurrentRingItemText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentRingItemText).UniqueString.Data.ArrayNum = 0;
  (this->CurrentRingItemText).UniqueString.Data.ArrayMax = 0;
  (this->CurrentRingItemText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentRingItemText).FormatArgs.ArrayNum = 0;
  (this->CurrentRingItemText).FormatArgs.ArrayMax = 0;
  (this->CurrentRingItemSubText).StringTableType = None;
  (this->CurrentRingItemSubText).StringTableID = 0;
  (this->CurrentRingItemSubText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CurrentRingItemSubText).StringEnumTableNameID.Number = 0;
  (this->CurrentRingItemSubText).DateTime.Ticks = 0;
  (this->CurrentRingItemSubText).TimeSpan.Ticks = 0;
  (this->CurrentRingItemSubText).TimeExpressionType = None;
  (this->CurrentRingItemSubText).IsExpression = false;
  (this->CurrentRingItemSubText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentRingItemSubText).UniqueString.Data.ArrayNum = 0;
  (this->CurrentRingItemSubText).UniqueString.Data.ArrayMax = 0;
  (this->CurrentRingItemSubText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentRingItemSubText).FormatArgs.ArrayNum = 0;
  (this->CurrentRingItemSubText).FormatArgs.ArrayMax = 0;
  (this->VM_NextDeckInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_PrevDeckInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_QuickSlotInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->RingCmdData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->RingCmdDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  this->bIsEditMode = false;
  this->RingCmdRadius = 0.0;
  (this->CenterMousePos).field0_0x0._s_0.X = 0.0;
  (this->CenterMousePos).field0_0x0._s_0.Y = 0.0;
  this->bIsExecuted = false;
  return this;
}

// ~UDS_VM_W_RingCmd @ 14b74f800

void __thiscall UDS_VM_W_RingCmd::~UDS_VM_W_RingCmd(UDS_VM_W_RingCmd *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CurrentRingItemSubText).FormatArgs.AllocatorInstance.Data,
             (this->CurrentRingItemSubText).FormatArgs.ArrayNum);
  pFVar1 = (this->CurrentRingItemSubText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentRingItemSubText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CurrentRingItemText).FormatArgs.AllocatorInstance.Data,
             (this->CurrentRingItemText).FormatArgs.ArrayNum);
  pFVar1 = (this->CurrentRingItemText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentRingItemText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RingCmdDeckIndexEntry).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RingCmdEntryIconEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RingCmdEntrySlotEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickRingCmd).Delegate);
  pvVar2 = *(void **)&(this->ClickRingCmd).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickRingCmd).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClickRingMenuDelegate);
  pvVar2 = *(void **)&(this->OnDoubleClickRingMenuDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDoubleClickRingMenuDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickRingMenuDelegate);
  pvVar2 = *(void **)&(this->OnClickRingMenuDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickRingMenuDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b751630

IClassDescriptor * __thiscall
UDS_VM_W_RingCmd::GetFieldNotificationDescriptor(UDS_VM_W_RingCmd *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_RingCmd::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b752080

UClass * __cdecl UDS_VM_W_RingCmd::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCmd.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCmd",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCmd.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCmd,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_RingCmd>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RingCmd>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCmd.InnerSingleton;
}

// GetTickableTickType @ 14b7522d0

ETickableTickType __thiscall UDS_VM_W_RingCmd::GetTickableTickType(UDS_VM_W_RingCmd *this)

{
  return Conditional;
}

// IsUpdate @ 14b7522f0

bool __thiscall UDS_VM_W_RingCmd::IsUpdate(UDS_VM_W_RingCmd *this)

{
  return this->bIsUpdate;
}

// StaticRegisterNativesUDS_VM_W_RingCmd @ 14b752490

void __cdecl UDS_VM_W_RingCmd::StaticRegisterNativesUDS_VM_W_RingCmd(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_RingCmd_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b753190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_W_RingCmd::__VTableCtorCaller(FVTableHelper *param_1)

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
    *(undefined1 *)&this[3]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined1 *)&this[1].TextPropertyIDList.AllocatorInstance.Data = 0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined1 *)((longlong)&this[3]._padding_ + 1) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnRingCmdDataDirty @ 14b753740

void __cdecl
UDS_VM_W_RingCmd::execOnRingCmdDataDirty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRingCmdDataDirty((UDS_VM_W_RingCmd *)param_1,local_res10);
  return;
}

// execOnRingCmdSlotIndexChagned @ 14b7537d0

void __cdecl
UDS_VM_W_RingCmd::execOnRingCmdSlotIndexChagned(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRingCmdSlotIndexChagned((UDS_VM_W_RingCmd *)param_1,local_res10[0]);
  return;
}

// BindModel @ 14c003490

void __thiscall UDS_VM_W_RingCmd::BindModel(UDS_VM_W_RingCmd *this)

{
  undefined1 *puVar1;
  UDS_InputEvent *pUVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangeInputDeviceType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputDeviceType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_RingCmd>
              (&pUVar2->OnChangeInputDeviceType,(UDS_VM_W_RingCmd *)local_res10,(pmf_dc73a805 *)this
              );
    this_00 = &(pUVar2->OnInputEvent).Subscriptions;
    local_res10[0] = 0x7537;
    puVar1 = &(pUVar2->OnInputEvent).Subscriptions.field_0x40;
    if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
      puVar3 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar3 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar4 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x7537) * 4);
      if (iVar4 != -1) {
        do {
          piVar5 = (int *)((longlong)iVar4 * 0x50 + *(longlong *)this_00);
          if (*piVar5 == 0x7537) {
            if ((iVar4 != -1) && (piVar5 != (int *)0x0)) goto LAB_14c0035ba;
            break;
          }
          iVar4 = piVar5[0x12];
        } while (iVar4 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x7537,
               (bool *)&local_res20);
    piVar5 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14c0035ba:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar5 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_RingCmd>(piVar5 + 2,(UDS_VM_W_RingCmd *)local_res18,(pmf_17fbcaa8 *)this);
    local_res10[0] = 0x7538;
    if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
      puVar3 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar3 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar4 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x7538) * 4);
      if (iVar4 != -1) {
        do {
          piVar5 = (int *)((longlong)iVar4 * 0x50 + *(longlong *)this_00);
          if (*piVar5 == 0x7538) {
            if (piVar5 != (int *)0x0) goto LAB_14c0036a1;
            break;
          }
          iVar4 = piVar5[0x12];
        } while (iVar4 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x7538,
               (bool *)&local_res20);
    piVar5 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14c0036a1:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar5 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_RingCmd>(piVar5 + 2,(UDS_VM_W_RingCmd *)local_res18,(pmf_17fbcaa8 *)this);
    local_res10[0] = 0x7539;
    if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
      puVar3 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar3 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar4 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x7539) * 4);
      if (iVar4 != -1) {
        do {
          piVar5 = (int *)((longlong)iVar4 * 0x50 + *(longlong *)this_00);
          if (*piVar5 == 0x7539) {
            if (piVar5 != (int *)0x0) goto LAB_14c003768;
            break;
          }
          iVar4 = piVar5[0x12];
        } while (iVar4 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x7539,
               (bool *)&local_res20);
    piVar5 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14c003768:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar5 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_RingCmd>(piVar5 + 2,(UDS_VM_W_RingCmd *)local_res18,(pmf_17fbcaa8 *)this);
  }
  return;
}

// CloseRingCmd @ 14c006960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd::CloseRingCmd(UDS_VM_W_RingCmd *this)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_RingCmd::CloseRingCmd",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x1b5,L"windowManager is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_140);
    bVar1 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_140,(void *)0x0);
    if (!bVar1) {
      pUVar4 = FWeakObjectPtr::Get(&local_140);
      cVar2 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
      if (cVar2 != '\0') {
        local_148 = 0.0;
        local_144 = 0;
        UDS_WindowManager::CloseWindow(this_00,RingCommand,&local_144,&local_148);
      }
    }
  }
  return;
}

// CulcRingCmdCenter @ 14c011490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd::CulcRingCmdCenter(UDS_VM_W_RingCmd *this)

{
  double dVar1;
  float fVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_WindowManager *pUVar5;
  UObject *pUVar6;
  FGeometry *pFVar7;
  double dVar8;
  undefined1 auStackY_1d8 [32];
  FWeakObjectPtr local_1a8;
  FWeakObjectPtr local_1a0;
  UDS_WindowManager *local_198 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_198[0] = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_198[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_198[0]);
  }
  local_1a8.ObjectIndex = 0;
  local_1a8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_198[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_198[0]);
  }
  FWeakObjectPtr::operator=(&local_1a8,(FObjectPtr)local_198);
  bVar3 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_1a8,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_RingCmd::CulcRingCmdCenter",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x1cb,L"windowManager is nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pUVar5 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_1a8);
    UDS_WindowManager::GetWindowInfo(pUVar5,(EDS_WindowWidget)&local_1a0);
    bVar3 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_1a0,(void *)0x0);
    if (!bVar3) {
      pUVar6 = FWeakObjectPtr::Get(&local_1a0);
      dVar1 = *(double *)&pUVar6[2].field_0x18;
      dVar8 = *(double *)&pUVar6[2].field_0x20;
      pUVar5 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_1a8);
      pFVar7 = UDS_WindowManager::GetRootWidgetGeometry(pUVar5);
      fVar2 = pFVar7->Scale;
      FWeakObjectPtr::Get(&local_1a0);
      if (dVar1 <= dVar8) {
        dVar8 = dVar1;
      }
      this->RingCmdRadius = (float)(dVar8 * ___real_3fdb333340000000 * (double)fVar2);
    }
  }
  return;
}

// ExecuteRingCmd @ 14c019ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd::ExecuteRingCmd(UDS_VM_W_RingCmd *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_LogManager *pUVar3;
  int iVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((this->bIsEditMode != true) && (this->bIsExecuted != true)) {
    bVar1 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                      (&this->RingCmdData,(void *)0x0);
    if ((bVar1) ||
       (bVar1 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                          (&this->RingCmdDataSet,(void *)0x0), bVar1)) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_RingCmd::ExecuteRingCmd",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x1e5,L"RingCmdData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar2 = FWeakObjectPtr::Get(&(this->RingCmdDataSet).WeakPtr);
      iVar4 = (int)((ulonglong)*(longlong *)&pUVar2[4].field_0x20 >> 0x20);
      if ((-1 < *(longlong *)&pUVar2[4].field_0x20) && (iVar4 < this->RingCmdEntryCount)) {
        FDS_RingCommandService::ExecuteRingCommand
                  ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)
                   (this->RingCmdData).WeakPtr,iVar4);
        this->bIsExecuted = true;
      }
    }
  }
  return;
}

// GetInputDirectionFromVector @ 14c01ad50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EDS_Input8Direction __thiscall
UDS_VM_W_RingCmd::GetInputDirectionFromVector(UDS_VM_W_RingCmd *this,TVector2<double> *param_1)

{
  undefined8 uVar1;
  EDS_Input8Direction EVar2;
  double dVar3;
  float fVar4;
  
  dVar3 = *(double *)&param_1->field0_0x0;
  if (((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000) &&
     (uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8),
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return None;
  }
  dVar3 = FGenericPlatformMath::Atan2((param_1->field0_0x0)._s_0.Y,dVar3);
  fVar4 = (float)(dVar3 * __real_404ca5dc1a63c1f8);
  if ((__real_42870000 <= fVar4) && (fVar4 < __real_42e10000)) {
    return Up;
  }
  if (fVar4 < __real_42e10000) {
    if ((fVar4 < __real_431d8000) && (___real_c31d8000 <= fVar4)) {
      if (fVar4 < ___real_c2e10000) {
        return LeftDown;
      }
      if (fVar4 < ___real_c2870000) {
        return Down;
      }
      if (fVar4 < ___real_c1b40000) {
        return RightDown;
      }
      if (fVar4 < ___real_41b40000) {
        return Right;
      }
      EVar2 = None;
      if (fVar4 < __real_42870000) {
        EVar2 = RightUp;
      }
      return EVar2;
    }
  }
  else if (fVar4 < __real_431d8000) {
    return LeftUp;
  }
  return Left;
}

// InitViewModel @ 14c01ec80

void __thiscall UDS_VM_W_RingCmd::InitViewModel(UDS_VM_W_RingCmd *this)

{
  UDS_VM_InputKey *pUVar1;
  
  if ((this->VM_NextDeckInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_NextDeckInputKey).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_PrevDeckInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_PrevDeckInputKey).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_QuickSlotInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_QuickSlotInputKey).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// Input_MoveSlot @ 14c0210a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd::Input_MoveSlot
          (UDS_VM_W_RingCmd *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *this_00;
  TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *this_01;
  double dVar1;
  undefined8 uVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_RingCommandDeckDataSet *this_02;
  long64 lVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  undefined1 auStackY_1b8 [32];
  int iStack_174;
  FString local_170;
  FString local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = &this->RingCmdDataSet;
  bVar3 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0)
  ;
  if (bVar3) {
LAB_14c021363:
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_RingCmd::Input_MoveSlot",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x29d,L"RingCmdDataSet is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    return;
  }
  this_01 = &this->RingCmdData;
  bVar3 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
  if (bVar3) goto LAB_14c021363;
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  dVar8 = *(double *)&(param_3->Value).field0_0x0;
  uVar2 = *(undefined8 *)&pUVar4[4].field_0x20;
  dVar1 = *(double *)((longlong)&(param_3->Value).field0_0x0 + 8);
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    dVar8 = FGenericPlatformMath::Atan2(dVar1,dVar8);
    fVar9 = (float)(dVar8 * __real_404ca5dc1a63c1f8);
    if ((__real_42870000 <= fVar9) && (fVar9 < __real_42e10000)) {
      lVar6 = 1;
      iVar7 = 0;
      goto LAB_14c021239;
    }
    if (fVar9 < __real_42e10000) {
      if ((fVar9 < __real_431d8000) && (___real_c31d8000 <= fVar9)) {
        if (fVar9 < ___real_c2e10000) {
          lVar6 = 4;
          iVar7 = 3;
          goto LAB_14c021239;
        }
        if (fVar9 < ___real_c2870000) {
          lVar6 = 5;
          iVar7 = 4;
          goto LAB_14c021239;
        }
        if (fVar9 < ___real_c1b40000) {
          lVar6 = 6;
          iVar7 = 5;
          goto LAB_14c021239;
        }
        if (fVar9 < ___real_41b40000) {
          lVar6 = 7;
          iVar7 = 6;
          goto LAB_14c021239;
        }
        if (fVar9 < __real_42870000) {
          lVar6 = 8;
          iVar7 = 7;
          goto LAB_14c021239;
        }
        goto LAB_14c021147;
      }
    }
    else if (fVar9 < __real_431d8000) {
      lVar6 = 2;
      iVar7 = 1;
      goto LAB_14c021239;
    }
    lVar6 = 3;
    iVar7 = 2;
  }
  else {
LAB_14c021147:
    lVar6 = 0;
    iVar7 = -1;
  }
LAB_14c021239:
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    ::FString::FString(&local_170,"EDS_Input8Direction");
    DS_Util::GetEnumToString(&local_160,&local_170,lVar6);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_W_RingCmd::Input_MoveSlot",0x20,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Display,local_148.Ptr,0x2a5,L"%s");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&this_01->WeakPtr);
  if (((int)uVar2 == *(int *)&pUVar4[2].field_0x8) &&
     (iStack_174 = (int)((ulonglong)uVar2 >> 0x20), iStack_174 == iVar7)) {
    return;
  }
  this_02 = (UDS_RingCommandDeckDataSet *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  pUVar4 = FWeakObjectPtr::Get(&this_01->WeakPtr);
  UDS_RingCommandDeckDataSet::SetSelectedDeckIndex(this_02,*(int *)&pUVar4[2].field_0x8,iVar7);
  return;
}

// Input_NextDeck @ 14c021410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd::Input_NextDeck
          (UDS_VM_W_RingCmd *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_RingCommandUIEvent *pUVar4;
  UDS_LogManager *pUVar5;
  int iVar6;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  undefined8 local_150;
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_2 == Triggered) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
    bVar2 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                      (&this->RingCmdDataSet,(void *)0x0);
    if ((bVar2) ||
       (bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                          (&this->RingCmdData,(void *)0x0), bVar2)) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_RingCmd::Input_NextDeck",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x2dc,L"RingCmdDataSet is nullptr.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar3 = FWeakObjectPtr::Get(&(this->RingCmdDataSet).WeakPtr);
      local_150 = *(undefined8 *)&pUVar3[4].field_0x20;
      pUVar3 = FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
      iVar6 = *(int *)&pUVar3[2].field_0x8 + 1;
      lVar1 = (longlong)iVar6;
      UDS_RingCommandDeckData::GetData
                ((ulong64)&local_158,UDS_PlayerData::MainPlayerEntityID,
                 (bool)((char)iVar6 +
                       ((char)((ulonglong)(lVar1 * 0x55555556) >> 0x20) +
                       (char)((lVar1 / 3 + (lVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3));
      bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_158,
                         (void *)0x0);
      if (!bVar2) {
        SetRingCmdData(this,(TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)local_158);
        pUVar3 = FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
        this->RingCmdEntryCount = *(int *)&pUVar3[2].field_0xc;
        local_140 = FFieldNotificationClassDescriptor::RingCmdEntryCount.BitNumber;
        local_148 = FFieldNotificationClassDescriptor::RingCmdEntryCount.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
        UpdateRingCmdEntrySlot(this);
        UpdateRingCmdEntryIcon(this);
        OnRingCmdSlotIndexChagned(this,local_150._4_4_);
        pUVar4 = UDS_EventManager::GetEvent<UDS_RingCommandUIEvent>();
        if (pUVar4 != (UDS_RingCommandUIEvent *)0x0) {
          bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar4->OnRingCmdQuickSlotNextDeck);
          if (bVar2) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar4->OnRingCmdQuickSlotNextDeck).Delegate);
          }
        }
      }
    }
  }
  return;
}

// Input_PrevDeck @ 14c021620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd::Input_PrevDeck
          (UDS_VM_W_RingCmd *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_RingCommandUIEvent *pUVar4;
  UDS_LogManager *pUVar5;
  int iVar6;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  undefined8 local_150;
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_2 == Triggered) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
    bVar2 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                      (&this->RingCmdDataSet,(void *)0x0);
    if ((bVar2) ||
       (bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                          (&this->RingCmdData,(void *)0x0), bVar2)) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_RingCmd::Input_PrevDeck",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x2b9,L"RingCmdDataSet is nullptr.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar3 = FWeakObjectPtr::Get(&(this->RingCmdDataSet).WeakPtr);
      local_150 = *(undefined8 *)&pUVar3[4].field_0x20;
      pUVar3 = FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
      iVar6 = *(int *)&pUVar3[2].field_0x8 + 2;
      lVar1 = (longlong)iVar6;
      UDS_RingCommandDeckData::GetData
                ((ulong64)&local_158,UDS_PlayerData::MainPlayerEntityID,
                 (bool)((char)iVar6 +
                       ((char)((ulonglong)(lVar1 * 0x55555556) >> 0x20) +
                       (char)((lVar1 / 3 + (lVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3));
      bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_158,
                         (void *)0x0);
      if (!bVar2) {
        SetRingCmdData(this,(TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)local_158);
        pUVar3 = FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
        this->RingCmdEntryCount = *(int *)&pUVar3[2].field_0xc;
        local_140 = FFieldNotificationClassDescriptor::RingCmdEntryCount.BitNumber;
        local_148 = FFieldNotificationClassDescriptor::RingCmdEntryCount.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
        UpdateRingCmdEntrySlot(this);
        UpdateRingCmdEntryIcon(this);
        OnRingCmdSlotIndexChagned(this,local_150._4_4_);
        pUVar4 = UDS_EventManager::GetEvent<UDS_RingCommandUIEvent>();
        if (pUVar4 != (UDS_RingCommandUIEvent *)0x0) {
          bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar4->OnRingCmdQuickSlotPrevDeck);
          if (bVar2) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar4->OnRingCmdQuickSlotPrevDeck).Delegate);
          }
        }
      }
    }
  }
  return;
}

// OnChangedInputType @ 14c025960

void __thiscall
UDS_VM_W_RingCmd::OnChangedInputType(UDS_VM_W_RingCmd *this,EDS_InputDeviceType *param_1)

{
  this->bIsUpdate = *param_1 != GamePad;
  return;
}

// OnClickRingCmd @ 14c026930

void __thiscall
UDS_VM_W_RingCmd::OnClickRingCmd(UDS_VM_W_RingCmd *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnCloseInit @ 14c028620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd::OnCloseInit(UDS_VM_W_RingCmd *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_LogManager *pUVar3;
  int iVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  if ((this->bIsEditMode != true) && (this->bIsExecuted != true)) {
    this->bIsUpdate = false;
    bVar1 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                      (&this->RingCmdData,(void *)0x0);
    if ((bVar1) ||
       (bVar1 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                          (&this->RingCmdDataSet,(void *)0x0), bVar1)) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_RingCmd::ExecuteRingCmd",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x1e5,L"RingCmdData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar2 = FWeakObjectPtr::Get(&(this->RingCmdDataSet).WeakPtr);
      iVar4 = (int)((ulonglong)*(longlong *)&pUVar2[4].field_0x20 >> 0x20);
      if ((-1 < *(longlong *)&pUVar2[4].field_0x20) && (iVar4 < this->RingCmdEntryCount)) {
        FDS_RingCommandService::ExecuteRingCommand
                  ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)
                   (this->RingCmdData).WeakPtr,iVar4);
        this->bIsExecuted = true;
      }
    }
  }
  return;
}

// OnRingCmdDataDirty @ 14c02ed70

void __thiscall UDS_VM_W_RingCmd::OnRingCmdDataDirty(UDS_VM_W_RingCmd *this,UDS_DataBase *param_1)

{
  if ((param_1 != (UDS_DataBase *)0x0) && (this->bIsEditMode != false)) {
    UpdateRingCmdEntrySlot(this);
    UpdateRingCmdEntryIcon(this);
  }
  return;
}

// OnRingCmdSlotIndexChagned @ 14c02eda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd::OnRingCmdSlotIndexChagned(UDS_VM_W_RingCmd *this,int param_1)

{
  EDS_RingCmdType EVar1;
  UDS_VM_InputKey *this_00;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  FDS_ViewModelContext_InputKey *pFVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  UDS_RingCommandDeckData *this_01;
  UDS_LogManager *pUVar8;
  FDS_ActionBaseTableRow *pFVar9;
  UObject *pUVar10;
  FDS_ReturnHomeTableRow *pFVar11;
  FDS_ContentsTotalMenuTableRow *pFVar12;
  FDS_ItemBaseTableRow *pFVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_538 [32];
  int local_508 [2];
  FWeakObjectPtr local_500;
  TSharedPtr<FDS_RingCommandSlotData,1> local_4f8;
  FName local_4e8;
  int local_4e0;
  FName local_4d8;
  int local_4d0;
  FName local_4c8;
  int local_4c0;
  FName local_4b8;
  int local_4b0;
  FName local_4a8;
  int local_4a0;
  FName local_498;
  int local_490;
  FName local_488;
  int local_480;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_478;
  FDS_Text local_468;
  FDS_Text local_418;
  FDS_Text local_3c8;
  FDS_Text local_378;
  FDS_Text local_328;
  FDS_Text local_2d8;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_508[0] = param_1;
  bVar7 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    (&this->RingCmdData,(void *)0x0);
  if ((bVar7) ||
     (bVar7 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                        (&this->RingCmdDataSet,(void *)0x0), iVar4 = local_508[0], bVar7)) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_W_RingCmd::OnRingCmdSlotIndexChagned",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x16f,L"RingCmdData is nullptr");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  if ((this->VM_QuickSlotInputKey).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_478);
    pFVar5 = local_478.Object;
    if ((local_478.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x15d;
    pFVar5->bUseCurrentMappingType = false;
    pFVar5->InputMappingType = Action_Base;
    switch(iVar4) {
    case 0:
      pFVar5->KeyActionType = IA_RingCommandQuickSlot_0;
      break;
    case 1:
      pFVar5->KeyActionType = IA_RingCommandQuickSlot_1;
      break;
    case 2:
      pFVar5->KeyActionType = IA_RingCommandQuickSlot_2;
      break;
    case 3:
      pFVar5->KeyActionType = IA_RingCommandQuickSlot_3;
      break;
    case 4:
      pFVar5->KeyActionType = IA_RingCommandQuickSlot_4;
      break;
    case 5:
      pFVar5->KeyActionType = IA_RingCommandQuickSlot_5;
      break;
    case 6:
      pFVar5->KeyActionType = IA_RingCommandQuickSlot_6;
      break;
    case 7:
      pFVar5->KeyActionType = IA_RingCommandQuickSlot_7;
      break;
    default:
      pFVar5->KeyActionType = None;
    }
    this_00 = (this->VM_QuickSlotInputKey).field0_0x0.DebugPtr;
    local_288.Object = (FDS_ViewModelContext *)local_478.Object;
    local_288.SharedReferenceCount.ReferenceController =
         local_478.SharedReferenceCount.ReferenceController;
    if (local_478.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_478.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_478.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_288);
    local_4e0 = FFieldNotificationClassDescriptor::VM_QuickSlotInputKey.BitNumber;
    local_4e8 = FFieldNotificationClassDescriptor::VM_QuickSlotInputKey.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_478.SharedReferenceCount.ReferenceController);
  }
  if ((local_508[0] < 0) || (this->RingCmdEntryCount <= local_508[0])) {
    local_2d8.StringTableType = None;
    local_2d8.StringTableID = 0;
    local_2d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_2d8.StringEnumTableNameID.Number = 0;
    local_2d8.DateTime.Ticks = 0;
    local_2d8.TimeSpan.Ticks = 0;
    local_2d8.TimeExpressionType = None;
    local_2d8.IsExpression = false;
    local_2d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.UniqueString.Data.ArrayNum = 0;
    local_2d8.UniqueString.Data.ArrayMax = 0;
    local_2d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.FormatArgs.ArrayNum = 0;
    local_2d8.FormatArgs.ArrayMax = 0;
    FDS_Text::operator=(&this->CurrentRingItemText,&local_2d8);
    local_480 = FFieldNotificationClassDescriptor::CurrentRingItemText.BitNumber;
    local_488 = FFieldNotificationClassDescriptor::CurrentRingItemText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_488);
    FVar6.Data = local_2d8.FormatArgs.AllocatorInstance.Data;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_2d8.FormatArgs.AllocatorInstance.Data,
               local_2d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FVar6.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    if (local_2d8.UniqueString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_2d8.UniqueString.Data.AllocatorInstance.Data);
    return;
  }
  this_01 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
  UDS_RingCommandDeckData::GetRingCommandData(this_01,&local_4f8,local_508);
  iVar4 = FFieldNotificationClassDescriptor::CurrentRingItemSubTextVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::CurrentRingItemSubTextVisibility.FieldName;
  if (local_4f8.Object == (FDS_RingCommandSlotData *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) goto LAB_14c02f40a;
    pUVar8 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_VM_W_RingCmd::OnRingCmdSlotIndexChagned",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_278.Ptr,0x17e,L"ringCmdSlotData is nullptr");
    FVar14.Data = (FScriptContainerElement *)local_278._padding_;
  }
  else {
    if (this->CurrentRingItemSubTextVisibility != Collapsed) {
      this->CurrentRingItemSubTextVisibility = Collapsed;
      local_4d0 = iVar4;
      local_4d8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4d8);
    }
    if ((local_4f8.Object == (FDS_RingCommandSlotData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar1 = (local_4f8.Object)->SlotType;
    if (EVar1 == None) {
      local_328.StringTableType = None;
      local_328.StringTableID = 0;
      local_328.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_328.StringEnumTableNameID.Number = 0;
      local_328.DateTime.Ticks = 0;
      local_328.TimeSpan.Ticks = 0;
      local_328.TimeExpressionType = None;
      local_328.IsExpression = false;
      local_328.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.UniqueString.Data.ArrayNum = 0;
      local_328.UniqueString.Data.ArrayMax = 0;
      local_328.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.FormatArgs.ArrayNum = 0;
      local_328.FormatArgs.ArrayMax = 0;
      SetCurrentRingItemText(this,&local_328);
      FVar6.Data = local_328.FormatArgs.AllocatorInstance.Data;
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_328.FormatArgs.AllocatorInstance.Data,
                 local_328.FormatArgs.ArrayNum);
      FVar14.Data = local_328.UniqueString.Data.AllocatorInstance.Data;
      if ((FDS_TextFormatArg *)FVar6.Data != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(FVar6.Data);
        FVar14.Data = local_328.UniqueString.Data.AllocatorInstance.Data;
      }
    }
    else if (EVar1 == Item) {
      pFVar13 = FDS_ItemBaseTableRow::GetRef((local_4f8.Object)->SlotData,true);
      local_378.StringTableType = None;
      local_378.StringTableID = 0;
      local_378.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_378.StringEnumTableNameID.Number = 0;
      local_378.TimeExpressionType = None;
      local_378.DateTime.Ticks = 0;
      local_378.TimeSpan.Ticks = 0;
      local_378.IsExpression = false;
      local_378.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_378.UniqueString.Data.ArrayNum = 0;
      local_378.UniqueString.Data.ArrayMax = 0;
      local_378.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_378.FormatArgs.ArrayNum = 0;
      local_378.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_378,&pFVar13->ID_Name);
      FDS_Text::operator=(&this->CurrentRingItemText,&local_378);
      local_490 = FFieldNotificationClassDescriptor::CurrentRingItemText.BitNumber;
      local_498 = FFieldNotificationClassDescriptor::CurrentRingItemText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_498);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_378.FormatArgs.AllocatorInstance.Data,
                 local_378.FormatArgs.ArrayNum);
      FVar14.Data = local_378.UniqueString.Data.AllocatorInstance.Data;
      if ((FDS_TextFormatArg *)local_378.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_378.FormatArgs.AllocatorInstance.Data);
        FVar14.Data = local_378.UniqueString.Data.AllocatorInstance.Data;
      }
    }
    else if (EVar1 == Menu) {
      pFVar12 = FDS_ContentsTotalMenuTableRow::GetRef((local_4f8.Object)->SlotData,true);
      local_3c8.StringTableType = None;
      local_3c8.StringTableID = 0;
      local_3c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_3c8.StringEnumTableNameID.Number = 0;
      local_3c8.TimeExpressionType = None;
      local_3c8.DateTime.Ticks = 0;
      local_3c8.TimeSpan.Ticks = 0;
      local_3c8.IsExpression = false;
      local_3c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c8.UniqueString.Data.ArrayNum = 0;
      local_3c8.UniqueString.Data.ArrayMax = 0;
      local_3c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c8.FormatArgs.ArrayNum = 0;
      local_3c8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_3c8,&pFVar12->ID_Name);
      FDS_Text::operator=(&this->CurrentRingItemText,&local_3c8);
      local_4a0 = FFieldNotificationClassDescriptor::CurrentRingItemText.BitNumber;
      local_4a8 = FFieldNotificationClassDescriptor::CurrentRingItemText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4a8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_3c8.FormatArgs.AllocatorInstance.Data,
                 local_3c8.FormatArgs.ArrayNum);
      FVar14.Data = local_3c8.UniqueString.Data.AllocatorInstance.Data;
      if ((FDS_TextFormatArg *)local_3c8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_3c8.FormatArgs.AllocatorInstance.Data);
        FVar14.Data = local_3c8.UniqueString.Data.AllocatorInstance.Data;
      }
    }
    else {
      if (EVar1 != Action) goto LAB_14c02f40a;
      pFVar9 = FDS_ActionBaseTableRow::GetRef((local_4f8.Object)->SlotData,true);
      local_418.StringTableType = None;
      local_418.StringTableID = 0;
      local_418.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_418.StringEnumTableNameID.Number = 0;
      local_418.TimeExpressionType = None;
      local_418.DateTime.Ticks = 0;
      local_418.TimeSpan.Ticks = 0;
      local_418.IsExpression = false;
      local_418.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_418.UniqueString.Data.ArrayNum = 0;
      local_418.UniqueString.Data.ArrayMax = 0;
      local_418.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_418.FormatArgs.ArrayNum = 0;
      local_418.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_418,&pFVar9->ID_Name);
      SetCurrentRingItemText(this,&local_418);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_418.FormatArgs.AllocatorInstance.Data,
                 local_418.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_418.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_418.FormatArgs.AllocatorInstance.Data);
      }
      if (local_418.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.UniqueString.Data.AllocatorInstance.Data);
      }
      if (pFVar9->ID != ReturnHome) goto LAB_14c02f40a;
      UDS_PlayerData::GetMainPlayerData();
      bVar7 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_500,(void *)0x0);
      if (bVar7) goto LAB_14c02f40a;
      pUVar10 = FWeakObjectPtr::Get(&local_500);
      pFVar11 = FDS_ReturnHomeTableRow::GetRef((longlong)*(int *)&pUVar10[6].field_0x20,true);
      local_468.StringTableType = None;
      local_468.StringTableID = 0;
      local_468.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_468.StringEnumTableNameID.Number = 0;
      local_468.DateTime.Ticks = 0;
      local_468.TimeSpan.Ticks = 0;
      local_468.TimeExpressionType = None;
      local_468.IsExpression = false;
      local_468.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.UniqueString.Data.ArrayNum = 0;
      local_468.UniqueString.Data.ArrayMax = 0;
      local_468.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.FormatArgs.ArrayNum = 0;
      local_468.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_468,&pFVar11->ID_ReturnName);
      iVar4 = FFieldNotificationClassDescriptor::CurrentRingItemSubTextVisibility.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::CurrentRingItemSubTextVisibility.FieldName;
      if (this->CurrentRingItemSubTextVisibility != SelfHitTestInvisible) {
        this->CurrentRingItemSubTextVisibility = SelfHitTestInvisible;
        local_4c0 = iVar4;
        local_4c8 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4c8);
      }
      FDS_Text::operator=(&this->CurrentRingItemSubText,&local_468);
      local_4b0 = FFieldNotificationClassDescriptor::CurrentRingItemSubText.BitNumber;
      local_4b8 = FFieldNotificationClassDescriptor::CurrentRingItemSubText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4b8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_468.FormatArgs.AllocatorInstance.Data,
                 local_468.FormatArgs.ArrayNum);
      FVar14.Data = local_468.UniqueString.Data.AllocatorInstance.Data;
      if ((FDS_TextFormatArg *)local_468.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_468.FormatArgs.AllocatorInstance.Data);
        FVar14.Data = local_468.UniqueString.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
LAB_14c02f40a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4f8.SharedReferenceCount.ReferenceController);
  return;
}

// OnSetViewModel @ 14c033b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd::OnSetViewModel(UDS_VM_W_RingCmd *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  TReferenceControllerBase<1> *pTVar3;
  FDS_ViewModelContext *pFVar4;
  UDS_VM_InputKey *pUVar5;
  code *pcVar6;
  FDS_ViewModelContext_InputKey *pFVar7;
  bool bVar8;
  UDS_LogManager *pUVar9;
  TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> TVar10;
  FSlateApplication *pFVar11;
  float *pfVar12;
  UDS_WindowManager *pUVar13;
  FGeometry *pFVar14;
  UObject *pUVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStackY_728 [32];
  FWeakObjectPtr local_6f8;
  FWeakObjectPtr local_6f0;
  FWeakObjectPtr local_6e8;
  FWeakObjectPtr local_6e0;
  TSharedPtr<FDS_ViewModelContext_RingCmd,1> local_6d8;
  UDS_WindowManager *local_6c8 [2];
  FName local_6b8;
  int local_6b0;
  FName local_6a8;
  int local_6a0;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_698;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_688;
  TSharedPtr<FDS_ViewModelContext,1> local_678;
  undefined1 local_668 [8];
  undefined1 local_660 [8];
  TSharedPtr<FDS_ViewModelContext,1> local_658;
  TSharedPtr<FDS_ViewModelContext,1> local_648 [2];
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_728;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar4 = param_1->Object;
  if (pFVar4 == (FDS_ViewModelContext *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_5f8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5f8,"UDS_VM_W_RingCmd::OnSetViewModel",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_5f8.Ptr,0x3b,L"InViewModelContext is nullptr")
      ;
      if ((void *)local_5f8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5f8._padding_);
      }
    }
  }
  else {
    local_678.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_678.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_678.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_678.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_678.Object = pFVar4;
    SafeCast<FDS_ViewModelContext_RingCmd>(&local_6d8,&local_678);
    if (local_6d8.Object == (FDS_ViewModelContext_RingCmd *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_4d8._padding_ = (longlong)local_6d8.Object;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4d8,"UDS_VM_W_RingCmd::OnSetViewModel",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_4d8.Ptr,0x42,L"context is nullptr");
        if ((FDS_ViewModelContext_RingCmd *)local_4d8._padding_ !=
            (FDS_ViewModelContext_RingCmd *)0x0) {
          FMemory::Free((void *)local_4d8._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6d8.SharedReferenceCount.ReferenceController);
    }
    else {
      bVar8 = (local_6d8.Object)->bIsEditMode;
      this->bIsEditMode = bVar8;
      this->ClickRingCmdVisibility = bVar8 == true;
      local_6b0 = FFieldNotificationClassDescriptor::ClickRingCmdVisibility.BitNumber;
      local_6b8 = FFieldNotificationClassDescriptor::ClickRingCmdVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_6b8);
      this->bIsUpdate = this->bIsEditMode != true;
      TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
                (&this->OnClickRingMenuDelegate,&(local_6d8.Object)->OnClickRingMenuDelegate);
      TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
                (&this->OnDoubleClickRingMenuDelegate,
                 &(local_6d8.Object)->OnDoubleClickRingMenuDelegate);
      TVar10 = TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)local_668);
                    /* WARNING: Load size is inaccurate */
      (this->RingCmdDataSet).WeakPtr = *TVar10.WeakPtr;
      bVar8 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                        (&this->RingCmdDataSet,(void *)0x0);
      if (bVar8) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_3b8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_3b8,"UDS_VM_W_RingCmd::OnSetViewModel",0x20,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_3b8.Ptr,0x50,L"RingCmdDataSet is nullptr.");
          if ((void *)local_3b8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_3b8._padding_);
          }
        }
      }
      else {
        UDS_RingCommandDeckData::GetData
                  ((ulong64)&local_6e8,UDS_PlayerData::MainPlayerEntityID,
                   SUB41((local_6d8.Object)->RingCmdDeckNum,0));
        bVar8 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_6e8,
                           (void *)0x0);
        if (bVar8) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            local_298._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_298,"UDS_VM_W_RingCmd::OnSetViewModel",0x20,Yes);
            UDS_LogManager::PrintLog(pUVar9,1,Warning,local_298.Ptr,0x57,L"ringCmdData is nullptr");
            if ((void *)local_298._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_298._padding_);
            }
          }
        }
        else {
          SetRingCmdData(this,(TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)local_6e8);
          pFVar11 = FSlateApplication::Get();
          pfVar12 = (float *)(**(code **)(*(longlong *)pFVar11 + 0x68))(pFVar11,local_660);
          fVar1 = pfVar12[1];
          (this->CenterMousePos).field0_0x0._s_0.X = (double)*pfVar12;
          (this->CenterMousePos).field0_0x0._s_0.Y = (double)fVar1;
          local_6c8[0] = UDS_WindowManager::GetInst();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_6c8[0] != (UDS_WindowManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_6c8[0]);
          }
          local_6f8.ObjectIndex = 0;
          local_6f8.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_6c8[0] != (UDS_WindowManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_6c8[0]);
          }
          FWeakObjectPtr::operator=(&local_6f8,(FObjectPtr)local_6c8);
          bVar8 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_6f8,
                             (void *)0x0);
          if (bVar8) {
            pUVar9 = UDS_LogManager::GetInst();
            if (pUVar9 != (UDS_LogManager *)0x0) {
              pUVar9 = UDS_LogManager::GetInst();
              local_178._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_178,"UDS_VM_W_RingCmd::CulcRingCmdCenter",0x23,Yes);
              UDS_LogManager::PrintLog
                        (pUVar9,1,Warning,local_178.Ptr,0x1cb,L"windowManager is nullptr");
              if ((void *)local_178._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_178._padding_);
              }
            }
          }
          else {
            pUVar13 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_6f8);
            UDS_WindowManager::GetWindowInfo(pUVar13,(EDS_WindowWidget)&local_6f0);
            bVar8 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_6f0,
                               (void *)0x0);
            if (!bVar8) {
              pUVar15 = FWeakObjectPtr::Get(&local_6f0);
              auVar2 = *(undefined1 (*) [16])&pUVar15[2].field_0x18;
              pUVar13 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_6f8);
              pFVar14 = UDS_WindowManager::GetRootWidgetGeometry(pUVar13);
              local_628 = *(undefined8 *)((longlong)&(pFVar14->AbsolutePosition).field0_0x0 + 4);
              uStack_620 = *(undefined8 *)((longlong)&(pFVar14->Position).field0_0x0 + 4);
              local_618 = *(undefined8 *)((pFVar14->AccumulatedRenderTransform).M.M[0] + 1);
              uStack_610 = *(undefined8 *)((pFVar14->AccumulatedRenderTransform).M.M[1] + 1);
              fVar1 = pFVar14->Scale;
              local_608 = *(undefined8 *)
                           ((longlong)&(pFVar14->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
              FWeakObjectPtr::Get(&local_6f0);
              uVar16 = auVar2._8_4_;
              uVar17 = auVar2._12_4_;
              if (auVar2._0_8_ <= auVar2._8_8_) {
                uVar16 = auVar2._0_4_;
                uVar17 = auVar2._4_4_;
              }
              this->RingCmdRadius =
                   (float)((double)CONCAT44(uVar17,uVar16) * ___real_3fdb333340000000 *
                          (double)fVar1);
            }
          }
          pUVar15 = FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
          this->RingCmdEntryCount = *(int *)&pUVar15[2].field_0xc;
          local_6a0 = FFieldNotificationClassDescriptor::RingCmdEntryCount.BitNumber;
          local_6a8 = FFieldNotificationClassDescriptor::RingCmdEntryCount.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_6a8);
          UpdateRingCmdEntrySlot(this);
          UpdateRingCmdEntryIcon(this);
          ADS_PlayerController::GetPlayerController();
          bVar8 = FWeakObjectPtr::IsValid(&local_6e0);
          if (bVar8) {
            pUVar15 = FWeakObjectPtr::Get(&local_6e0);
            this->bIsUpdate = pUVar15[0x36].field_0x8 != '\x02';
          }
          if ((this->VM_NextDeckInputKey).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
            MakeContext<FDS_ViewModelContext_InputKey>(&local_698);
            pFVar7 = local_698.Object;
            if (local_698.Object == (FDS_ViewModelContext_InputKey *)0x0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            *(undefined4 *)&pFVar7->_padding_ = 0x15d;
            pFVar7->KeyActionType = IA_RingCmd_Custom_NextDeck;
            pUVar5 = (this->VM_NextDeckInputKey).field0_0x0.DebugPtr;
            local_658.Object = (FDS_ViewModelContext *)local_698.Object;
            local_658.SharedReferenceCount.ReferenceController =
                 local_698.SharedReferenceCount.ReferenceController;
            if (local_698.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_698.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_698.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_658);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_698.SharedReferenceCount.ReferenceController);
          }
          if ((this->VM_PrevDeckInputKey).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
            MakeContext<FDS_ViewModelContext_InputKey>(&local_688);
            pFVar7 = local_688.Object;
            if (local_688.Object == (FDS_ViewModelContext_InputKey *)0x0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            *(undefined4 *)&pFVar7->_padding_ = 0x15d;
            pFVar7->KeyActionType = IA_RingCmd_Custom_PrevDeck;
            pUVar5 = (this->VM_PrevDeckInputKey).field0_0x0.DebugPtr;
            local_648[0].Object = (FDS_ViewModelContext *)local_688.Object;
            local_648[0].SharedReferenceCount.ReferenceController =
                 local_688.SharedReferenceCount.ReferenceController;
            if (local_688.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,local_648);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_688.SharedReferenceCount.ReferenceController);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6d8.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c03a890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd::OnUpdate(UDS_VM_W_RingCmd *this,float param_1)

{
  double dVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  float *pfVar4;
  UDS_RingCommandDeckDataSet *pUVar5;
  UObject *pUVar6;
  UDS_LogManager *pUVar7;
  int iVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  double local_190;
  double local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    (&this->RingCmdData,(void *)0x0);
  if ((!bVar2) &&
     (bVar2 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                        (&this->RingCmdDataSet,(void *)0x0), !bVar2)) {
    if (this->bIsEditMode == true) {
      return;
    }
    pFVar3 = FSlateApplication::Get();
    pfVar4 = (float *)(**(code **)(*(longlong *)pFVar3 + 0x68))(pFVar3,local_198);
    dVar1 = (double)*pfVar4 - (this->CenterMousePos).field0_0x0._s_0.X;
    dVar9 = (double)pfVar4[1] - (this->CenterMousePos).field0_0x0._s_0.Y;
    auVar10._0_8_ = dVar1 * dVar1;
    auVar10._8_8_ = 0;
    dVar13 = dVar9 * dVar9 + auVar10._0_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar13;
    auVar11 = sqrtpd(auVar10,auVar11);
    if (this->RingCmdRadius * ___real_3e828f5d <= (float)auVar11._0_8_) {
      if (this->RingCmdRadius < (float)auVar11._0_8_) {
        pFVar3 = FSlateApplication::Get();
        if (dVar13 <= __real_3e45798ee0000000) {
          dVar15 = 0.0;
          dVar13 = 0.0;
        }
        else {
          dVar15 = dVar9 * (__real_3ff0000000000000 / SQRT(dVar13));
          dVar13 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar13));
        }
        local_188 = (double)this->RingCmdRadius * dVar15 + (this->CenterMousePos).field0_0x0._s_0.Y;
        local_190 = (double)this->RingCmdRadius * dVar13 + (this->CenterMousePos).field0_0x0._s_0.X;
        (**(code **)(*(longlong *)&pFVar3->field_0x198 + 0x1d0))(&pFVar3->field_0x198,&local_190);
      }
      dVar9 = FGenericPlatformMath::Atan2
                        ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^
                                          __xmm_80000000000000008000000000000000._4_4_,
                                          SUB84(dVar9,0) ^
                                          (uint)__xmm_80000000000000008000000000000000),dVar1);
      fVar12 = (float)dVar9 * __real_42652ee0;
      fVar14 = fVar12 - __real_42b40000;
      if (fVar12 < __real_42b40000) {
        fVar14 = fVar12 + __real_43870000;
      }
      iVar8 = (int)ROUND((float)this->RingCmdEntryCount * fVar14 * __real_3bb60b61 + __real_3f000000
                        ) >> 1;
      if (this->RingCmdEntryCount == iVar8) {
        iVar8 = 0;
      }
      pUVar5 = (UDS_RingCommandDeckDataSet *)FWeakObjectPtr::Get(&(this->RingCmdDataSet).WeakPtr);
      pUVar6 = FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
      UDS_RingCommandDeckDataSet::SetSelectedDeckIndex(pUVar5,*(int *)&pUVar6[2].field_0x8,iVar8);
    }
    else {
      pUVar5 = (UDS_RingCommandDeckDataSet *)FWeakObjectPtr::Get(&(this->RingCmdDataSet).WeakPtr);
      pUVar6 = FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
      UDS_RingCommandDeckDataSet::SetSelectedDeckIndex(pUVar5,*(int *)&pUVar6[2].field_0x8,-1);
      iVar8 = -1;
    }
    OnRingCmdSlotIndexChagned(this,iVar8);
    return;
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_VM_W_RingCmd::OnUpdate",0x1a,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_178.Ptr,0x95,L"RingCmdData is nullptr.");
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
  }
  return;
}

// SetClickRingCmdVisibility @ 14c040b60

void __thiscall
UDS_VM_W_RingCmd::SetClickRingCmdVisibility(UDS_VM_W_RingCmd *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->ClickRingCmdVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::ClickRingCmdVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ClickRingCmdVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetCurrentRingItemSubText @ 14c040d60

void __thiscall
UDS_VM_W_RingCmd::SetCurrentRingItemSubText(UDS_VM_W_RingCmd *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->CurrentRingItemSubText,param_1);
  local_10 = FFieldNotificationClassDescriptor::CurrentRingItemSubText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CurrentRingItemSubText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetCurrentRingItemSubTextVisibility @ 14c040db0

void __thiscall
UDS_VM_W_RingCmd::SetCurrentRingItemSubTextVisibility
          (UDS_VM_W_RingCmd *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CurrentRingItemSubTextVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CurrentRingItemSubTextVisibility.FieldName;
  if (this->CurrentRingItemSubTextVisibility != *param_1) {
    this->CurrentRingItemSubTextVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCurrentRingItemText @ 14c040e00

void __thiscall UDS_VM_W_RingCmd::SetCurrentRingItemText(UDS_VM_W_RingCmd *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->CurrentRingItemText,param_1);
  local_10 = FFieldNotificationClassDescriptor::CurrentRingItemText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CurrentRingItemText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetQuickSlotInputKey @ 14c042d20

void __thiscall UDS_VM_W_RingCmd::SetQuickSlotInputKey(UDS_VM_W_RingCmd *this,int param_1)

{
  UDS_VM_InputKey *this_00;
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_QuickSlotInputKey).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar2 = local_28.Object;
    if ((local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    pFVar2->bUseCurrentMappingType = false;
    pFVar2->InputMappingType = Action_Base;
    switch(param_1) {
    case 0:
      pFVar2->KeyActionType = IA_RingCommandQuickSlot_0;
      break;
    case 1:
      pFVar2->KeyActionType = IA_RingCommandQuickSlot_1;
      break;
    case 2:
      pFVar2->KeyActionType = IA_RingCommandQuickSlot_2;
      break;
    case 3:
      pFVar2->KeyActionType = IA_RingCommandQuickSlot_3;
      break;
    case 4:
      pFVar2->KeyActionType = IA_RingCommandQuickSlot_4;
      break;
    case 5:
      pFVar2->KeyActionType = IA_RingCommandQuickSlot_5;
      break;
    case 6:
      pFVar2->KeyActionType = IA_RingCommandQuickSlot_6;
      break;
    case 7:
      pFVar2->KeyActionType = IA_RingCommandQuickSlot_7;
      break;
    default:
      pFVar2->KeyActionType = None;
    }
    this_00 = (this->VM_QuickSlotInputKey).field0_0x0.DebugPtr;
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
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
    local_30 = FFieldNotificationClassDescriptor::VM_QuickSlotInputKey.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::VM_QuickSlotInputKey.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetRingCmdData @ 14c043050

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd::SetRingCmdData
          (UDS_VM_W_RingCmd *this,TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  FWeakObjectPtr local_res10;
  <lambda_1> local_res18 [8];
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FWeakObjectPtr local_c0;
  FName local_b8;
  FName local_b0;
  UDS_VM_W_RingCmd *local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_res10,
                     (void *)0x0);
  if (bVar2) {
    return;
  }
  bVar2 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                    (&this->RingCmdDataSet,(void *)0x0);
  if (bVar2) {
    return;
  }
  bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    (&this->RingCmdData,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this)
    ;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this);
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  pcVar4 = strstr("&UDS_VM_W_RingCmd::OnRingCmdDataDirty","::");
  if (pcVar4 == (char *)0x0) {
LAB_14c04315b:
    pcVar6 = &DAT_00000002;
LAB_14c043160:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14c04315b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14c043160;
  }
  ::FName::FName(&local_b0,pcVar6);
  if ((this == (UDS_VM_W_RingCmd *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = local_b0;
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.ObjectIndex = 0;
  local_c0.ObjectSerialNumber = 0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  if ((this == (UDS_VM_W_RingCmd *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_a8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_RingCmd *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_a8);
  local_b8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c8,&local_70);
  if ((local_b8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_c0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14c0432a1;
  }
  local_a0 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_W_RingCmd>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14c0432a1:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c8,&local_58);
  local_98.Object = local_c0;
  local_98.FunctionName = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res18,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_98);
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  (this->RingCmdData).WeakPtr = local_res10;
  pUVar3 = FWeakObjectPtr::Get(&(this->RingCmdDataSet).WeakPtr);
  OnRingCmdSlotIndexChagned(this,(int)((ulonglong)*(undefined8 *)&pUVar3[4].field_0x20 >> 0x20));
  SetRingCmdDeckIndexEntry(this);
  return;
}

// SetRingCmdDeckIndexEntry @ 14c043370

void __thiscall UDS_VM_W_RingCmd::SetRingCmdDeckIndexEntry(UDS_VM_W_RingCmd *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_01;
  UObject *pUVar6;
  uint uVar7;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  UDS_UserObjectListItem *local_res8;
  FName local_58;
  int local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  FDS_ViewModelContext *pFVar8;
  
  FDS_EntryBindingEventField::Reset(&this->RingCmdDeckIndexEntry);
  pFVar10 = (FDS_ViewModelContext *)0x0;
  pFVar8 = pFVar10;
  do {
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar3 = ::operator_new(0x78);
    pFVar9 = pFVar10;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
      pFVar3[1].ViewModelName.ComparisonIndex = 0;
      pFVar3[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[2].DerivedStaticStruct = 0;
      pFVar3[3]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar3[3].ViewModelName.ComparisonIndex.Value + 2) = 0;
      *(undefined2 *)((longlong)&pFVar3[3].ViewModelName.Number + 2) = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_RingCmd__6B_;
      pFVar3[1]._padding_ = 0;
      *(undefined8 *)&pFVar3[1].DerivedStaticStruct = 0;
      *(undefined8 *)&pFVar3[1].ViewModelTemplateKey = 0;
      pFVar3[2]._padding_ = 0;
      pFVar3[2].ViewModelName.ComparisonIndex = 0;
      pFVar3[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[2].ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar3[3].DerivedStaticStruct = 0;
      *(undefined2 *)&pFVar3[3].ViewModelName.ComparisonIndex.Value = 0;
      pFVar9 = pFVar3;
    }
    pFVar4 = ::operator_new(0x20);
    pFVar3 = pFVar10;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RingCmd__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar9;
      pFVar3 = pFVar4;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_RingCmd::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar5;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar3 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar3->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar3->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_48.Object = pFVar9;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = W_RingCmd_DeckNumber;
    pUVar6 = FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
    *(bool *)&pFVar9[3].ViewModelName.ComparisonIndex.Value =
         *(int *)&pUVar6[2].field_0x8 == (int)pFVar8;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar3->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar3->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_38.Object = pFVar9;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
    UDS_UserObjectListItem::AddContext(this_00,&local_38);
    local_res8 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->RingCmdDeckIndexEntry,(TObjectPtr<UDS_UserObjectListItem>)&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar3);
    uVar7 = (int)pFVar8 + 1;
    pFVar8 = (FDS_ViewModelContext *)(ulonglong)uVar7;
  } while ((int)uVar7 < 3);
  local_50 = FFieldNotificationClassDescriptor::RingCmdDeckIndexEntry.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::RingCmdDeckIndexEntry.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  return;
}

// SetRingCmdEntryCount @ 14c0435a0

void __thiscall UDS_VM_W_RingCmd::SetRingCmdEntryCount(UDS_VM_W_RingCmd *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->RingCmdEntryCount = *param_1;
  local_10 = FFieldNotificationClassDescriptor::RingCmdEntryCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RingCmdEntryCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14c048ca0

void __thiscall UDS_VM_W_RingCmd::UnbindModel(UDS_VM_W_RingCmd *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_InputEvent *pUVar3;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  bVar1 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    (&this->RingCmdData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  bVar1 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                    (&this->RingCmdDataSet,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->RingCmdDataSet).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 5),this);
  }
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeInputDeviceType,this);
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_W_RingCmd>(&pUVar3->OnInputEvent,this);
  }
  return;
}

// UpdateRingCmdEntryIcon @ 14c04dff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd::UpdateRingCmdEntryIcon(UDS_VM_W_RingCmd *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_UserObjectListItem *this_00;
  UDS_RingCommandDeckData *this_01;
  FDS_ViewModelContext *pFVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_02;
  FDS_ViewModelContext *pFVar7;
  undefined1 auStackY_2f8 [32];
  int local_2c8 [2];
  TSharedPtr<FDS_RingCommandSlotData,1> local_2c0;
  UDS_UserObjectListItem *local_2b0;
  FName local_2a8;
  int local_2a0;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    (&this->RingCmdData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_W_RingCmd::UpdateRingCmdEntryIcon",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_278.Ptr,0x133,L"RingCmdData is nullptr");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    FDS_EntryBindingEventField::Reset(&this->RingCmdEntryIconEventField);
    local_2c8[0] = 0;
    if (0 < this->RingCmdEntryCount) {
      do {
        this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        this_01 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
        UDS_RingCommandDeckData::GetRingCommandData(this_01,&local_2c0,local_2c8);
        if (local_2c0.Object == (FDS_RingCommandSlotData *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_VM_W_RingCmd::UpdateRingCmdEntryIcon",0x28,Yes);
            UDS_LogManager::PrintLog
                      (pUVar3,1,Warning,local_158.Ptr,0x140,L"ringCmdSlotData is nullptr");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2c0.SharedReferenceCount.ReferenceController);
        }
        else {
          pFVar4 = ::operator_new(0x78);
          pFVar7 = (FDS_ViewModelContext *)0x0;
          if (pFVar4 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
            pFVar4[1].ViewModelName.ComparisonIndex = 0;
            pFVar4[1].ViewModelName.Number = 0;
            *(undefined8 *)&pFVar4[2].DerivedStaticStruct = 0;
            pFVar4[3]._padding_ = 0;
            *(undefined4 *)((longlong)&pFVar4[3].ViewModelName.ComparisonIndex.Value + 2) = 0;
            *(undefined2 *)((longlong)&pFVar4[3].ViewModelName.Number + 2) = 0;
            pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_RingCmd__6B_;
            *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
            (pFVar4->ViewModelName).ComparisonIndex = 0;
            (pFVar4->ViewModelName).Number = 0;
            pFVar4[1]._padding_ = 0;
            *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
            *(undefined8 *)&pFVar4[1].ViewModelTemplateKey = 0;
            pFVar4[2]._padding_ = 0;
            pFVar4[2].ViewModelName.ComparisonIndex = 0;
            pFVar4[2].ViewModelName.Number = 0;
            *(undefined8 *)&pFVar4[2].ViewModelTemplateKey = 0;
            *(undefined8 *)&pFVar4[3].DerivedStaticStruct = 0;
            *(undefined2 *)&pFVar4[3].ViewModelName.ComparisonIndex.Value = 0;
            pFVar7 = pFVar4;
          }
          pFVar5 = ::operator_new(0x20);
          pFVar4 = (FDS_ViewModelContext *)0x0;
          if (pFVar5 != (FDS_ViewModelContext *)0x0) {
            *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
            *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
            pFVar5->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RingCmd__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar7;
            pFVar4 = pFVar5;
          }
          if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pUVar6 = FDS_ViewModelContext_RingCmd::StaticStruct();
          *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar6;
          this_02 = UDS_ViewModelContextManager::GetInst();
          if (this_02 != (UDS_ViewModelContextManager *)0x0) {
            if (pFVar4 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar4->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar4->DerivedStaticStruct + 1);
              UNLOCK();
            }
            local_298.Object = pFVar7;
            local_298.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar4;
            UDS_ViewModelContextManager::RegisterContext(this_02,&local_298);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_298.SharedReferenceCount.ReferenceController);
          }
          pFVar7->ViewModelTemplateKey = W_RingCmdSlotIcon;
          if ((local_2c0.Object == (FDS_RingCommandSlotData *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          *(int *)&pFVar7[3].DerivedStaticStruct = (local_2c0.Object)->DeckNumber;
          if ((local_2c0.Object == (FDS_RingCommandSlotData *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          ((atomic<int> *)&pFVar7[3].DerivedStaticStruct)[1] =
               (atomic<int>)(local_2c0.Object)->SlotNumber;
          *(bool *)((longlong)&pFVar7[3].ViewModelName.ComparisonIndex.Value + 1) =
               this->bIsEditMode;
          if (pFVar4 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar4->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar4->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_288.Object = pFVar7;
          local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4
          ;
          UDS_UserObjectListItem::AddContext(this_00,&local_288);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar4);
          local_2b0 = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FDS_EntryBindingEventField::Add
                    (&this->RingCmdEntryIconEventField,
                     (TObjectPtr<UDS_UserObjectListItem>)&local_2b0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2c0.SharedReferenceCount.ReferenceController);
        }
        local_2c8[0] = local_2c8[0] + 1;
      } while (local_2c8[0] < this->RingCmdEntryCount);
    }
    local_2a0 = FFieldNotificationClassDescriptor::RingCmdEntryIconEventField.BitNumber;
    local_2a8 = FFieldNotificationClassDescriptor::RingCmdEntryIconEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
  }
  return;
}

// UpdateRingCmdEntrySlot @ 14c04e430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd::UpdateRingCmdEntrySlot(UDS_VM_W_RingCmd *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_01;
  undefined8 *puVar8;
  ulong64 uVar9;
  UObject *pUVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  atomic<int> aVar13;
  FDS_ViewModelContext *pFVar14;
  undefined1 auStackY_298 [32];
  atomic<int> local_268;
  undefined1 local_260 [8];
  ForAnyElementType local_258;
  int local_250;
  undefined1 local_248 [8];
  ForAnyElementType local_240;
  int local_238;
  FName local_228;
  int iStack_220;
  uint uStack_21c;
  UDS_VM_W_RingCmd *local_218;
  UDS_UserObjectListItem *local_210;
  TSharedPtr<FDS_ViewModelContext,1> local_208;
  TSharedPtr<FDS_ViewModelContext,1> local_1f8;
  code *local_1e8;
  undefined8 uStack_1e0;
  FDestructionSentinel local_1d8;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  EDS_ViewModelTemplateKey *local_190;
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  bVar3 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    (&this->RingCmdData,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_RingCmd::UpdateRingCmdEntrySlot",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x113,L"RingCmdData is nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    FDS_EntryBindingEventField::Reset(&this->RingCmdEntrySlotEventField);
    pFVar12 = (FDS_ViewModelContext *)0x0;
    local_268 = (atomic<int>)0x0;
    if (0 < this->RingCmdEntryCount) {
      local_228 = (FName)OnRingCmdSlotIndexChagned;
      iStack_220 = 0;
      uStack_21c = uStack_1e0._4_4_;
      uStack_1e0 = (ulonglong)uStack_1e0._4_4_ << 0x20;
      local_1e8 = OnRingCmdSlotIndexChagned;
      pFVar14 = pFVar12;
      do {
        this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar5 = ::operator_new(0x78);
        pFVar11 = pFVar12;
        if (pFVar5 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
          pFVar5[1].ViewModelName.ComparisonIndex = 0;
          pFVar5[1].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar5[2].DerivedStaticStruct = 0;
          pFVar5[3]._padding_ = 0;
          *(undefined4 *)((longlong)&pFVar5[3].ViewModelName.ComparisonIndex.Value + 2) = 0;
          *(undefined2 *)((longlong)&pFVar5[3].ViewModelName.Number + 2) = 0;
          *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
          (pFVar5->ViewModelName).ComparisonIndex = 0;
          (pFVar5->ViewModelName).Number = 0;
          pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_RingCmd__6B_;
          pFVar5[1]._padding_ = 0;
          *(undefined8 *)&pFVar5[1].DerivedStaticStruct = 0;
          *(undefined8 *)&pFVar5[1].ViewModelTemplateKey = 0;
          pFVar5[2]._padding_ = 0;
          pFVar5[2].ViewModelName.ComparisonIndex = 0;
          pFVar5[2].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar5[2].ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar5[3].DerivedStaticStruct = 0;
          *(undefined2 *)&pFVar5[3].ViewModelName.ComparisonIndex.Value = 0;
          pFVar11 = pFVar5;
        }
        pFVar6 = ::operator_new(0x20);
        pFVar5 = pFVar12;
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar6->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RingCmd__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar11;
          pFVar5 = pFVar6;
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
        pUVar7 = FDS_ViewModelContext_RingCmd::StaticStruct();
        *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar7;
        this_01 = UDS_ViewModelContextManager::GetInst();
        if (this_01 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar5 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar5->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_208.Object = pFVar11;
          local_208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5
          ;
          UDS_ViewModelContextManager::RegisterContext(this_01,&local_208);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_208.SharedReferenceCount.ReferenceController);
        }
        *(bool *)((longlong)&pFVar11[3].ViewModelName.ComparisonIndex.Value + 1) = this->bIsEditMode
        ;
        if ((FDS_ViewModelContext *)&this->OnClickRingMenuDelegate != pFVar11 + 1) {
          local_260 = (undefined1  [8])0x0;
          local_258.Data = (FScriptContainerElement *)0x0;
          local_250 = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->OnClickRingMenuDelegate,&local_188);
          if ((*(int *)&(this->OnClickRingMenuDelegate).field_0x10 != 0) &&
             (plVar1 = *(longlong **)&(this->OnClickRingMenuDelegate).field_0x8,
             plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x50))(plVar1,local_260);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_188);
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar11 + 1),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_260);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,
                     (FWriteAccessScope *)&local_1d8);
          if ((local_250 != 0) && (local_258.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_258.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_258,0,0,0x10);
            local_250 = 0;
          }
          if (local_1d8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
          }
          if (local_258.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_260);
        }
        if (&this->OnDoubleClickRingMenuDelegate !=
            (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)
            &pFVar11[1].ViewModelTemplateKey) {
          local_248 = (undefined1  [8])0x0;
          local_240.Data = (FScriptContainerElement *)0x0;
          local_238 = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->OnDoubleClickRingMenuDelegate,&local_170);
          if ((*(int *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 != 0) &&
             (plVar1 = *(longlong **)&(this->OnDoubleClickRingMenuDelegate).field_0x8,
             plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x50))(plVar1,local_248);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_170);
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar11[1].ViewModelTemplateKey,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
                     (FWriteAccessScope *)&local_1c0);
          if ((local_238 != 0) && (local_240.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_240.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_240,0,0,0x10);
            local_238 = 0;
          }
          if (local_1c0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
          }
          if (local_240.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_248);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar11[2].ViewModelName,(FWriteAccessScope *)&local_1a8);
        local_190 = &pFVar11[2].ViewModelTemplateKey;
        puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_190);
        aVar13 = SUB84(pFVar14,0);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_RingCmd____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar8[3] = 0;
          local_218 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_218);
          puVar8[4] = local_1e8;
          puVar8[5] = uStack_1e0;
          aVar13 = local_268;
        }
        if (local_1a8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
        }
        pFVar11->ViewModelTemplateKey = W_RingCmdSlot;
        pUVar10 = FWeakObjectPtr::Get(&(this->RingCmdData).WeakPtr);
        *(atomic<int> *)&pFVar11[3].DerivedStaticStruct = *(atomic<int> *)&pUVar10[2].field_0x8;
        ((atomic<int> *)&pFVar11[3].DerivedStaticStruct)[1] = aVar13;
        if (pFVar5 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar5->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_1f8.Object = pFVar11;
        local_1f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
        UDS_UserObjectListItem::AddContext(this_00,&local_1f8);
        local_210 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add
                  (&this->RingCmdEntrySlotEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_210)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar5);
        local_268 = (atomic<int>)((int)aVar13 + 1);
        pFVar14 = (FDS_ViewModelContext *)(ulonglong)(uint)local_268;
      } while ((int)local_268 < this->RingCmdEntryCount);
    }
    iStack_220 = FFieldNotificationClassDescriptor::RingCmdEntrySlotEventField.BitNumber;
    local_228 = FFieldNotificationClassDescriptor::RingCmdEntrySlotEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
  }
  return;
}

