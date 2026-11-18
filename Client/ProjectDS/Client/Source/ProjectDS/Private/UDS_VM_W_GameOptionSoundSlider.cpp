// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b72fab0

UClass * __cdecl UDS_VM_W_GameOptionSoundSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionSoundSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionSoundSlider",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionSoundSlider.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionSoundSlider,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_GameOptionSoundSlider>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionSoundSlider>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionSoundSlider.InnerSingleton;
}

// UDS_VM_W_GameOptionSoundSlider @ 14b735930

UDS_VM_W_GameOptionSoundSlider * __thiscall
UDS_VM_W_GameOptionSoundSlider::UDS_VM_W_GameOptionSoundSlider
          (UDS_VM_W_GameOptionSoundSlider *this,FVTableHelper *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionSoundSlider__6B_;
  (this->SoundOnOffViewModel).field0_0x0.DebugPtr = (UDS_VM_W_Common_ToggleSwitch *)0x0;
  return this;
}

// UDS_VM_W_GameOptionSoundSlider @ 14b735980

UDS_VM_W_GameOptionSoundSlider * __thiscall
UDS_VM_W_GameOptionSoundSlider::UDS_VM_W_GameOptionSoundSlider
          (UDS_VM_W_GameOptionSoundSlider *this,FObjectInitializer *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionSoundSlider__6B_;
  (this->SoundOnOffViewModel).field0_0x0.DebugPtr = (UDS_VM_W_Common_ToggleSwitch *)0x0;
  return this;
}

// ~UDS_VM_W_GameOptionSoundSlider @ 14b736a10

void __thiscall
UDS_VM_W_GameOptionSoundSlider::~UDS_VM_W_GameOptionSoundSlider
          (UDS_VM_W_GameOptionSoundSlider *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionSoundSlider__6B_;
  UDS_VM_GameOptionData::~UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739980

IClassDescriptor * __thiscall
UDS_VM_W_GameOptionSoundSlider::GetFieldNotificationDescriptor(UDS_VM_W_GameOptionSoundSlider *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_GameOptionSoundSlider::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73ab00

UClass * __cdecl UDS_VM_W_GameOptionSoundSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionSoundSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionSoundSlider",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionSoundSlider.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionSoundSlider,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_GameOptionSoundSlider>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionSoundSlider>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionSoundSlider.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_GameOptionSoundSlider @ 14b73b080

void __cdecl
UDS_VM_W_GameOptionSoundSlider::StaticRegisterNativesUDS_VM_W_GameOptionSoundSlider(void)

{
  return;
}

// GetOptionValueText @ 14bfac480

FDS_Text * __thiscall
UDS_VM_W_GameOptionSoundSlider::GetOptionValueText
          (UDS_VM_W_GameOptionSoundSlider *this,FDS_Text *__return_storage_ptr__)

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
    iVar9 = 0x1d;
    paVar13 = &bGEnsureHasExecuted<_9105911914034102243>;
  }
  else {
    iVar9 = 0x1a;
    paVar13 = &bGEnsureHasExecuted<_9105911914034102246>;
  }
  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar13,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionSoundSlider.cpp"
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

// OnChangedToggleSwitchState @ 14bfb7480

void __thiscall
UDS_VM_W_GameOptionSoundSlider::OnChangedToggleSwitchState
          (UDS_VM_W_GameOptionSoundSlider *this,bool param_1)

{
  FWeakObjectPtr *this_00;
  code *pcVar1;
  bool bVar2;
  UDS_M_GameOptionDataBase *this_01;
  
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  bVar2 = FWeakObjectPtr::IsValid(this_00);
  if (bVar2) {
    this_01 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(this_00);
    UDS_M_GameOptionDataBase::SetGameOptionValueByIndex(this_01,1,(uint)param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9105911914034102205>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionSoundSlider.cpp"
                       ,0x43,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bfce1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_GameOptionSoundSlider::OnSetViewModel
          (UDS_VM_W_GameOptionSoundSlider *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_W_Common_ToggleSwitch *pUVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [40];
  UDS_VM_W_GameOptionSoundSlider *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((this->SoundOnOffViewModel).field0_0x0.DebugPtr == (UDS_VM_W_Common_ToggleSwitch *)0x0) {
    local_c8._0_8_ = (FDS_ViewModelContext *)0x0;
    pUVar1 = Z_Construct_UClass_UDS_VM_W_Common_ToggleSwitch_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_W_Common_ToggleSwitch_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)(local_c8 + 0x20),pUVar1);
    local_78 = 0;
    lStack_70 = 0;
    local_98 = 0;
    local_90 = 0x40;
    local_80 = 0;
    local_88 = 0;
    local_a0 = this;
    pUVar3 = (UDS_VM_W_Common_ToggleSwitch *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_c8 + 0x20));
    if (local_68 != 0) {
      plVar4 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar4 = local_40;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    if (pUVar3 != (UDS_VM_W_Common_ToggleSwitch *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_W_Common_ToggleSwitch *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_c8._8_8_ = (ulonglong)(uint)local_c8._12_4_ << 0x20;
    local_c8._0_8_ = OnChangedToggleSwitchState;
    local_c8._16_8_ = OnChangedToggleSwitchState;
    local_c8._24_8_ = local_c8._8_8_;
    (this->SoundOnOffViewModel).field0_0x0.DebugPtr = pUVar3;
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_GameOptionSoundSlider>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangedToggleSwitchState,(UDS_VM_W_GameOptionSoundSlider *)local_c8,
               (pmf_fe3d054c *)this);
  }
  local_c8._0_8_ = param_1->Object;
  local_c8._8_8_ = (param_1->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_c8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_c8._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_c8._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_GameOptionData::OnSetViewModel
            ((UDS_VM_GameOptionData *)this,(TSharedPtr<FDS_ViewModelContext,1> *)local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateView @ 14bfe6c30

void __thiscall
UDS_VM_W_GameOptionSoundSlider::UpdateView
          (UDS_VM_W_GameOptionSoundSlider *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  UDS_VM_W_Common_ToggleSwitch *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_M_GameOptionDataBase *this_00;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  local_60 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.BitNumber;
  local_68 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  local_50 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValueFloatNormalized
             .BitNumber;
  local_58 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValueFloatNormalized
             .FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  local_40 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue1.BitNumber;
  local_48 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue1.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  local_30 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue2.BitNumber;
  local_38 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue2.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  local_20 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue3.BitNumber;
  local_28 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetOptionValue3.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (bVar3) {
    pUVar1 = (this->SoundOnOffViewModel).field0_0x0.DebugPtr;
    if (pUVar1 != (UDS_VM_W_Common_ToggleSwitch *)0x0) {
      this_00 = (UDS_M_GameOptionDataBase *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      iVar4 = UDS_M_GameOptionDataBase::GetGameOptionValueByIndex(this_00,1);
      pUVar1->ToggleSwitchIndex = (uint)(iVar4 == 0);
      local_10 = UDS_VM_W_Common_ToggleSwitch::FFieldNotificationClassDescriptor::ToggleSwitchIndex.
                 BitNumber;
      local_18 = UDS_VM_W_Common_ToggleSwitch::FFieldNotificationClassDescriptor::ToggleSwitchIndex.
                 FieldName;
      (**(code **)(pUVar1->_padding_ + 0x38))(&pUVar1->_padding_,&local_18);
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&pUVar1->OnChangedToggleSwitchState,pUVar1->ToggleSwitchIndex == 0);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9105911914034102214>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionSoundSlider.cpp"
                       ,0x3a,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

