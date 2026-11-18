// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetCheckBoxCheckedEvent_WrapperImpl @ 14b72eab0

void __cdecl
UDS_VM_W_GameOptionComboBox::SetCheckBoxCheckedEvent_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = UDS_VM_GameOptionData::GetGameOptionValue(param_1);
  UDS_VM_GameOptionData::SetGameOptionValue(param_1,(uint)(iVar1 < 1));
  return;
}

// StaticClass @ 14b72eac0

UClass * __cdecl UDS_VM_W_GameOptionComboBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionComboBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionComboBox",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionComboBox.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionComboBox,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_GameOptionComboBox>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionComboBox>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionComboBox.InnerSingleton;
}

// UDS_VM_W_GameOptionComboBox @ 14b7355b0

UDS_VM_W_GameOptionComboBox * __thiscall
UDS_VM_W_GameOptionComboBox::UDS_VM_W_GameOptionComboBox
          (UDS_VM_W_GameOptionComboBox *this,FVTableHelper *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionComboBox__6B_;
  *(undefined8 *)&(this->CheckBoxCheckedEvent).Delegate = 0;
  *(undefined8 *)&(this->CheckBoxCheckedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CheckBoxCheckedEvent).Delegate.field_0x10 = 0;
  return this;
}

// UDS_VM_W_GameOptionComboBox @ 14b735610

UDS_VM_W_GameOptionComboBox * __thiscall
UDS_VM_W_GameOptionComboBox::UDS_VM_W_GameOptionComboBox
          (UDS_VM_W_GameOptionComboBox *this,FObjectInitializer *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionComboBox__6B_;
  *(undefined8 *)&(this->CheckBoxCheckedEvent).Delegate = 0;
  *(undefined8 *)&(this->CheckBoxCheckedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CheckBoxCheckedEvent).Delegate.field_0x10 = 0;
  return this;
}

// ~UDS_VM_W_GameOptionComboBox @ 14b736860

void __thiscall
UDS_VM_W_GameOptionComboBox::~UDS_VM_W_GameOptionComboBox(UDS_VM_W_GameOptionComboBox *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionComboBox__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CheckBoxCheckedEvent).Delegate);
  pvVar1 = *(void **)&(this->CheckBoxCheckedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CheckBoxCheckedEvent).Delegate);
  UDS_VM_GameOptionData::~UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7397c0

