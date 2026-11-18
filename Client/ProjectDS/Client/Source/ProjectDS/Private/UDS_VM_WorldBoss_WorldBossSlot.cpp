// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetClickSlot_WrapperImpl @ 14b6fd040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WorldBoss_WorldBossSlot::SetClickSlot_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WorldBossManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_WorldBossManager::GetInst();
  if ((this == (UDS_WorldBossManager *)0x0) || (((uint)this->_padding_ >> 0x1e & 1) != 0)) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WorldBoss_WorldBossSlot::OnClickSlot",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,TStack_138.Ptr,0x29,L"UDS_WorldBossManager is InValid");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    UDS_WorldBossManager::SetSelectedWorldBossID(this,*(int *)((longlong)param_1 + 0x11c));
  }
  return;
}

// SetbIsSelected_WrapperImpl @ 14b6fd050

void __cdecl UDS_VM_WorldBoss_WorldBossSlot::SetbIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x118) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6fd060

UClass * __cdecl UDS_VM_WorldBoss_WorldBossSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_WorldBossSlot",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_WorldBossSlot,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldBoss_WorldBossSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_WorldBossSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossSlot.InnerSingleton;
}

// UDS_VM_WorldBoss_WorldBossSlot @ 14b701100

UDS_VM_WorldBoss_WorldBossSlot * __thiscall
UDS_VM_WorldBoss_WorldBossSlot::UDS_VM_WorldBoss_WorldBossSlot
          (UDS_VM_WorldBoss_WorldBossSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_WorldBossSlot__6B_;
  (this->WorldBossName_Text).StringTableID = 0;
  (this->WorldBossName_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->WorldBossName_Text).StringEnumTableNameID.Number = 0;
  (this->WorldBossName_Text).DateTime.Ticks = 0;
  (this->WorldBossName_Text).TimeSpan.Ticks = 0;
  (this->WorldBossName_Text).TimeExpressionType = None;
  (this->WorldBossName_Text).IsExpression = false;
  (this->WorldBossName_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldBossName_Text).UniqueString.Data.ArrayNum = 0;
  (this->WorldBossName_Text).UniqueString.Data.ArrayMax = 0;
  (this->WorldBossName_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldBossName_Text).FormatArgs.ArrayNum = 0;
  (this->WorldBossName_Text).FormatArgs.ArrayMax = 0;
  (this->ClickSlot)._padding_ = '\0';
  (this->ClickSlot).bIsCustomSelected = false;
  (this->ClickSlot).bIsLacked = false;
  (this->ClickSlot).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlot).Delegate.field_0x10 = 0;
  (this->WorldBossName_Text).StringTableType = None;
  return this;
}

// UDS_VM_WorldBoss_WorldBossSlot @ 14b7011b0

UDS_VM_WorldBoss_WorldBossSlot * __thiscall
UDS_VM_WorldBoss_WorldBossSlot::UDS_VM_WorldBoss_WorldBossSlot
          (UDS_VM_WorldBoss_WorldBossSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_WorldBossSlot__6B_;
  (this->WorldBossName_Text).StringTableID = 0;
  (this->WorldBossName_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->WorldBossName_Text).StringEnumTableNameID.Number = 0;
  (this->WorldBossName_Text).DateTime.Ticks = 0;
  (this->WorldBossName_Text).TimeSpan.Ticks = 0;
  (this->WorldBossName_Text).TimeExpressionType = None;
  (this->WorldBossName_Text).IsExpression = false;
  (this->WorldBossName_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldBossName_Text).UniqueString.Data.ArrayNum = 0;
  (this->WorldBossName_Text).UniqueString.Data.ArrayMax = 0;
  (this->WorldBossName_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldBossName_Text).FormatArgs.ArrayNum = 0;
  (this->WorldBossName_Text).FormatArgs.ArrayMax = 0;
  (this->ClickSlot)._padding_ = '\0';
  (this->ClickSlot).bIsCustomSelected = false;
  (this->ClickSlot).bIsLacked = false;
  (this->ClickSlot).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlot).Delegate.field_0x10 = 0;
  (this->WorldBossName_Text).StringTableType = None;
  return this;
}

// ~UDS_VM_WorldBoss_WorldBossSlot @ 14b703210

