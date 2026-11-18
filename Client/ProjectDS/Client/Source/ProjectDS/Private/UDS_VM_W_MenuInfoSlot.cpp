// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// SetContentsID_WrapperImpl @ 14b749b50

void __cdecl UDS_VM_W_MenuInfoSlot::SetContentsID_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FDS_ContentsTotalMenuTableRow *pFVar3;
  longlong lVar4;
  FName FStack_18;
  int iStack_10;
  
  pFVar3 = FDS_ContentsTotalMenuTableRow::GetRef(*(long64 *)param_2,true);
  iVar2 = FFieldNotificationClassDescriptor::MenuIconID.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MenuIconID.FieldName;
  if (*(int *)((longlong)param_1 + 0xa8) != pFVar3->ID_Icon) {
    *(int *)((longlong)param_1 + 0xa8) = pFVar3->ID_Icon;
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  lVar4 = (**(code **)(pFVar3->ID_Name)._padding_)(&pFVar3->ID_Name);
  iStack_10 = FFieldNotificationClassDescriptor::MenuStringID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MenuStringID.FieldName;
  if (*(longlong *)((longlong)param_1 + 0xb0) != lVar4) {
    *(longlong *)((longlong)param_1 + 0xb0) = lVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  iStack_10 = FFieldNotificationClassDescriptor::ContentsID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ContentsID.FieldName;
  if (*(longlong *)((longlong)param_1 + 0xa0) != *(longlong *)param_2) {
    *(longlong *)((longlong)param_1 + 0xa0) = *(longlong *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMenuIconID_WrapperImpl @ 14b749b60

void __cdecl UDS_VM_W_MenuInfoSlot::SetMenuIconID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MenuIconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MenuIconID.FieldName;
  if (*(int *)((longlong)param_1 + 0xa8) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xa8) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMenuStringID_WrapperImpl @ 14b749b70

void __cdecl UDS_VM_W_MenuInfoSlot::SetMenuStringID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MenuStringID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MenuStringID.FieldName;
  if (*(longlong *)((longlong)param_1 + 0xb0) != *(longlong *)param_2) {
    *(longlong *)((longlong)param_1 + 0xb0) = *(longlong *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetContentsLockVisibility_WrapperImpl @ 14b749b80

void __cdecl
UDS_VM_W_MenuInfoSlot::SetContentsLockVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::ContentsLockVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ContentsLockVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0xb8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xb8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetContentsSelectedVisibility_WrapperImpl @ 14b749b90

void __cdecl
UDS_VM_W_MenuInfoSlot::SetContentsSelectedVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::ContentsSelectedVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ContentsSelectedVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0xb9) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xb9) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetClickEventField_WrapperImpl @ 14b749ba0

void __cdecl UDS_VM_W_MenuInfoSlot::SetClickEventField_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetEventMouseButtonUp_WrapperImpl @ 14b749bb0

void __cdecl UDS_VM_W_MenuInfoSlot::SetEventMouseButtonUp_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x2f8),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0x308) != 0) &&
     (*(longlong **)((longlong)param_1 + 0x300) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0x300) + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      uVar1 = *(undefined4 *)((longlong)param_1 + 0xa0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0x2f8),&FStack_28);
      if (*(int *)((longlong)param_1 + 0x308) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)param_1 + 0x300);
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// SetEventMouseButtonDoubleClick_WrapperImpl @ 14b749bc0

void __cdecl
UDS_VM_W_MenuInfoSlot::SetEventMouseButtonDoubleClick_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x310),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 800) != 0) &&
     (*(longlong **)((longlong)param_1 + 0x318) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0x318) + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      uVar1 = *(undefined4 *)((longlong)param_1 + 0xa0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0x310),&FStack_28);
      if (*(int *)((longlong)param_1 + 800) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)param_1 + 0x318);
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// StaticClass @ 14b749bd0

UClass * __cdecl UDS_VM_W_MenuInfoSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_MenuInfoSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_MenuInfoSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_MenuInfoSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_MenuInfoSlot,0x328,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_MenuInfoSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_MenuInfoSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_MenuInfoSlot.InnerSingleton;
}

// UDS_VM_W_MenuInfoSlot @ 14b74c6e0