IClassDescriptor * __thiscall
UDS_VM_W_GameOptionComboBox::GetFieldNotificationDescriptor(UDS_VM_W_GameOptionComboBox *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_GameOptionComboBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a800

UClass * __cdecl UDS_VM_W_GameOptionComboBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionComboBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionComboBox",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionComboBox.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionComboBox,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_GameOptionComboBox>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionComboBox>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionComboBox.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_GameOptionComboBox @ 14b73b040

void __cdecl UDS_VM_W_GameOptionComboBox::StaticRegisterNativesUDS_VM_W_GameOptionComboBox(void)

{
  return;
}

// GetOptionValueText @ 14bfabb40

FDS_Text * __thiscall
UDS_VM_W_GameOptionComboBox::GetOptionValueText
          (UDS_VM_W_GameOptionComboBox *this,FDS_Text *__return_storage_ptr__)

{
  FWeakObjectPtr *this_00;
  code *pcVar1;
  bool bVar2;
  FDS_Text *pFVar3;
  UDS_M_GameOptionDataBase *pUVar4;
  FDS_GameOptionBaseTableRow *pFVar5;
  FName FVar6;
  FString local_78;
  FDS_Text local_68;
  
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  bVar2 = FWeakObjectPtr::IsValid(this_00);
  if (bVar2) {
    pUVar4 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(this_00);
    pFVar5 = UDS_M_GameOptionDataBase::GetGameOptionBaseTable(pUVar4);
    if (pFVar5 == (FDS_GameOptionBaseTableRow *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8331982743147642902>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionComboBox.cpp"
                         ,0x16,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FDS_Text *)(*pcVar1)();
        return pFVar3;
      }
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
    }
    else {
      local_68.StringTableType = None;
      local_68.StringTableID = 0;
      local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_68.StringEnumTableNameID.Number = 0;
      local_68.DateTime.Ticks = 0;
      local_68.TimeSpan.Ticks = 0;
      local_68.TimeExpressionType = None;
      local_68.IsExpression = false;
      local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.UniqueString.Data.ArrayNum = 0;
      local_68.UniqueString.Data.ArrayMax = 0;
      local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.FormatArgs.ArrayNum = 0;
      local_68.FormatArgs.ArrayMax = 0;
      pUVar4 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(this_00);
      UDS_M_GameOptionDataBase::GetGameOptionValueIndex(pUVar4);
      ::FString::PrintfImpl(&local_78,L"EDS_%s");
      FVar6 = DS_Util::GetStringEnumTableKey((FString *)&stack0x00000008,(int)&local_78);
      FDS_Text::SetTextFromStringEnumTable(&local_68,(FName *)FVar6);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      __return_storage_ptr__->StringTableType = local_68.StringTableType;
      __return_storage_ptr__->StringTableID = local_68.StringTableID;
      __return_storage_ptr__->StringEnumTableNameID = local_68.StringEnumTableNameID;
      (__return_storage_ptr__->DateTime).Ticks = local_68.DateTime.Ticks;
      (__return_storage_ptr__->TimeSpan).Ticks = local_68.TimeSpan.Ticks;
      __return_storage_ptr__->TimeExpressionType = local_68.TimeExpressionType;
      __return_storage_ptr__->IsExpression = local_68.IsExpression;
      (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
           local_68.UniqueString.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->UniqueString).Data.ArrayNum = local_68.UniqueString.Data.ArrayNum;
      (__return_storage_ptr__->UniqueString).Data.ArrayMax = local_68.UniqueString.Data.ArrayMax;
      (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data =
           local_68.FormatArgs.AllocatorInstance.Data;
      (__return_storage_ptr__->FormatArgs).ArrayNum = local_68.FormatArgs.ArrayNum;
      (__return_storage_ptr__->FormatArgs).ArrayMax = local_68.FormatArgs.ArrayMax;
      local_68.FormatArgs.ArrayNum = 0;
      local_68.FormatArgs.ArrayMax = 0;
      local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.UniqueString.Data.ArrayNum = 0;
      local_68.UniqueString.Data.ArrayMax = 0;
      local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (local_68.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
      }
      if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8331982743147642899>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionComboBox.cpp"
                       ,0x13,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDS_Text *)(*pcVar1)();
      return pFVar3;
    }
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
  }
  return __return_storage_ptr__;
}

// OnCheckBoxCheckedEvent @ 14bfb7c70

void __thiscall
UDS_VM_W_GameOptionComboBox::OnCheckBoxCheckedEvent
          (UDS_VM_W_GameOptionComboBox *this,FDS_CheckBoxCheckedEventField *param_1)

{
  int iVar1;
  
  iVar1 = UDS_VM_GameOptionData::GetGameOptionValue((UDS_VM_GameOptionData *)this);
  UDS_VM_GameOptionData::SetGameOptionValue((UDS_VM_GameOptionData *)this,(uint)(iVar1 < 1));
  return;
}

// OnSetViewModel @ 14bfcdef0

void __thiscall
UDS_VM_W_GameOptionComboBox::OnSetViewModel
          (UDS_VM_W_GameOptionComboBox *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
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
  UDS_VM_GameOptionData::OnSetViewModel((UDS_VM_GameOptionData *)this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateView @ 14bfe6a30

void __thiscall
UDS_VM_W_GameOptionComboBox::UpdateView
          (UDS_VM_W_GameOptionComboBox *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.BitNumber;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValueCheckBox.
             BitNumber;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValueCheckBox.
             FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