void __thiscall
UDS_VM_WorldBoss_WorldBossSlot::~UDS_VM_WorldBoss_WorldBossSlot
          (UDS_VM_WorldBoss_WorldBossSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_WorldBossSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlot).Delegate);
  pvVar1 = *(void **)&(this->ClickSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlot).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->WorldBossName_Text).FormatArgs.AllocatorInstance.Data,
             (this->WorldBossName_Text).FormatArgs.ArrayNum);
  pFVar2 = (this->WorldBossName_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WorldBossName_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7060e0

IClassDescriptor * __thiscall
UDS_VM_WorldBoss_WorldBossSlot::GetFieldNotificationDescriptor(UDS_VM_WorldBoss_WorldBossSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldBoss_WorldBossSlot::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b706e90

UClass * __cdecl UDS_VM_WorldBoss_WorldBossSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_WorldBossSlot",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_WorldBossSlot,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldBoss_WorldBossSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_WorldBossSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldBoss_WorldBossSlot @ 14b7076f0

void __cdecl
UDS_VM_WorldBoss_WorldBossSlot::StaticRegisterNativesUDS_VM_WorldBoss_WorldBossSlot(void)

{
  return;
}

// BindModel @ 14c003db0

void __thiscall UDS_VM_WorldBoss_WorldBossSlot::BindModel(UDS_VM_WorldBoss_WorldBossSlot *this)

{
  UDS_WorldBossEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldBossEvent::GetEvent();
  if (pUVar1 != (UDS_WorldBossEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWorldBoss,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldBoss_WorldBossSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedWorldBoss,(UDS_VM_WorldBoss_WorldBossSlot *)&stack0x00000010,
               (pmf_871a4b8e *)this);
  }
  return;
}

// OnClickSlot @ 14c026bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldBoss_WorldBossSlot::OnClickSlot
          (UDS_VM_WorldBoss_WorldBossSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_WorldBossManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_WorldBossManager::GetInst();
  if ((this_00 == (UDS_WorldBossManager *)0x0) || (((uint)this_00->_padding_ >> 0x1e & 1) != 0)) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldBoss_WorldBossSlot::OnClickSlot",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x29,L"UDS_WorldBossManager is InValid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_WorldBossManager::SetSelectedWorldBossID(this_00,this->WorldBossID);
  }
  return;
}

// OnSelectedWorldBoss @ 14c0304c0

void __thiscall
UDS_VM_WorldBoss_WorldBossSlot::OnSelectedWorldBoss
          (UDS_VM_WorldBoss_WorldBossSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsSelected = this->WorldBossID == param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14c037160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldBoss_WorldBossSlot::OnSetViewModel
          (UDS_VM_WorldBoss_WorldBossSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  UDS_LogManager *pUVar4;
  UDS_WorldBossManager *pUVar5;
  undefined1 auStackY_1e8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  TSharedPtr<FDS_ViewModelContext_WorldBossSlot,1> local_1b8;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_168.Object = param_1->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldBossSlot>(&local_1b8,&local_168);
  if (local_1b8.Object == (FDS_ViewModelContext_WorldBossSlot *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_WorldBoss_WorldBossSlot::OnSetViewModel",0x2e,Yes);
      pwVar7 = L"FDS_ViewModelContext_WorldBossSlot is nullptr";
      uVar6 = 0x12;
LAB_14c037455:
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar6,pwVar7);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    this->WorldBossID = (int)(local_1b8.Object)->WorldBossId;
    pUVar5 = UDS_WorldBossManager::GetInst();
    if ((pUVar5 != (UDS_WorldBossManager *)0x0) && (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)) {
      this->bIsSelected = pUVar5->SelectedWorldBossID == this->WorldBossID;
      local_1a0 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
      local_1a8 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
      iVar1 = (local_1b8.Object)->WorldBossIconID;
      iVar2 = (local_1b8.Object)->WorldBossNameStringID;
      pUVar5 = UDS_WorldBossManager::GetInst();
      if ((pUVar5 == (UDS_WorldBossManager *)0x0) || (((uint)pUVar5->_padding_ >> 0x1e & 1) != 0)) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_WorldBoss_WorldBossSlot::SetWorldBossSlot",0x30,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_158.Ptr,0x52,L"UDS_WorldBossManager is InValid");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else {
        FDS_Text::SetTextFromStringTable(&this->WorldBossName_Text,StringWorld,(longlong)iVar2);
        local_190 = FFieldNotificationClassDescriptor::WorldBossName_Text.BitNumber;
        local_198 = FFieldNotificationClassDescriptor::WorldBossName_Text.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
        this->ListIconID = iVar1;
        local_180 = FFieldNotificationClassDescriptor::ListIconID.BitNumber;
        local_188 = FFieldNotificationClassDescriptor::ListIconID.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
        this->bIsSelected = this->WorldBossID == pUVar5->SelectedWorldBossID;
        local_170 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
        local_178 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
      goto LAB_14c03748a;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_WorldBoss_WorldBossSlot::OnSetViewModel",0x2e,Yes);
      pwVar7 = L"UDS_WorldBossManager is InValid";
      uVar6 = 0x1b;
      goto LAB_14c037455;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
LAB_14c03748a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsSelected @ 14c041940

void __thiscall
UDS_VM_WorldBoss_WorldBossSlot::SetIsSelected(UDS_VM_WorldBoss_WorldBossSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsSelected = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetWorldBossSlot @ 14c0466b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldBoss_WorldBossSlot::SetWorldBossSlot
          (UDS_VM_WorldBoss_WorldBossSlot *this,int param_1,int param_2)

{
  UDS_WorldBossManager *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  FName local_158;
  int local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = UDS_WorldBossManager::GetInst();
  if ((pUVar1 == (UDS_WorldBossManager *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_WorldBoss_WorldBossSlot::SetWorldBossSlot",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x52,L"UDS_WorldBossManager is InValid");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    FDS_Text::SetTextFromStringTable(&this->WorldBossName_Text,StringWorld,(longlong)param_1);
    local_150 = FFieldNotificationClassDescriptor::WorldBossName_Text.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::WorldBossName_Text.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    this->ListIconID = param_2;
    local_150 = FFieldNotificationClassDescriptor::ListIconID.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::ListIconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    this->bIsSelected = this->WorldBossID == pUVar1->SelectedWorldBossID;
    local_150 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  }
  return;
}

// UnbindModel @ 14c049150

void __thiscall UDS_VM_WorldBoss_WorldBossSlot::UnbindModel(UDS_VM_WorldBoss_WorldBossSlot *this)

{
  UDS_WorldBossEvent *pUVar1;
  
  pUVar1 = UDS_WorldBossEvent::GetEvent();
  if (pUVar1 != (UDS_WorldBossEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWorldBoss,
               this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

