// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// SetOnEventClickedMinusButton_WrapperImpl @ 14b72f750

void __cdecl
UDS_VM_W_GameOptionSlider::SetOnEventClickedMinusButton_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = UDS_VM_GameOptionData::GetOptionValue2(param_1);
  iVar2 = UDS_VM_GameOptionData::GetOptionValue1(param_1);
  iVar3 = UDS_VM_GameOptionData::GetGameOptionValue(param_1);
  iVar4 = UDS_VM_GameOptionData::GetOptionValue3(param_1);
  if (iVar3 - iVar4 < iVar1) {
    iVar1 = iVar3 - iVar4;
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  UDS_VM_GameOptionData::SetGameOptionValue(param_1,iVar2);
  return;
}

// SetOnEventClickedPlusButton_WrapperImpl @ 14b72f760

void __cdecl
UDS_VM_W_GameOptionSlider::SetOnEventClickedPlusButton_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = UDS_VM_GameOptionData::GetOptionValue2(param_1);
  iVar2 = UDS_VM_GameOptionData::GetOptionValue1(param_1);
  iVar3 = UDS_VM_GameOptionData::GetGameOptionValue(param_1);
  iVar4 = UDS_VM_GameOptionData::GetOptionValue3(param_1);
  if (iVar3 + iVar4 < iVar1) {
    iVar1 = iVar3 + iVar4;
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  UDS_VM_GameOptionData::SetGameOptionValue(param_1,iVar2);
  return;
}

// StaticClass @ 14b72f770

UClass * __cdecl UDS_VM_W_GameOptionSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionSlider",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionSlider.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionSlider,0x110,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_GameOptionSlider>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionSlider>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionSlider.InnerSingleton;
}

// UDS_VM_W_GameOptionSlider @ 14b735830

UDS_VM_W_GameOptionSlider * __thiscall
UDS_VM_W_GameOptionSlider::UDS_VM_W_GameOptionSlider
          (UDS_VM_W_GameOptionSlider *this,FVTableHelper *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionSlider__6B_;
  *(undefined8 *)&(this->OnEventClickedMinusButton).Delegate = 0;
  *(undefined8 *)&(this->OnEventClickedMinusButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnEventClickedMinusButton).Delegate.field_0x10 = 0;
  (this->OnEventClickedPlusButton)._padding_ = '\0';
  (this->OnEventClickedPlusButton).bIsCustomSelected = false;
  (this->OnEventClickedPlusButton).bIsLacked = false;
  (this->OnEventClickedPlusButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnEventClickedPlusButton).Delegate = 0;
  *(undefined8 *)&(this->OnEventClickedPlusButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnEventClickedPlusButton).Delegate.field_0x10 = 0;
  (this->OnEventClickedMinusButton)._padding_ = '\0';
  (this->OnEventClickedMinusButton).bIsCustomSelected = false;
  (this->OnEventClickedMinusButton).bIsLacked = false;
  (this->OnEventClickedMinusButton).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_W_GameOptionSlider @ 14b7358b0

UDS_VM_W_GameOptionSlider * __thiscall
UDS_VM_W_GameOptionSlider::UDS_VM_W_GameOptionSlider
          (UDS_VM_W_GameOptionSlider *this,FObjectInitializer *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionSlider__6B_;
  *(undefined8 *)&(this->OnEventClickedMinusButton).Delegate = 0;
  *(undefined8 *)&(this->OnEventClickedMinusButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnEventClickedMinusButton).Delegate.field_0x10 = 0;
  (this->OnEventClickedPlusButton)._padding_ = '\0';
  (this->OnEventClickedPlusButton).bIsCustomSelected = false;
  (this->OnEventClickedPlusButton).bIsLacked = false;
  (this->OnEventClickedPlusButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnEventClickedPlusButton).Delegate = 0;
  *(undefined8 *)&(this->OnEventClickedPlusButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnEventClickedPlusButton).Delegate.field_0x10 = 0;
  (this->OnEventClickedMinusButton)._padding_ = '\0';
  (this->OnEventClickedMinusButton).bIsCustomSelected = false;
  (this->OnEventClickedMinusButton).bIsLacked = false;
  (this->OnEventClickedMinusButton).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_W_GameOptionSlider @ 14b736970

void __thiscall
UDS_VM_W_GameOptionSlider::~UDS_VM_W_GameOptionSlider(UDS_VM_W_GameOptionSlider *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionSlider__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnEventClickedPlusButton).Delegate
            );
  pvVar1 = *(void **)&(this->OnEventClickedPlusButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnEventClickedPlusButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OnEventClickedMinusButton).Delegate);
  pvVar1 = *(void **)&(this->OnEventClickedMinusButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnEventClickedMinusButton).Delegate);
  UDS_VM_GameOptionData::~UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739910

