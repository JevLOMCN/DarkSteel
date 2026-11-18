// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 40

// SetEventOnDrop_WrapperImpl @ 14b73ca70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_InventoryBag::SetEventOnDrop_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_InventoryBag *this_00;
  UObject *pUVar4;
  FWeakObjectPtr FStackX_8;
  UObject *apUStackX_18 [2];
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = this->Handle;
      goto LAB_14bfbce35;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfbce35:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)apUStackX_18);
  bVar2 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar2) {
    this_00 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&FStackX_8);
    UDS_M_InventoryBag::OnEventOnDrop(this_00,param_2);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141376>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0x100,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetSortOrderButtonClickEvent_WrapperImpl @ 14b73ca80

void __cdecl
UDS_VM_W_InventoryBag::SetSortOrderButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  FName FVar6;
  FString *pFVar7;
  UEnum *this_00;
  FName *pFVar8;
  long64 lVar9;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar10;
  int iVar11;
  wchar_t *pwVar12;
  EDS_SortOrder EVar13;
  FWeakObjectPtr FStackX_8;
  FWeakObjectPtr FStackX_18;
  UObject *pUStackX_20;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  FName FStack_38;
  FString FStack_30;
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  pUVar10 = (UObject *)0x0;
  if (this->Handle != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this,pUVar5);
    if (bVar3) {
      pUVar10 = this->Handle;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  pUStackX_20 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pUStackX_20);
  bVar3 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar3) {
    pUVar10 = this->Handle;
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                      ((FDS_DataContainer *)&pUVar10[1].field_0x18,(EDS_InventoryBagData)auStack_40)
    ;
    uVar1 = *(undefined8 *)FVar6;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&pUVar10[1].field_0x18,uVar4 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)FVar6);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&FStack_30,pwVar12);
    this_00 = StaticEnum<enum_EDS_SortOrder>();
    if (this_00 == (UEnum *)0x0) {
      EVar13 = FStackX_8.ObjectIndex;
    }
    else {
      iVar11 = FStack_30.Data.ArrayNum + -1;
      if (FStack_30.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      pFVar8 = ::FName::FName(&FStack_38,iVar11,(wchar_t *)FStack_30.Data.AllocatorInstance.Data,
                              FNAME_Add);
      lVar9 = UEnum::GetValueByName(this_00,*pFVar8,None);
      EVar13 = (EDS_SortOrder)lVar9;
    }
    if (FStack_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data.AllocatorInstance.Data);
    }
    if (EVar13 == Ascend) {
      EVar13 = Descend;
    }
    else if (EVar13 == Descend) {
      EVar13 = Ascend;
    }
    this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&FStackX_8);
    UDS_M_InventoryBag::SetSortOrderType(this_01,EVar13);
    pUVar10 = FWeakObjectPtr::Get(&FStackX_8);
    uStack_48 = 0;
    FStackX_18.ObjectIndex = 0;
    FStackX_18.ObjectSerialNumber = 0;
    pcVar2 = *(code **)(*(longlong *)pUVar10 + 0x2e0);
    FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&uStack_48);
    (*pcVar2)(pUVar10,FStackX_18,0);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141409>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0x121,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// StaticClass @ 14b73ca90

UClass * __cdecl UDS_VM_W_InventoryBag::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_InventoryBag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_InventoryBag",
               &Z_Registration_Info_UClass_UDS_VM_W_InventoryBag.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_InventoryBag,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_InventoryBag>,
               InternalVTableHelperCtorCaller<UDS_VM_W_InventoryBag>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_InventoryBag.InnerSingleton;
}

