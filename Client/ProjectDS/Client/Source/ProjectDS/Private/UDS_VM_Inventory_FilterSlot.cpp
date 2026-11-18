// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetOnChangedCheckState_WrapperImpl @ 14b680ab0

void __cdecl
UDS_VM_Inventory_FilterSlot::SetOnChangedCheckState_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  UDS_M_FilterSlot *this;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  
  this = *(UDS_M_FilterSlot **)((longlong)param_1 + 0xa0);
  if (this != (UDS_M_FilterSlot *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_FilterSlot_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      UDS_M_FilterSlot::UpdateAllSelect(this);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8292835121266950074>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Inventory_FilterSlot.cpp"
                     ,0x46,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// StaticClass @ 14b680b00

UClass * __cdecl UDS_VM_Inventory_FilterSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Inventory_FilterSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Inventory_FilterSlot",
               &Z_Registration_Info_UClass_UDS_VM_Inventory_FilterSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Inventory_FilterSlot,200,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Inventory_FilterSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Inventory_FilterSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Inventory_FilterSlot.InnerSingleton;
}

// UDS_VM_Inventory_FilterSlot @ 14b6835a0

UDS_VM_Inventory_FilterSlot * __thiscall
UDS_VM_Inventory_FilterSlot::UDS_VM_Inventory_FilterSlot
          (UDS_VM_Inventory_FilterSlot *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Inventory_FilterSlot__6B_;
  (this->OnChangedCheckState).bIsActivate = false;
  return this;
}

// UDS_VM_Inventory_FilterSlot @ 14b6835f0

UDS_VM_Inventory_FilterSlot * __thiscall
UDS_VM_Inventory_FilterSlot::UDS_VM_Inventory_FilterSlot
          (UDS_VM_Inventory_FilterSlot *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Inventory_FilterSlot__6B_;
  (this->OnChangedCheckState).bIsActivate = false;
  return this;
}

// ~UDS_VM_Inventory_FilterSlot @ 14b6841c0

void __thiscall
UDS_VM_Inventory_FilterSlot::~UDS_VM_Inventory_FilterSlot(UDS_VM_Inventory_FilterSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Inventory_FilterSlot__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b684fb0

IClassDescriptor * __thiscall
UDS_VM_Inventory_FilterSlot::GetFieldNotificationDescriptor(UDS_VM_Inventory_FilterSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Inventory_FilterSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b685340

UClass * __cdecl UDS_VM_Inventory_FilterSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Inventory_FilterSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Inventory_FilterSlot",
               &Z_Registration_Info_UClass_UDS_VM_Inventory_FilterSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Inventory_FilterSlot,200,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Inventory_FilterSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Inventory_FilterSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Inventory_FilterSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Inventory_FilterSlot @ 14b685610

void __cdecl UDS_VM_Inventory_FilterSlot::StaticRegisterNativesUDS_VM_Inventory_FilterSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Inventory_FilterSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEntryFilterSlotEntry @ 14b685f00

void __cdecl
UDS_VM_Inventory_FilterSlot::execEntryFilterSlotEntry
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = EntryFilterSlotEntry((UDS_VM_Inventory_FilterSlot *)param_1,&local_18);
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

// execIsAllSelected @ 14b6862d0

void __cdecl
UDS_VM_Inventory_FilterSlot::execIsAllSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsAllSelected((UDS_VM_Inventory_FilterSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execTextFilterName @ 14b687050

void __cdecl
UDS_VM_Inventory_FilterSlot::execTextFilterName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TextFilterName((UDS_VM_Inventory_FilterSlot *)param_1,&local_58);
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

// EntryFilterSlotEntry @ 14be1b080

FDS_EntryBindingEventField * __thiscall
UDS_VM_Inventory_FilterSlot::EntryFilterSlotEntry
          (UDS_VM_Inventory_FilterSlot *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  int iVar1;
  UDS_M_FilterSlot *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FDS_EntryBindingEventField *pFVar5;
  
  this_00 = (UDS_M_FilterSlot *)this->_padding_;
  if (this_00 != (UDS_M_FilterSlot *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_FilterSlot_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      UDS_M_FilterSlot::GetEntryEventFieldFilterSlotEntry(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8292835121266950090>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Inventory_FilterSlot.cpp"
                     ,0x36,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FDS_EntryBindingEventField *)(*pcVar2)();
    return pFVar5;
  }
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsAllSelected @ 14be260b0

bool __thiscall UDS_VM_Inventory_FilterSlot::IsAllSelected(UDS_VM_Inventory_FilterSlot *this)

{
  int iVar1;
  UDS_M_FilterSlot *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  this_00 = (UDS_M_FilterSlot *)this->_padding_;
  if (this_00 != (UDS_M_FilterSlot *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_FilterSlot_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      bVar3 = UDS_M_FilterSlot::IsAllSelected(this_00);
      return bVar3;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8292835121266950082>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Inventory_FilterSlot.cpp"
                     ,0x3e,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// OnSetViewModel @ 14be36f10

void __thiscall
UDS_VM_Inventory_FilterSlot::OnSetViewModel
          (UDS_VM_Inventory_FilterSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::TextFilterName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextFilterName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EntryFilterSlotEntry.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryFilterSlotEntry.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsAllSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAllSelected.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnWidgetEventFieldChangedCheckState @ 14be45260

void __thiscall
UDS_VM_Inventory_FilterSlot::OnWidgetEventFieldChangedCheckState
          (UDS_VM_Inventory_FilterSlot *this,FDS_WidgetEventField *param_1)

{
  int iVar1;
  UDS_M_FilterSlot *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  
  this_00 = (UDS_M_FilterSlot *)this->_padding_;
  if (this_00 != (UDS_M_FilterSlot *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_FilterSlot_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      UDS_M_FilterSlot::UpdateAllSelect(this_00);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8292835121266950074>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Inventory_FilterSlot.cpp"
                     ,0x46,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// TextFilterName @ 14be548b0

FDS_Text * __thiscall
UDS_VM_Inventory_FilterSlot::TextFilterName
          (UDS_VM_Inventory_FilterSlot *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UEnum *pUVar6;
  FDS_Text *pFVar7;
  FName local_res8;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_UDS_M_FilterSlot_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar6 = StaticEnum<enum_EDS_FilterState>();
      DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar6);
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
      FDS_Text::SetTextFromStringEnumTable(__return_storage_ptr__,&local_res8);
      return __return_storage_ptr__;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8292835121266950098>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Inventory_FilterSlot.cpp"
                     ,0x2e,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FDS_Text *)(*pcVar3)();
    return pFVar7;
  }
  __return_storage_ptr__->StringTableID = 0;
  __return_storage_ptr__->StringTableType = None;
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

// UpdateView @ 14be5a2e0

void __thiscall
UDS_VM_Inventory_FilterSlot::UpdateView
          (UDS_VM_Inventory_FilterSlot *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  local_res10 = param_1.WeakPtr;
  bVar3 = TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar3) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_EventFilterSlot_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14be5a33d;
  }
  pUVar4 = (UObject *)0x0;
LAB_14be5a33d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_M_EventFilterSlot,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_EventFilterSlot,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8292835121266950117>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Inventory_FilterSlot.cpp"
                       ,0x1b,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&local_res18);
    if (*(int *)&pUVar4[5].field_0x8 == 1) {
      local_30 = FFieldNotificationClassDescriptor::TextFilterName.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::TextFilterName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      local_20 = FFieldNotificationClassDescriptor::EntryFilterSlotEntry.BitNumber;
      local_28 = FFieldNotificationClassDescriptor::EntryFilterSlotEntry.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_10 = FFieldNotificationClassDescriptor::IsAllSelected.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsAllSelected.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