UDS_VM_W_MenuInfoSlot * __thiscall
UDS_VM_W_MenuInfoSlot::UDS_VM_W_MenuInfoSlot(UDS_VM_W_MenuInfoSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_MenuInfoSlot__6B_;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDoubleClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  (this->ContentData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->OnClickMenuInfoButtonUpDelegate = 0;
  *(undefined8 *)&(this->OnClickMenuInfoButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickMenuInfoButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickMenuInfoDoubleClickDelegate = 0;
  *(undefined8 *)&(this->OnClickMenuInfoDoubleClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickMenuInfoDoubleClickDelegate).field_0x10 = 0;
  return this;
}

// UDS_VM_W_MenuInfoSlot @ 14b74c7d0

UDS_VM_W_MenuInfoSlot * __thiscall
UDS_VM_W_MenuInfoSlot::UDS_VM_W_MenuInfoSlot
          (UDS_VM_W_MenuInfoSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_MenuInfoSlot__6B_;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDoubleClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  (this->ContentData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->OnClickMenuInfoButtonUpDelegate = 0;
  *(undefined8 *)&(this->OnClickMenuInfoButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickMenuInfoButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickMenuInfoDoubleClickDelegate = 0;
  *(undefined8 *)&(this->OnClickMenuInfoDoubleClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickMenuInfoDoubleClickDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_VM_W_MenuInfoSlot @ 14b74ebb0

void __thiscall UDS_VM_W_MenuInfoSlot::~UDS_VM_W_MenuInfoSlot(UDS_VM_W_MenuInfoSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_MenuInfoSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickMenuInfoDoubleClickDelegate)
  ;
  pvVar1 = *(void **)&(this->OnClickMenuInfoDoubleClickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickMenuInfoDoubleClickDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickMenuInfoButtonUpDelegate);
  pvVar1 = *(void **)&(this->OnClickMenuInfoButtonUpDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickMenuInfoButtonUpDelegate);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEventField).Delegate);
  pvVar1 = *(void **)&(this->ClickEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEventField).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b751160

IClassDescriptor * __thiscall
UDS_VM_W_MenuInfoSlot::GetFieldNotificationDescriptor(UDS_VM_W_MenuInfoSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_MenuInfoSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b751840

UClass * __cdecl UDS_VM_W_MenuInfoSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_MenuInfoSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_MenuInfoSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_MenuInfoSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_MenuInfoSlot,0x328,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_MenuInfoSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_MenuInfoSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_MenuInfoSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_MenuInfoSlot @ 14b752350

void __cdecl UDS_VM_W_MenuInfoSlot::StaticRegisterNativesUDS_VM_W_MenuInfoSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_MenuInfoSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChanged_SelectedContent @ 14b753590

void __cdecl
UDS_VM_W_MenuInfoSlot::execOnChanged_SelectedContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChanged_SelectedContent((UDS_VM_W_MenuInfoSlot *)param_1,local_res10[0] != 0);
  return;
}

// BindModel @ 14c002ea0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_W_MenuInfoSlot::BindModel(UDS_VM_W_MenuInfoSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  UDS_VM_W_MenuInfoSlot *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  bVar2 = TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr>::UEOpEquals(&this->ContentData,(void *)0x0)
  ;
  if (bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->ContentData).WeakPtr);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x8,
             (UObject *)this);
  pUVar3 = FWeakObjectPtr::Get(&(this->ContentData).WeakPtr);
  pcVar4 = strstr("&UDS_VM_W_MenuInfoSlot::OnChanged_SelectedContent","::");
  if (pcVar4 == (char *)0x0) {
LAB_14c002f5b:
    pcVar6 = &DAT_00000002;
LAB_14c002f60:
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
    if (pcVar6 == (char *)0x0) goto LAB_14c002f5b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14c002f60;
  }
  ::FName::FName(&local_res18,pcVar6);
  if ((this == (UDS_VM_W_MenuInfoSlot *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10 = local_res18;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((this == (UDS_VM_W_MenuInfoSlot *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_MenuInfoSlot *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res20);
  local_a8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14c0030a1;
  }
  local_a0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_BindDynamic<UDS_VM_W_MenuInfoSlot>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14c0030a1:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_98.Object = local_b0;
  local_98.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x8,
             (FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[2].field_0x10,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x8,&local_98)
  ;
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// OnChanged_SelectedContent @ 14c025d20

void __thiscall
UDS_VM_W_MenuInfoSlot::OnChanged_SelectedContent(UDS_VM_W_MenuInfoSlot *this,bool param_1)

{
  ESlateVisibility EVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ContentsSelectedVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ContentsSelectedVisibility.FieldName;
  EVar1 = Collapsed;
  if (param_1) {
    EVar1 = SelfHitTestInvisible;
  }
  if (this->ContentsSelectedVisibility != EVar1) {
    this->ContentsSelectedVisibility = EVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickEventField @ 14c0265d0

void __thiscall
UDS_VM_W_MenuInfoSlot::OnClickEventField(UDS_VM_W_MenuInfoSlot *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnEventMouseButtonDoubleClick @ 14c0294c0

void __thiscall
UDS_VM_W_MenuInfoSlot::OnEventMouseButtonDoubleClick
          (UDS_VM_W_MenuInfoSlot *this,FDS_WidgetPointerEventField *param_1)

{
  long64 lVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnClickMenuInfoDoubleClickDelegate,&local_28);
  if ((*(int *)&(this->OnClickMenuInfoDoubleClickDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnClickMenuInfoDoubleClickDelegate).field_0x8,
     plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      lVar1 = this->ContentsID;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnClickMenuInfoDoubleClickDelegate,&local_28);
      if (*(int *)&(this->OnClickMenuInfoDoubleClickDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->OnClickMenuInfoDoubleClickDelegate).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,(int)lVar1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnEventMouseButtonUp @ 14c029550

void __thiscall
UDS_VM_W_MenuInfoSlot::OnEventMouseButtonUp
          (UDS_VM_W_MenuInfoSlot *this,FDS_WidgetPointerEventField *param_1)

{
  long64 lVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnClickMenuInfoButtonUpDelegate,&local_28);
  if ((*(int *)&(this->OnClickMenuInfoButtonUpDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnClickMenuInfoButtonUpDelegate).field_0x8,
     plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      lVar1 = this->ContentsID;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnClickMenuInfoButtonUpDelegate,&local_28);
      if (*(int *)&(this->OnClickMenuInfoButtonUpDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->OnClickMenuInfoButtonUpDelegate).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,(int)lVar1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnSetViewModel @ 14c032950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_MenuInfoSlot::OnSetViewModel
          (UDS_VM_W_MenuInfoSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr> TVar7;
  FDS_ContentsTotalMenuTableRow *pFVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStackY_1f8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  TSharedPtr<FDS_ViewModelContext_MenuInfoSlot,1> local_1c8;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_MenuInfoSlot::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x13,L"InViewModelContext is nullptr")
      ;
      if ((FDS_ViewModelContext_MenuInfoSlot *)local_148._padding_ !=
          (FDS_ViewModelContext_MenuInfoSlot *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    goto LAB_14c032cc7;
  }
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168.Object = pFVar2;
  SafeCast<FDS_ViewModelContext_MenuInfoSlot>(&local_1c8,&local_168);
  if (local_1c8.Object == (FDS_ViewModelContext_MenuInfoSlot *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)local_1c8.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_MenuInfoSlot::OnSetViewModel",0x25,Yes);
      pwVar12 = L"context is nullptr";
      uVar11 = 0x1a;
LAB_14c032aab:
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,uVar11,pwVar12);
      if ((FDS_ViewModelContext_MenuInfoSlot *)local_148._padding_ !=
          (FDS_ViewModelContext_MenuInfoSlot *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
              (&this->OnClickMenuInfoButtonUpDelegate,
               &(local_1c8.Object)->OnClickMenuInfoButtonUpDelegate);
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
              (&this->OnClickMenuInfoDoubleClickDelegate,
               &(local_1c8.Object)->OnClickMenuInfoDoubleClickDelegate);
    TVar7 = UDS_ContentData::GetData
                      ((ulong64)local_158,UDS_PlayerData::MainPlayerEntityID,
                       SUB41((local_1c8.Object)->MenuID,0));
                    /* WARNING: Load size is inaccurate */
    (this->ContentData).WeakPtr = *TVar7.WeakPtr;
    bVar5 = TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr>::UEOpEquals
                      (&this->ContentData,(void *)0x0);
    if (bVar5) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_W_MenuInfoSlot::OnSetViewModel",0x25,Yes);
        pwVar12 = L"contentData is nullptr";
        uVar11 = 0x23;
        goto LAB_14c032aab;
      }
    }
    else {
      lVar10 = (longlong)(local_1c8.Object)->MenuID;
      pFVar8 = FDS_ContentsTotalMenuTableRow::GetRef(lVar10,true);
      iVar4 = FFieldNotificationClassDescriptor::MenuIconID.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::MenuIconID.FieldName;
      if (this->MenuIconID != pFVar8->ID_Icon) {
        this->MenuIconID = pFVar8->ID_Icon;
        local_1b0 = iVar4;
        local_1b8 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      }
      lVar9 = (**(code **)(pFVar8->ID_Name)._padding_)(&pFVar8->ID_Name);
      FVar3 = FFieldNotificationClassDescriptor::MenuStringID.FieldName;
      if (this->MenuStringID != lVar9) {
        local_1a0 = FFieldNotificationClassDescriptor::MenuStringID.BitNumber;
        this->MenuStringID = lVar9;
        local_1a8 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
      }
      iVar4 = FFieldNotificationClassDescriptor::ContentsID.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::ContentsID.FieldName;
      if (this->ContentsID != lVar10) {
        this->ContentsID = lVar10;
        local_190 = iVar4;
        local_198 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
      }
      iVar4 = FFieldNotificationClassDescriptor::ContentsLockVisibility.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::ContentsLockVisibility.FieldName;
      if (this->ContentsLockVisibility != Collapsed) {
        this->ContentsLockVisibility = Collapsed;
        local_180 = iVar4;
        local_188 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
      }
      iVar4 = FFieldNotificationClassDescriptor::ContentsSelectedVisibility.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::ContentsSelectedVisibility.FieldName;
      if (this->ContentsSelectedVisibility != Collapsed) {
        this->ContentsSelectedVisibility = Collapsed;
        local_170 = iVar4;
        local_178 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
LAB_14c032cc7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetContentsID @ 14c040ba0

void __thiscall UDS_VM_W_MenuInfoSlot::SetContentsID(UDS_VM_W_MenuInfoSlot *this,long64 *param_1)

{
  FName FVar1;
  int iVar2;
  FDS_ContentsTotalMenuTableRow *pFVar3;
  longlong lVar4;
  FName local_18;
  int local_10;
  
  pFVar3 = FDS_ContentsTotalMenuTableRow::GetRef(*param_1,true);
  iVar2 = FFieldNotificationClassDescriptor::MenuIconID.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MenuIconID.FieldName;
  if (this->MenuIconID != pFVar3->ID_Icon) {
    this->MenuIconID = pFVar3->ID_Icon;
    local_18 = FVar1;
    local_10 = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  lVar4 = (**(code **)(pFVar3->ID_Name)._padding_)(&pFVar3->ID_Name);
  local_10 = FFieldNotificationClassDescriptor::MenuStringID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MenuStringID.FieldName;
  if (this->MenuStringID != lVar4) {
    this->MenuStringID = lVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::ContentsID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ContentsID.FieldName;
  if (this->ContentsID != *param_1) {
    this->ContentsID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetContentsLockVisibility @ 14c040ca0

void __thiscall
UDS_VM_W_MenuInfoSlot::SetContentsLockVisibility
          (UDS_VM_W_MenuInfoSlot *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ContentsLockVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ContentsLockVisibility.FieldName;
  if (this->ContentsLockVisibility != *param_1) {
    this->ContentsLockVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetContentsSelectedVisibility @ 14c040cf0

void __thiscall
UDS_VM_W_MenuInfoSlot::SetContentsSelectedVisibility
          (UDS_VM_W_MenuInfoSlot *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ContentsSelectedVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ContentsSelectedVisibility.FieldName;
  if (this->ContentsSelectedVisibility != *param_1) {
    this->ContentsSelectedVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMenuIconID @ 14c042950

void __thiscall UDS_VM_W_MenuInfoSlot::SetMenuIconID(UDS_VM_W_MenuInfoSlot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MenuIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MenuIconID.FieldName;
  if (this->MenuIconID != *param_1) {
    this->MenuIconID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMenuStringID @ 14c0429a0

void __thiscall UDS_VM_W_MenuInfoSlot::SetMenuStringID(UDS_VM_W_MenuInfoSlot *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MenuStringID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MenuStringID.FieldName;
  if (this->MenuStringID != *param_1) {
    this->MenuStringID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14c048a60

void __thiscall UDS_VM_W_MenuInfoSlot::UnbindModel(UDS_VM_W_MenuInfoSlot *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr>::UEOpEquals(&this->ContentData,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ContentData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2[2].field_0x8,
               (UObject *)this);
  }
  return;
}