// UDS_VM_W_InventoryBag @ 14b7413f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_InventoryBag * __thiscall
UDS_VM_W_InventoryBag::UDS_VM_W_InventoryBag(UDS_VM_W_InventoryBag *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_InventoryBag__6B_;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  this->PanelSwitcherIndex = 0;
  this->IsShowPlayer = false;
  this->IsShowMount = false;
  (this->VM_SortDropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->SortOrderButtonClickEvent)._padding_ = '\0';
  (this->SortOrderButtonClickEvent).bIsCustomSelected = false;
  (this->SortOrderButtonClickEvent).bIsLacked = false;
  (this->SortOrderButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SortOrderButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->SortOrderButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SortOrderButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FixedText_Empty).StringTableType = StringUi;
  (this->FixedText_Empty).StringTableID = 0x1fc99;
  (this->FixedText_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Empty).DateTime.Ticks = 0;
  (this->FixedText_Empty).TimeSpan.Ticks = 0;
  (this->FixedText_Empty).TimeExpressionType = None;
  (this->FixedText_Empty).IsExpression = false;
  (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Empty).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_W_InventoryBag @ 14b7414e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_InventoryBag * __thiscall
UDS_VM_W_InventoryBag::UDS_VM_W_InventoryBag
          (UDS_VM_W_InventoryBag *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_InventoryBag__6B_;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  this->PanelSwitcherIndex = 0;
  this->IsShowPlayer = false;
  this->IsShowMount = false;
  (this->VM_SortDropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->SortOrderButtonClickEvent)._padding_ = '\0';
  (this->SortOrderButtonClickEvent).bIsCustomSelected = false;
  (this->SortOrderButtonClickEvent).bIsLacked = false;
  (this->SortOrderButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SortOrderButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->SortOrderButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SortOrderButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FixedText_Empty).StringTableType = StringUi;
  (this->FixedText_Empty).StringTableID = 0x1fc99;
  (this->FixedText_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Empty).DateTime.Ticks = 0;
  (this->FixedText_Empty).TimeSpan.Ticks = 0;
  (this->FixedText_Empty).TimeExpressionType = None;
  (this->FixedText_Empty).IsExpression = false;
  (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Empty).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_W_InventoryBag @ 14b742c40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_InventoryBag::~UDS_VM_W_InventoryBag(UDS_VM_W_InventoryBag *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_InventoryBag__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Empty).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Empty).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SortOrderButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->SortOrderButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SortOrderButtonClickEvent).Delegate);
  FPointerEvent::~FPointerEvent(&(this->EventOnDrop).PointerEvent);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744ce0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_InventoryBag::GetFieldNotificationDescriptor(UDS_VM_W_InventoryBag *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_InventoryBag::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b745440

UClass * __cdecl UDS_VM_W_InventoryBag::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_InventoryBag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_InventoryBag",
               &Z_Registration_Info_UClass_UDS_VM_W_InventoryBag.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_InventoryBag,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_InventoryBag>,
               InternalVTableHelperCtorCaller<UDS_VM_W_InventoryBag>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_InventoryBag.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_InventoryBag @ 14b745c70

void __cdecl UDS_VM_W_InventoryBag::StaticRegisterNativesUDS_VM_W_InventoryBag(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_InventoryBag_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBagTitle @ 14b746cd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_InventoryBag::execBagTitle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = BagTitle((UDS_VM_W_InventoryBag *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execInventogyBagCategoryList @ 14b746f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBag::execInventogyBagCategoryList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = InventogyBagCategoryList((UDS_VM_W_InventoryBag *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execInventogyBagSlotList @ 14b746fc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBag::execInventogyBagSlotList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = InventogyBagSlotList((UDS_VM_W_InventoryBag *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execInventogyBagTabList @ 14b747040

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBag::execInventogyBagTabList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = InventogyBagTabList((UDS_VM_W_InventoryBag *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execIsShowBagTitle @ 14b747300

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBag::execIsShowBagTitle(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowBagTitle((UDS_VM_W_InventoryBag *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsShowTabList @ 14b747340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBag::execIsShowTabList(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowTabList((UDS_VM_W_InventoryBag *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsSortOrderDescend @ 14b747400

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBag::execIsSortOrderDescend(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSortOrderDescend((UDS_VM_W_InventoryBag *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execMountInventoryMaxCount @ 14b747440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBag::execMountInventoryMaxCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = MountInventoryMaxCount((UDS_VM_W_InventoryBag *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execMountInventoryUsedCount @ 14b747480

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBag::execMountInventoryUsedCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = MountInventoryUsedCount((UDS_VM_W_InventoryBag *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execOnDirtyItemDataSet @ 14b7478a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBag::execOnDirtyItemDataSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
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
  OnDirtyItemDataSet((UDS_VM_W_InventoryBag *)param_1,local_res10);
  return;
}

// execPlayerInventoryMaxCount @ 14b7479e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBag::execPlayerInventoryMaxCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = PlayerInventoryMaxCount((UDS_VM_W_InventoryBag *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execPlayerInventoryUsedCount @ 14b747a20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBag::execPlayerInventoryUsedCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = PlayerInventoryUsedCount((UDS_VM_W_InventoryBag *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// BagTitle @ 14bf9b330

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall
UDS_VM_W_InventoryBag::BagTitle(UDS_VM_W_InventoryBag *this,FDS_Text *__return_storage_ptr__)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FDS_Text *pFVar4;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  this_00 = &this->_padding_;
  pUVar5 = (UObject *)0x0;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
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
    this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_InventoryBag::GetBagTitle(this_01,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7296641964043141259>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                     ,0x8b,"false");
  if (!bVar2) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_Text *)(*pcVar1)();
  return pFVar4;
}

// BindModel @ 14bf9cdd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_W_InventoryBag::BindModel(UDS_VM_W_InventoryBag *this)

{
  UObject *this_00;
  code *pcVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> this_01;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_02;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res10 [8];
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  UDS_VM_W_InventoryBag *local_a0;
  FName *local_98;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_90;
  FDestructionSentinel local_80;
  undefined1 local_68 [8];
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  UDS_VM_ModelBase::BindModel((UDS_VM_ModelBase *)this);
  this_01 = TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_68);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    return;
  }
  this_00 = pUVar3 + 1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this_00,(UObject *)this);
  pcVar4 = strstr("&UDS_VM_W_InventoryBag::OnDirtyItemDataSet","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bf9ce7d:
    pcVar6 = &DAT_00000002;
LAB_14bf9ce82:
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
    if (pcVar6 == (char *)0x0) goto LAB_14bf9ce7d;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bf9ce82;
  }
  ::FName::FName(&local_res20,pcVar6);
  if ((this == (UDS_VM_W_InventoryBag *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = local_res20;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((this == (UDS_VM_W_InventoryBag *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_a0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_InventoryBag *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_a0);
  local_a8 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_60);
  if ((local_a8 == (FName)0x0) ||
     (this_02 = FWeakObjectPtr::Get(&local_b0), this_02 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    pUVar5 = UObject::FindFunction(this_02,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14bf9cfc3;
  }
  local_98 = &local_res18;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_BindDynamic<UDS_VM_W_InventoryBag>'::__l2::<lambda_1>::operator()(&local_98);
LAB_14bf9cfc3:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_48);
  local_90.Object = local_b0;
  local_90.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_80);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this_00,&local_90);
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// InventogyBagCategoryList @ 14bfb13e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_EntryBindingEventField * __thiscall
UDS_VM_W_InventoryBag::InventogyBagCategoryList
          (UDS_VM_W_InventoryBag *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  longlong *this_00;
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FDS_EntryBindingEventField *pFVar5;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar6;
  UDS_UserObjectListItem *this_02;
  undefined8 *puVar7;
  UDS_M_InventoryBagCategory *this_03;
  TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr> this_04;
  int iVar8;
  atomic<unsigned_char> *paVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  UDS_UserObjectListItem *local_98 [2];
  TArray<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  pUVar6 = (UObject *)0x0;
  this_00 = &this->_padding_;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar3) {
      pUVar6 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141267>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0x93,"false");
    if (!bVar3) {
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pFVar5 = (FDS_EntryBindingEventField *)(*pcVar2)();
    return pFVar5;
  }
  this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&local_res10);
  UDS_M_InventoryBag::GetInventoryBagCategoryModelList(this_01,&local_88);
  iVar8 = local_88.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(local_88.AllocatorInstance.Data + (longlong)iVar8 * 8);
  FVar10.Data = local_88.AllocatorInstance.Data;
  do {
    if (local_88.ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar10.Data == pFVar1) goto LAB_14bfb166a;
    local_res18 = *(FWeakObjectPtr *)FVar10.Data;
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (!bVar3) {
      iVar8 = 0x97;
      paVar9 = &bGEnsureHasExecuted<7296641964043141271>;
      goto LAB_14bfb164a;
    }
    pUVar6 = GetTransientPackageAsObject();
    this_02 = NewObject<UDS_UserObjectListItem>(pUVar6);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_02 == (UDS_UserObjectListItem *)0x0) goto LAB_14bfb162e;
    }
    else {
      if (this_02 == (UDS_UserObjectListItem *)0x0) {
LAB_14bfb162e:
        iVar8 = 0x9a;
        paVar9 = &bGEnsureHasExecuted<7296641964043141274>;
LAB_14bfb164a:
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (paVar9,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                           ,iVar8,"false");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar5;
        }
LAB_14bfb166a:
        if (local_88.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_88.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)pUVar6 + 0x310))(pUVar6,local_58);
    local_78.Object = (FDS_ViewModelContext *)*puVar7;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1];
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_02,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    this_03 = (UDS_M_InventoryBagCategory *)FWeakObjectPtr::Get(&local_res18);
    this_04 = UDS_M_InventoryBagCategory::GetItemListModel(this_03);
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_04.WeakPtr);
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)pUVar6 + 0x310))(pUVar6,local_48);
    local_68.Object = (FDS_ViewModelContext *)*puVar7;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1];
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_02,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    local_98[0] = this_02;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    FDS_EntryBindingEventField::Add
              (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)local_98);
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// InventogyBagSlotList @ 14bfb16a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_EntryBindingEventField * __thiscall
UDS_VM_W_InventoryBag::InventogyBagSlotList
          (UDS_VM_W_InventoryBag *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  longlong *this_00;
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FWeakObjectPtr *pFVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  FDS_EntryBindingEventField *pFVar8;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar9;
  UDS_UserObjectListItem *this_02;
  undefined8 *puVar10;
  UDS_ModelBase *pUVar11;
  UDS_M_InventoryBagCategory *this_03;
  UDS_M_ItemList *this_04;
  UDS_ModelBase *this_05;
  UDS_ModelBase *pUVar12;
  FName *pFVar13;
  FName FVar14;
  FString *pFVar15;
  atomic<unsigned_char> *paVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  FWeakObjectPtr *pFVar20;
  ForAnyElementType FVar21;
  undefined1 local_res8 [8];
  FDS_EntryBindingEventField *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_168;
  FWeakObjectPtr local_158;
  FString local_150;
  uint local_140;
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  FWeakObjectPtr local_128;
  FWeakObjectPtr *local_120;
  UObject *local_118;
  UDS_UserObjectListItem *local_110;
  UDS_ModelBase *local_108;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *local_100;
  FWeakObjectPtr *local_f8;
  FWeakObjectPtr *local_f0;
  FString local_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  FName local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  pUVar9 = (UObject *)0x0;
  this_00 = &this->_padding_;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  local_res10 = __return_storage_ptr__;
  if (*this_00 != 0) {
    pUVar7 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
    if (bVar5) {
      pUVar9 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_158.ObjectIndex = 0;
  local_158.ObjectSerialNumber = 0;
  local_118 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_118);
  bVar5 = FWeakObjectPtr::IsValid(&local_158);
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141310>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0xbe,"false");
    if (!bVar5) {
      return __return_storage_ptr__;
    }
    pcVar3 = (code *)swi(3);
    pFVar8 = (FDS_EntryBindingEventField *)(*pcVar3)();
    return pFVar8;
  }
  this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&local_158);
  UDS_M_InventoryBag::GetInventoryBagCategoryModelList(this_01,&local_168);
  local_140 = local_168.ArrayNum;
  uVar18 = (ulonglong)(int)local_140;
  local_f0 = (FWeakObjectPtr *)(local_168.AllocatorInstance.Data + uVar18 * 8);
  FVar21.Data = local_168.AllocatorInstance.Data;
  do {
    pFVar20 = local_f0;
    local_120 = (FWeakObjectPtr *)FVar21.Data;
    if (local_168.ArrayNum != (int)uVar18) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar21.Data == pFVar20) goto LAB_14bfb1ccd;
    local_138 = *(FWeakObjectPtr *)FVar21.Data;
    bVar5 = FWeakObjectPtr::IsValid(&local_138);
    if (!bVar5) {
      iVar19 = 0xc2;
      paVar16 = &bGEnsureHasExecuted<7296641964043141314>;
      goto LAB_14bfb1cad;
    }
    pUVar9 = GetTransientPackageAsObject();
    this_02 = NewObject<UDS_UserObjectListItem>(pUVar9);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_02 == (UDS_UserObjectListItem *)0x0) goto LAB_14bfb1c91;
    }
    else {
      if (this_02 == (UDS_UserObjectListItem *)0x0) {
LAB_14bfb1c91:
        iVar19 = 199;
        paVar16 = &bGEnsureHasExecuted<7296641964043141319>;
        goto LAB_14bfb1cad;
      }
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    pUVar9 = FWeakObjectPtr::Get(&local_138);
    puVar10 = (undefined8 *)(**(code **)(*(longlong *)pUVar9 + 0x310))(pUVar9,local_88);
    local_d8.Object = (FDS_ViewModelContext *)*puVar10;
    local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar10[1];
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_02,&local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    pUVar9 = GetTransientPackageAsObject();
    pUVar11 = NewObject<UDS_ModelBase>(pUVar9);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar11 == (UDS_ModelBase *)0x0) goto LAB_14bfb1c82;
    }
    else {
      if (pUVar11 == (UDS_ModelBase *)0x0) {
LAB_14bfb1c82:
        iVar19 = 0xcc;
        paVar16 = &bGEnsureHasExecuted<7296641964043141324>;
        goto LAB_14bfb1cad;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    UDS_ModelBase::SetViewModelTemplateKey(pUVar11,W_InventoryBagSlot);
    FDS_DataContainer::SetData<bool,enum_EDS_InventoryBagSlotData>
              (&pUVar11->DataContainer,IsShowBagTitle,true);
    puVar10 = (undefined8 *)(**(code **)(pUVar11->_padding_ + 0x310))(pUVar11,local_78);
    local_c8.Object = (FDS_ViewModelContext *)*puVar10;
    local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar10[1];
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_02,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    local_110 = this_02;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    FDS_EntryBindingEventField::Add
              (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_110);
    this_03 = (UDS_M_InventoryBagCategory *)FWeakObjectPtr::Get(&local_138);
    UDS_M_InventoryBagCategory::GetItemListModel(this_03);
    bVar5 = FWeakObjectPtr::IsValid(&local_130);
    if (!bVar5) {
      iVar19 = 0xd8;
      paVar16 = &bGEnsureHasExecuted<7296641964043141336>;
LAB_14bfb1cad:
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (paVar16,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                         ,iVar19,"false");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FDS_EntryBindingEventField *)(*pcVar3)();
        return pFVar8;
      }
LAB_14bfb1ccd:
      if (local_168.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_168.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    this_05 = (UDS_ModelBase *)0x0;
    this_04 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&local_130);
    local_100 = UDS_M_ItemList::GetItemModelList(this_04);
    local_res20 = local_100->ArrayNum;
    uVar18 = (ulonglong)(int)local_res20;
    pFVar20 = (FWeakObjectPtr *)(local_100->AllocatorInstance).Data;
    local_f8 = pFVar20 + uVar18;
    pUVar11 = this_05;
    pUVar12 = this_05;
    while( true ) {
      pFVar4 = local_f8;
      iVar19 = (int)pUVar12;
      if (local_100->ArrayNum != (int)uVar18) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar20 == pFVar4) break;
      local_128 = *pFVar20;
      if (iVar19 == (iVar19 / 5) * 5) {
        pUVar9 = GetTransientPackageAsObject();
        pUVar11 = (UDS_ModelBase *)NewObject<UDS_UserObjectListItem>(pUVar9);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar11 == (UDS_ModelBase *)0x0) goto LAB_14bfb1c64;
        }
        else {
          if (pUVar11 == (UDS_ModelBase *)0x0) {
LAB_14bfb1c64:
            iVar19 = 0xe3;
            paVar16 = &bGEnsureHasExecuted<7296641964043141347>;
            goto LAB_14bfb1cad;
          }
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        pUVar9 = GetTransientPackageAsObject();
        this_05 = NewObject<UDS_ModelBase>(pUVar9);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_05 == (UDS_ModelBase *)0x0) goto LAB_14bfb1c55;
        }
        else {
          if (this_05 == (UDS_ModelBase *)0x0) {
LAB_14bfb1c55:
            iVar19 = 0xe6;
            paVar16 = &bGEnsureHasExecuted<7296641964043141350>;
            goto LAB_14bfb1cad;
          }
          UE::GC::MarkAsReachable((UObject *)this_05);
        }
        FDS_DataContainer::SetData<bool,enum_EDS_InventoryBagSlotData>
                  (&this_05->DataContainer,IsShowBagSlotList,true);
        UDS_ModelBase::SetViewModelTemplateKey(this_05,W_InventoryBagSlot);
        puVar10 = (undefined8 *)(**(code **)(this_05->_padding_ + 0x310))(this_05,local_68);
        local_b8.Object = (FDS_ViewModelContext *)*puVar10;
        local_b8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar10[1];
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext((UDS_UserObjectListItem *)pUVar11,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60);
        local_108 = pUVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        FDS_EntryBindingEventField::Add
                  (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_108);
        iVar19 = 0;
      }
      pUVar12 = (UDS_ModelBase *)FWeakObjectPtr::Get(&local_128);
      ::FString::PrintfImpl(&local_e8,L"DS_VM_Item_%d");
      iVar17 = local_e8.Data.ArrayNum + -1;
      if (local_e8.Data.ArrayNum == 0) {
        iVar17 = 0;
      }
      pFVar13 = ::FName::FName(&local_98,iVar17,(wchar_t *)local_e8.Data.AllocatorInstance.Data,
                               FNAME_Add);
      UDS_ModelBase::SetViewModelName(pUVar12,*pFVar13);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      pUVar9 = FWeakObjectPtr::Get(&local_128);
      puVar10 = (undefined8 *)(**(code **)(*(longlong *)pUVar9 + 0x310))(pUVar9,local_58);
      local_a8.Object = (FDS_ViewModelContext *)*puVar10;
      local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar10[1];
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext((UDS_UserObjectListItem *)pUVar11,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      pUVar12 = (UDS_ModelBase *)(ulonglong)(iVar19 + 1);
      ::FString::PrintfImpl(&local_150,L"%d");
      FVar14 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagSlotData>
                         (&this_05->DataContainer,(EDS_InventoryBagSlotData)local_90);
      uVar1 = *(undefined8 *)FVar14;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
      pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&this_05->DataContainer,uVar6 + (int)((ulonglong)uVar1 >> 0x20),
                           (FName *)FVar14);
      if (pFVar15 != &local_150) {
        pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar15->Data).AllocatorInstance.Data = local_150.Data.AllocatorInstance.Data;
        local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar15->Data).ArrayNum = local_150.Data.ArrayNum;
        (pFVar15->Data).ArrayMax = local_150.Data.ArrayMax;
        local_150.Data.ArrayNum = 0;
        local_150.Data.ArrayMax = 0;
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      pFVar20 = pFVar20 + 1;
      uVar18 = (ulonglong)local_res20;
      __return_storage_ptr__ = local_res10;
    }
    FVar21.Data = (FScriptContainerElement *)(local_120 + 1);
    uVar18 = (ulonglong)local_140;
  } while( true );
}

// InventogyBagTabList @ 14bfb1d20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_EntryBindingEventField * __thiscall
UDS_VM_W_InventoryBag::InventogyBagTabList
          (UDS_VM_W_InventoryBag *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  longlong *this_00;
  FName FVar1;
  code *pcVar2;
  FWeakObjectPtr *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  FDS_EntryBindingEventField *pFVar6;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar7;
  UDS_UserObjectListItem *this_02;
  FName *pFVar8;
  undefined8 *puVar9;
  int iVar10;
  atomic<unsigned_char> *paVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  UDS_UserObjectListItem *local_98;
  FWeakObjectPtr *local_90;
  FName local_88;
  FName local_80;
  TArray<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  pUVar7 = (UObject *)0x0;
  this_00 = &this->_padding_;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  if (*this_00 != 0) {
    pUVar5 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if (bVar4) {
      pUVar7 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141289>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0xa9,"false");
    if (!bVar4) {
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pFVar6 = (FDS_EntryBindingEventField *)(*pcVar2)();
    return pFVar6;
  }
  this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&local_res10);
  UDS_M_InventoryBag::GetInventoryBagTabModelList(this_01,&local_78);
  iVar10 = local_78.ArrayNum;
  local_90 = (FWeakObjectPtr *)(local_78.AllocatorInstance.Data + (longlong)iVar10 * 8);
  FVar12.Data = local_78.AllocatorInstance.Data;
  do {
    pFVar3 = local_90;
    if (local_78.ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar12.Data == pFVar3) goto LAB_14bfb1f94;
    local_res18 = *(FWeakObjectPtr *)FVar12.Data;
    bVar4 = FWeakObjectPtr::IsValid(&local_res18);
    if (!bVar4) {
      iVar10 = 0xad;
      paVar11 = &bGEnsureHasExecuted<7296641964043141293>;
      goto LAB_14bfb1f74;
    }
    pUVar7 = GetTransientPackageAsObject();
    this_02 = NewObject<UDS_UserObjectListItem>(pUVar7);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_02 == (UDS_UserObjectListItem *)0x0) goto LAB_14bfb1f58;
    }
    else {
      if (this_02 == (UDS_UserObjectListItem *)0x0) {
LAB_14bfb1f58:
        iVar10 = 0xb0;
        paVar11 = &bGEnsureHasExecuted<7296641964043141296>;
LAB_14bfb1f74:
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (paVar11,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                           ,iVar10,"false");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar6;
        }
LAB_14bfb1f94:
        if (local_78.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_78.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    pUVar7 = FWeakObjectPtr::Get(&local_res18);
    pcVar2 = *(code **)(*(longlong *)pUVar7 + 0x308);
    pFVar8 = ::FName::FName(&local_88,L"");
    FVar1 = *pFVar8;
    pFVar8 = ::FName::FName(&local_80,L"");
    puVar9 = (undefined8 *)(*pcVar2)(pUVar7,local_58,0x18a,*pFVar8,FVar1);
    local_68.Object = (FDS_ViewModelContext *)*puVar9;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar9[1];
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_02,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    local_98 = this_02;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    FDS_EntryBindingEventField::Add
              (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_98);
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// IsShowBagTitle @ 14bfb3ae0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_W_InventoryBag::IsShowBagTitle(UDS_VM_W_InventoryBag *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bfb3b0e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bfb3b0e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141253>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0x85,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_InventoryBag::IsShowBagTitle(this_01);
  return bVar2;
}

// IsShowTabList @ 14bfb3bc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_W_InventoryBag::IsShowTabList(UDS_VM_W_InventoryBag *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bfb3bee;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bfb3bee:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141247>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0x7f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_InventoryBag::IsShowTabList(this_01);
  return bVar2;
}

// IsSortOrderDescend @ 14bfb3e60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_W_InventoryBag::IsSortOrderDescend(UDS_VM_W_InventoryBag *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagData)local_res8);
    uVar2 = *(undefined8 *)FVar8;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum != 0) {
      iVar7 = _wtoi((wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
      return iVar7 == 1;
    }
    iVar7 = _wtoi(L"");
    return iVar7 == 1;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7296641964043141241>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                     ,0x79,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// MountInventoryMaxCount @ 14bfb3f70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_InventoryBag::MountInventoryMaxCount(UDS_VM_W_InventoryBag *this)

{
  int iVar1;
  
  iVar1 = DS_ItemDataUtil::GetInventorySlotCount(Mount);
  return iVar1;
}

// MountInventoryUsedCount @ 14bfb3f80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_InventoryBag::MountInventoryUsedCount(UDS_VM_W_InventoryBag *this)

{
  int iVar1;
  
  iVar1 = DS_ItemDataUtil::GetUsedInventorySlotCount(Mount);
  return iVar1;
}

// OnDirtyItemDataSet @ 14bfbc210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_InventoryBag::OnDirtyItemDataSet(UDS_VM_W_InventoryBag *this,UDS_DataSetBase *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined8 local_28 [2];
  
  this_00 = &this->_padding_;
  pUVar4 = (UObject *)0x0;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(local_res8);
    UDS_M_InventoryBag::GenerateInventoryBagCategory(this_01);
    pUVar4 = FWeakObjectPtr::Get(local_res8);
    local_28[0] = 0;
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x2e0);
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_28);
    (*pcVar1)(pUVar4,local_res18,0);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141433>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0x139,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnEventOnDrop @ 14bfbce00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_InventoryBag::OnEventOnDrop(UDS_VM_W_InventoryBag *this,FDS_DragDropEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfbce35;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfbce35:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_InventoryBag::OnEventOnDrop(this_01,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141376>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0x100,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bfcea10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_InventoryBag::OnSetViewModel
          (UDS_VM_W_InventoryBag *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_VM_Dropdown *pUVar3;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
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
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_18);
  if (this->_padding_ == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141149>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0x1d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((this->VM_SortDropdown).field0_0x0.DebugPtr == (UDS_VM_Dropdown *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Dropdown>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_VM_Dropdown *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_SortDropdown).field0_0x0.DebugPtr = pUVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSortOrderChanged @ 14bfcf6e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_InventoryBag::OnSortOrderChanged(UDS_VM_W_InventoryBag *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  FName FVar7;
  FString *pFVar8;
  UEnum *this_01;
  FName *pFVar9;
  long64 lVar10;
  UDS_M_InventoryBag *this_02;
  UObject *pUVar11;
  int iVar12;
  wchar_t *pwVar13;
  EDS_SortOrder EVar14;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined8 local_48;
  undefined1 local_40 [8];
  FName local_38;
  FString local_30;
  
  this_00 = &this->_padding_;
  pUVar11 = (UObject *)0x0;
  if (*this_00 != 0) {
    pUVar6 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
    if (bVar4) {
      pUVar11 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    lVar1 = *this_00;
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagData)local_40);
    uVar2 = *(undefined8 *)FVar7;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_30,pwVar13);
    this_01 = StaticEnum<enum_EDS_SortOrder>();
    if (this_01 == (UEnum *)0x0) {
      EVar14 = local_res8.ObjectIndex;
    }
    else {
      iVar12 = local_30.Data.ArrayNum + -1;
      if (local_30.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      pFVar9 = ::FName::FName(&local_38,iVar12,(wchar_t *)local_30.Data.AllocatorInstance.Data,
                              FNAME_Add);
      lVar10 = UEnum::GetValueByName(this_01,*pFVar9,None);
      EVar14 = (EDS_SortOrder)lVar10;
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (EVar14 == Ascend) {
      EVar14 = Descend;
    }
    else if (EVar14 == Descend) {
      EVar14 = Ascend;
    }
    this_02 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_InventoryBag::SetSortOrderType(this_02,EVar14);
    pUVar11 = FWeakObjectPtr::Get(&local_res8);
    local_48 = 0;
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    pcVar3 = *(code **)(*(longlong *)pUVar11 + 0x2e0);
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_48);
    (*pcVar3)(pUVar11,local_res18,0);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141409>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0x121,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// OnSortTypeChanged @ 14bfcf9e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_InventoryBag::OnSortTypeChanged(UDS_VM_W_InventoryBag *this,int param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfcfa14;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfcfa14:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_InventoryBag::OnSortTypeChanged(this_01,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141402>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0x11a,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// PlayerInventoryMaxCount @ 14bfd3240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_InventoryBag::PlayerInventoryMaxCount(UDS_VM_W_InventoryBag *this)

{
  int iVar1;
  
  iVar1 = DS_ItemDataUtil::GetInventorySlotCount(PlayerNormal);
  return iVar1;
}

// PlayerInventoryUsedCount @ 14bfd3250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_InventoryBag::PlayerInventoryUsedCount(UDS_VM_W_InventoryBag *this)

{
  int iVar1;
  
  iVar1 = DS_ItemDataUtil::GetUsedInventorySlotCount(PlayerNormal);
  return iVar1;
}

// UnbindModel @ 14bfe0130

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_InventoryBag::UnbindModel(UDS_VM_W_InventoryBag *this)

{
  code *pcVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  char *pcVar4;
  char *pcVar5;
  FName local_res10;
  undefined1 local_res18 [8];
  
  UDS_VM_ModelBase::UnbindModel((UDS_VM_ModelBase *)this);
  this_00 = TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    return;
  }
  pcVar4 = strstr("&UDS_VM_W_InventoryBag::OnDirtyItemDataSet","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bfe01cb:
    pcVar5 = &DAT_00000002;
  }
  else {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_14bfe01cb;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 != '0') goto LAB_14bfe01fe;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14bfe01fe:
  ::FName::FName(&local_res10,pcVar5);
  if ((this == (UDS_VM_W_InventoryBag *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x500,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this,
             local_res10);
  return;
}

// UpdateView @ 14bfe6fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_InventoryBag::UpdateView
          (UDS_VM_W_InventoryBag *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  undefined8 uVar4;
  UDS_VM_Dropdown *this_00;
  undefined8 uVar5;
  code *pcVar6;
  FDS_ViewModelContext_Dropdown *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UClass *pUVar12;
  UDS_LogManager *pUVar13;
  FName FVar14;
  FString *pFVar15;
  UEnum *pUVar16;
  FName *pFVar17;
  ulonglong uVar18;
  FDS_InventoryBagTableRow *pFVar19;
  UObject *pUVar20;
  long64 lVar21;
  undefined8 *puVar22;
  ulong64 uVar23;
  wchar_t *pwVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement FVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_398 [32];
  FScriptContainerElement local_368 [8];
  undefined1 local_360 [8];
  FDelegateAllocation local_358;
  FWeakObjectPtr local_348 [2];
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_338;
  uint local_328;
  FString local_318;
  FDS_Text local_308;
  UObject *local_2b8;
  undefined1 local_2b0 [32];
  int local_290;
  FName local_288;
  int local_280;
  FName local_278;
  int local_270;
  FName local_268;
  int local_260;
  FName local_258;
  uint local_250;
  FName local_248;
  int local_240;
  FName local_238;
  int local_230;
  FName local_228;
  int local_220;
  FName local_218;
  int local_210;
  FName local_208;
  int local_200;
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  int local_1e0;
  FName local_1d8;
  int local_1d0;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  FDelegateAllocation *local_188;
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  FName local_170;
  undefined1 local_168 [8];
  FName local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_2b0._8_8_ = this;
  UDS_VM_ModelBase::UpdateView((UDS_VM_ModelBase *)this,param_1);
  pUVar20 = (UObject *)0x0;
  if (this->_padding_ != 0) {
    pUVar12 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar12);
    if (bVar8) {
      pUVar20 = (UObject *)this->_padding_;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar20);
  }
  local_348[0].ObjectIndex = 0;
  local_348[0].ObjectSerialNumber = 0;
  local_2b8 = pUVar20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar20);
  }
  FWeakObjectPtr::operator=(local_348,(FObjectPtr)&local_2b8);
  bVar8 = FWeakObjectPtr::IsValid(local_348);
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7296641964043141182>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                       ,0x3e,"false");
    if (!bVar8) {
      return;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  MakeContext<FDS_ViewModelContext_Dropdown>(&local_338);
  pFVar7 = local_338.Object;
  if (local_338.Object == (FDS_ViewModelContext_Dropdown *)0x0) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 != (UDS_LogManager *)0x0) {
      pUVar13 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_InventoryBag::UpdateView",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar13,1,Warning,local_158.Ptr,0x44,L"dropdownContext is Invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    if ((local_338.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)&pFVar7->_padding_ = 0x117;
    pFVar7->bOpenUpward = true;
    lVar3 = this->_padding_;
    FVar14 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                       ((FDS_DataContainer *)(lVar3 + 0x40),(EDS_InventoryBagData)local_180);
    uVar4 = *(undefined8 *)FVar14;
    uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
    pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)(lVar3 + 0x40),uVar9 + (int)((ulonglong)uVar4 >> 0x20),(FName *)FVar14);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    ::FString::FString((FString *)(local_2b0 + 0x18),pwVar24);
    pUVar16 = StaticEnum<enum_EDS_BagType>();
    if (pUVar16 == (UEnum *)0x0) {
      uVar18 = (ulonglong)(byte)local_368[0];
    }
    else {
      iVar10 = local_290 + -1;
      if (local_290 == 0) {
        iVar10 = 0;
      }
      pFVar17 = ::FName::FName(&local_160,iVar10,(wchar_t *)local_2b0._24_8_,FNAME_Add);
      uVar18 = UEnum::GetValueByName(pUVar16,*pFVar17,None);
    }
    if ((wchar_t *)local_2b0._24_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2b0._24_8_);
    }
    pFVar19 = FDS_InventoryBagTableRow::Get(uVar18 & 0xff,true);
    if (pFVar19 == (FDS_InventoryBagTableRow *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7296641964043141196>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBag.cpp"
                         ,0x4c,"false");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      pFVar27 = (pFVar19->ID_Sorting).AllocatorInstance.Data;
      local_328 = (pFVar19->ID_Sorting).ArrayNum;
      uVar18 = (ulonglong)(int)local_328;
      pFVar2 = pFVar27 + uVar18;
      while( true ) {
        if ((pFVar19->ID_Sorting).ArrayNum != (int)uVar18) {
          local_368[0] = (FScriptContainerElement)0x0;
          `TCheckedPointerIterator<enum_EDS_SortingType_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_368);
        }
        if (pFVar27 == pFVar2) break;
        if ((pFVar7 == (FDS_ViewModelContext_Dropdown *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar16 = StaticEnum<enum_EDS_SortingType>();
        DS_Util::GetStringEnumTableKey((UEnum *)local_2b0,(int)pUVar16);
        local_308.StringTableType = None;
        local_308.StringTableID = 0;
        local_308.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_308.StringEnumTableNameID.Number = 0;
        local_308.TimeExpressionType = None;
        local_308.DateTime.Ticks = 0;
        local_308.TimeSpan.Ticks = 0;
        local_308.IsExpression = false;
        local_308.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_308.UniqueString.Data.ArrayNum = 0;
        local_308.UniqueString.Data.ArrayMax = 0;
        local_308.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_308.FormatArgs.ArrayNum = 0;
        local_308.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringEnumTable(&local_308,(FName *)local_2b0);
        iVar10 = (pFVar7->DropdownList).ArrayNum;
        piVar1 = &(pFVar7->DropdownList).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&(pFVar7->DropdownList).AllocatorInstance,piVar1);
        }
        (pFVar7->DropdownList).ArrayNum = iVar10 + 1;
        pFVar25 = (pFVar7->DropdownList).AllocatorInstance.Data + (longlong)iVar10 * 0x50;
        *pFVar25 = (FScriptContainerElement)local_308.StringTableType;
        *(long64 *)(pFVar25 + 8) = local_308.StringTableID;
        *(FName *)(pFVar25 + 0x10) = local_308.StringEnumTableNameID;
        *(long64 *)(pFVar25 + 0x18) = local_308.DateTime.Ticks;
        *(long64 *)(pFVar25 + 0x20) = local_308.TimeSpan.Ticks;
        *(EDS_TimeExpression *)(pFVar25 + 0x28) = local_308.TimeExpressionType;
        *(undefined8 *)(pFVar25 + 0x30) = 0;
        pFVar25[0x2c] = (FScriptContainerElement)local_308.IsExpression;
        *(FScriptContainerElement **)(pFVar25 + 0x30) =
             local_308.UniqueString.Data.AllocatorInstance.Data;
        local_308.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar25 + 0x38) = local_308.UniqueString.Data.ArrayNum;
        *(int *)(pFVar25 + 0x3c) = local_308.UniqueString.Data.ArrayMax;
        local_308.UniqueString.Data.ArrayNum = 0;
        local_308.UniqueString.Data.ArrayMax = 0;
        *(undefined8 *)(pFVar25 + 0x40) = 0;
        *(FScriptContainerElement **)(pFVar25 + 0x40) = local_308.FormatArgs.AllocatorInstance.Data;
        local_308.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar25 + 0x48) = local_308.FormatArgs.ArrayNum;
        *(int *)(pFVar25 + 0x4c) = local_308.FormatArgs.ArrayMax;
        local_308.FormatArgs.ArrayNum = 0;
        local_308.FormatArgs.ArrayMax = 0;
        DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
        if (local_308.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.FormatArgs.AllocatorInstance.Data);
        }
        if (local_308.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.UniqueString.Data.AllocatorInstance.Data);
        }
        uVar18 = (ulonglong)local_328;
        pFVar27 = pFVar27 + 1;
      }
      pUVar20 = FWeakObjectPtr::Get(local_348);
      FVar14 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                         ((FDS_DataContainer *)&pUVar20[1].field_0x18,
                          (EDS_InventoryBagData)local_168);
      uVar4 = *(undefined8 *)FVar14;
      uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
      pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&pUVar20[1].field_0x18,uVar9 + (int)((ulonglong)uVar4 >> 0x20),
                           (FName *)FVar14);
      if ((pFVar15->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_318,pwVar24);
      pUVar16 = StaticEnum<enum_EDS_SortingType>();
      FVar26 = local_368[0];
      if (pUVar16 != (UEnum *)0x0) {
        iVar10 = local_318.Data.ArrayNum + -1;
        if (local_318.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        pFVar17 = ::FName::FName(&local_170,iVar10,(wchar_t *)local_318.Data.AllocatorInstance.Data,
                                 FNAME_Add);
        lVar21 = UEnum::GetValueByName(pUVar16,*pFVar17,None);
        FVar26 = SUB81(lVar21,0);
      }
      uVar4 = local_2b0._8_8_;
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      pFVar2 = (pFVar19->ID_Sorting).AllocatorInstance.Data;
      for (pFVar27 = pFVar2; pFVar27 != pFVar2 + (pFVar19->ID_Sorting).ArrayNum;
          pFVar27 = pFVar27 + 1) {
        if (*pFVar27 == FVar26) {
          iVar10 = (int)pFVar27 - (int)pFVar2;
          goto LAB_14bfe7526;
        }
      }
      iVar10 = -1;
LAB_14bfe7526:
      if ((pFVar7 == (FDS_ViewModelContext_Dropdown *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_318.Data.ArrayNum = 0;
      local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnSortTypeChanged;
      local_318.Data.ArrayMax = local_1c8.SharedReferenceCount.ReferenceController._4_4_;
      local_360 = (undefined1  [8])0x0;
      if (iVar10 == -1) {
        iVar10 = 0;
      }
      local_358.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      pFVar7->DropdownIndex = iVar10;
      local_358.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_360,
                 (FWriteAccessScope *)&local_1a0);
      local_188 = &local_358;
      puVar22 = UE::Core::Private::DelegateAllocate(0x30,&local_358);
      if (puVar22 != (undefined8 *)0x0) {
        *puVar22 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar23 = FDelegateHandle::GenerateNewID();
        puVar22[2] = uVar23;
        *puVar22 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_InventoryBag____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)uVar4);
        }
        puVar22[3] = 0;
        local_2b0._16_8_ = uVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)uVar4);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)(puVar22 + 3),(FObjectPtr)((longlong)local_2b0 + 0x10));
        puVar22[4] = local_318.Data.AllocatorInstance.Data;
        puVar22[5] = CONCAT44(local_318.Data.ArrayMax,local_318.Data.ArrayNum);
      }
      if (local_1a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar7->OnClickList,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_360);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_360,
                 (FWriteAccessScope *)&local_1b8);
      if ((local_358.DelegateSize != 0) &&
         (local_358.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_358.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_358,0,0,0x10);
        local_358.DelegateSize = 0;
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      if (local_358.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_358.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_360);
      local_1c8.Object = (FDS_ViewModelContext *)local_338.Object;
      local_1c8.SharedReferenceCount.ReferenceController =
           local_338.SharedReferenceCount.ReferenceController;
      pFVar7->bCallOnClickInSetViewMoel = false;
      this_00 = (((TObjectPtr<UDS_VM_Dropdown> *)(uVar4 + 0x160))->field0_0x0).DebugPtr;
      if (local_338.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_1c8);
      local_280 = FFieldNotificationClassDescriptor::IsSortOrderDescend.BitNumber;
      local_288 = FFieldNotificationClassDescriptor::IsSortOrderDescend.FieldName;
      (**(code **)(*(longlong *)(uVar4 + 0x28) + 0x38))((longlong *)(uVar4 + 0x28),&local_288);
      local_270 = FFieldNotificationClassDescriptor::VM_SortDropdown.BitNumber;
      local_278 = FFieldNotificationClassDescriptor::VM_SortDropdown.FieldName;
      (**(code **)(*(longlong *)(uVar4 + 0x28) + 0x38))((longlong *)(uVar4 + 0x28),&local_278);
      local_260 = FFieldNotificationClassDescriptor::InventogyBagTabList.BitNumber;
      local_268 = FFieldNotificationClassDescriptor::InventogyBagTabList.FieldName;
      (**(code **)(*(longlong *)(uVar4 + 0x28) + 0x38))((longlong *)(uVar4 + 0x28),&local_268);
      local_250 = FFieldNotificationClassDescriptor::InventogyBagSlotList.BitNumber;
      local_258 = FFieldNotificationClassDescriptor::InventogyBagSlotList.FieldName;
      (**(code **)(*(longlong *)(uVar4 + 0x28) + 0x38))((longlong *)(uVar4 + 0x28),&local_258);
      iVar10 = FFieldNotificationClassDescriptor::IsShowPlayer.BitNumber;
      FVar14 = FFieldNotificationClassDescriptor::IsShowPlayer.FieldName;
      if (*(bool *)(uVar4 + 0x15c) != true) {
        *(bool *)(uVar4 + 0x15c) = true;
        local_240 = iVar10;
        local_248 = FVar14;
        (**(code **)(*(longlong *)(uVar4 + 0x28) + 0x38))((longlong *)(uVar4 + 0x28),&local_248);
      }
      if (*(bool *)(uVar4 + 0x15c) != false) {
        local_230 = FFieldNotificationClassDescriptor::PlayerInventoryUsedCount.BitNumber;
        local_238 = FFieldNotificationClassDescriptor::PlayerInventoryUsedCount.FieldName;
        (**(code **)(*(longlong *)(uVar4 + 0x28) + 0x38))((longlong *)(uVar4 + 0x28),&local_238);
        local_220 = FFieldNotificationClassDescriptor::PlayerInventoryMaxCount.BitNumber;
        local_228 = FFieldNotificationClassDescriptor::PlayerInventoryMaxCount.FieldName;
        (**(code **)(*(longlong *)(uVar4 + 0x28) + 0x38))((longlong *)(uVar4 + 0x28),&local_228);
      }
      iVar10 = FFieldNotificationClassDescriptor::IsShowMount.BitNumber;
      FVar14 = FFieldNotificationClassDescriptor::IsShowMount.FieldName;
      if (*(bool *)(uVar4 + 0x15d) != true) {
        *(bool *)(uVar4 + 0x15d) = true;
        local_210 = iVar10;
        local_218 = FVar14;
        (**(code **)(*(longlong *)(uVar4 + 0x28) + 0x38))((longlong *)(uVar4 + 0x28),&local_218);
      }
      if (*(bool *)(uVar4 + 0x15d) != false) {
        local_200 = FFieldNotificationClassDescriptor::MountInventoryUsedCount.BitNumber;
        local_208 = FFieldNotificationClassDescriptor::MountInventoryUsedCount.FieldName;
        (**(code **)(*(longlong *)(uVar4 + 0x28) + 0x38))((longlong *)(uVar4 + 0x28),&local_208);
        local_1f0 = FFieldNotificationClassDescriptor::MountInventoryMaxCount.BitNumber;
        local_1f8 = FFieldNotificationClassDescriptor::MountInventoryMaxCount.FieldName;
        (**(code **)(*(longlong *)(uVar4 + 0x28) + 0x38))((longlong *)(uVar4 + 0x28),&local_1f8);
      }
      lVar3 = *(longlong *)(uVar4 + 0xa0);
      FVar14 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                         ((FDS_DataContainer *)(lVar3 + 0x40),(EDS_InventoryBagData)local_178);
      uVar5 = *(undefined8 *)FVar14;
      uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
      pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)(lVar3 + 0x40),uVar9 + (int)((ulonglong)uVar5 >> 0x20),(FName *)FVar14
                          );
      if ((pFVar15->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
      iVar11 = _wtoi(pwVar24);
      iVar10 = FFieldNotificationClassDescriptor::PanelSwitcherIndex.BitNumber;
      FVar14 = FFieldNotificationClassDescriptor::PanelSwitcherIndex.FieldName;
      if (iVar11 < 1) {
        if (*(int *)(uVar4 + 0x158) == 1) goto LAB_14bfe7988;
        *(int *)(uVar4 + 0x158) = 1;
        pFVar17 = &local_1d8;
        local_1d8 = FVar14;
        local_1d0 = iVar10;
      }
      else {
        if (*(int *)(uVar4 + 0x158) == 0) goto LAB_14bfe7988;
        local_1e8 = FFieldNotificationClassDescriptor::PanelSwitcherIndex.FieldName;
        *(int *)(uVar4 + 0x158) = 0;
        pFVar17 = &local_1e8;
        local_1e0 = iVar10;
      }
      (**(code **)(*(longlong *)(uVar4 + 0x28) + 0x38))((longlong *)(uVar4 + 0x28),pFVar17);
    }
  }
LAB_14bfe7988:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_338.SharedReferenceCount.ReferenceController);
  return;
}