IClassDescriptor * __thiscall
UDS_VM_W_GameOptionSlider::GetFieldNotificationDescriptor(UDS_VM_W_GameOptionSlider *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_GameOptionSlider::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73aa40

UClass * __cdecl UDS_VM_W_GameOptionSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionSlider",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionSlider.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionSlider,0x110,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_GameOptionSlider>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionSlider>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionSlider.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_GameOptionSlider @ 14b73b070

void __cdecl UDS_VM_W_GameOptionSlider::StaticRegisterNativesUDS_VM_W_GameOptionSlider(void)

{
  return;
}

// GetOptionValueText @ 14bfac270

FDS_Text * __thiscall
UDS_VM_W_GameOptionSlider::GetOptionValueText
          (UDS_VM_W_GameOptionSlider *this,FDS_Text *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FDS_Text *pFVar10;
  UDS_M_GameOptionDataBase *this_00;
  FDS_GameOptionBaseTableRow *pFVar11;
  FNumberFormattingOptions *pFVar12;
  atomic<unsigned_char> *paVar13;
  FNumberFormattingOptions local_98;
  FNumberFormattingOptions local_78;
  FNumberFormattingOptions local_58;
  FNumberFormattingOptions local_40 [2];
  
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (bVar8) {
    this_00 = (UDS_M_GameOptionDataBase *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    pFVar11 = UDS_M_GameOptionDataBase::GetGameOptionBaseTable(this_00);
    if (pFVar11 != (FDS_GameOptionBaseTableRow *)0x0) {
      if (pFVar11->GameOptionDataType == Int32) {
        pFVar12 = FNumberFormattingOptions::FNumberFormattingOptions(local_40);
        uVar6._0_1_ = pFVar12->AlwaysSign;
        uVar6._1_1_ = pFVar12->UseGrouping;
        uVar6._2_1_ = pFVar12->IndicateNearlyInteger;
        uVar6._3_1_ = pFVar12->field_0x3;
        uVar6._4_4_ = pFVar12->RoundingMode;
        uVar7._0_4_ = pFVar12->MinimumIntegralDigits;
        uVar7._4_4_ = pFVar12->MaximumIntegralDigits;
        uVar2._0_4_ = pFVar12->MinimumFractionalDigits;
        uVar2._4_4_ = pFVar12->MaximumFractionalDigits;
        iVar9 = UDS_VM_GameOptionData::GetGameOptionValue((UDS_VM_GameOptionData *)this);
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
        (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
        (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
        local_78._0_8_ = uVar6;
        local_78._8_8_ = uVar7;
        local_78._16_8_ = uVar2;
        FDS_Text::SetTextFromNumber(__return_storage_ptr__,iVar9,&local_78);
        return __return_storage_ptr__;
      }
      if (pFVar11->GameOptionDataType != Float) {
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
        (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
        (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
        return __return_storage_ptr__;
      }
      pFVar12 = FNumberFormattingOptions::FNumberFormattingOptions(&local_58);
      pFVar12->MinimumFractionalDigits = 2;
      pFVar12->MaximumFractionalDigits = 2;
      uVar4._0_1_ = pFVar12->AlwaysSign;
      uVar4._1_1_ = pFVar12->UseGrouping;
      uVar4._2_1_ = pFVar12->IndicateNearlyInteger;
      uVar4._3_1_ = pFVar12->field_0x3;
      uVar4._4_4_ = pFVar12->RoundingMode;
      uVar5._0_4_ = pFVar12->MinimumIntegralDigits;
      uVar5._4_4_ = pFVar12->MaximumIntegralDigits;
      uVar1._0_4_ = pFVar12->MinimumFractionalDigits;
      uVar1._4_4_ = pFVar12->MaximumFractionalDigits;
      iVar9 = UDS_VM_GameOptionData::GetGameOptionValue((UDS_VM_GameOptionData *)this);
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
      local_98._0_8_ = uVar4;
      local_98._8_8_ = uVar5;
      local_98._16_8_ = uVar1;
      FDS_Text::SetTextFromNumber(__return_storage_ptr__,(float)iVar9 * __real_358637bd,&local_98);
      return __return_storage_ptr__;
    }
    iVar9 = 0x17;
    paVar13 = &bGEnsureHasExecuted<4377114640094593047>;
  }
  else {
    iVar9 = 0x14;
    paVar13 = &bGEnsureHasExecuted<4377114640094593044>;
  }
  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar13,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionSlider.cpp"
                     ,iVar9,"false");
  if (!bVar8) {
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
  pcVar3 = (code *)swi(3);
  pFVar10 = (FDS_Text *)(*pcVar3)();
  return pFVar10;
}

// OnOnEventClickedMinusButton @ 14bfbf780

void __thiscall
UDS_VM_W_GameOptionSlider::OnOnEventClickedMinusButton
          (UDS_VM_W_GameOptionSlider *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = UDS_VM_GameOptionData::GetOptionValue2((UDS_VM_GameOptionData *)this);
  iVar2 = UDS_VM_GameOptionData::GetOptionValue1((UDS_VM_GameOptionData *)this);
  iVar3 = UDS_VM_GameOptionData::GetGameOptionValue((UDS_VM_GameOptionData *)this);
  iVar4 = UDS_VM_GameOptionData::GetOptionValue3((UDS_VM_GameOptionData *)this);
  if (iVar3 - iVar4 < iVar1) {
    iVar1 = iVar3 - iVar4;
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  UDS_VM_GameOptionData::SetGameOptionValue((UDS_VM_GameOptionData *)this,iVar2);
  return;
}

// OnOnEventClickedPlusButton @ 14bfbf7f0

void __thiscall
UDS_VM_W_GameOptionSlider::OnOnEventClickedPlusButton
          (UDS_VM_W_GameOptionSlider *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = UDS_VM_GameOptionData::GetOptionValue2((UDS_VM_GameOptionData *)this);
  iVar2 = UDS_VM_GameOptionData::GetOptionValue1((UDS_VM_GameOptionData *)this);
  iVar3 = UDS_VM_GameOptionData::GetGameOptionValue((UDS_VM_GameOptionData *)this);
  iVar4 = UDS_VM_GameOptionData::GetOptionValue3((UDS_VM_GameOptionData *)this);
  if (iVar3 + iVar4 < iVar1) {
    iVar1 = iVar3 + iVar4;
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  UDS_VM_GameOptionData::SetGameOptionValue((UDS_VM_GameOptionData *)this,iVar2);
  return;
}

// OnSetViewModel @ 14bfce190

void __thiscall
UDS_VM_W_GameOptionSlider::OnSetViewModel
          (UDS_VM_W_GameOptionSlider *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

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

// UpdateView @ 14bfe6b30

void __thiscall
UDS_VM_W_GameOptionSlider::UpdateView
          (UDS_VM_W_GameOptionSlider *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1
          )

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.BitNumber;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValueFloatNormalized
             .BitNumber;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValueFloatNormalized
             .FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValueFloat.BitNumber
  ;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValueFloat.FieldName
  ;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue1.BitNumber;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue1.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue2.BitNumber;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue2.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue3.BitNumber;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue3.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

