// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// SetBtnEvent_Info_WrapperImpl @ 14b748b20

void __cdecl UDS_VM_W_PlayerSkill::SetBtnEvent_Info_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::SwticherIndex_ListChangeBtn.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SwticherIndex_ListChangeBtn.FieldName;
  if (*(int *)((longlong)param_1 + 0xf0) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  iStack_10 = FFieldNotificationClassDescriptor::SwticherIndex_SkillInfo.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SwticherIndex_SkillInfo.FieldName;
  if (*(int *)((longlong)param_1 + 0xf4) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetBtnEvent_Bag_WrapperImpl @ 14b748b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_VM_W_PlayerSkill::SetBtnEvent_Bag_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  FDS_PlayerSkillBaseTableRow *this;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)*(byte *)((longlong)param_1 + 0x161),true);
  bVar1 = FDS_PlayerSkillBaseTableRow::IsValid(this);
  if (bVar1) {
    if ((this->ID_EquipISlotType == None) || (this->EquipItemType == None)) {
      TStack_158._0_8_ = 0;
      TStack_158._8_8_ = 0;
      TStack_158._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x4bb16,Alert_None_01,&TStack_158);
    }
    else {
      ChangeToBag(param_1);
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_W_PlayerSkill::OnClickBagSwitchBtn",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x104,L"playerSkillBase is Invalid.")
      ;
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// StaticClass @ 14b748b40

UClass * __cdecl UDS_VM_W_PlayerSkill::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_PlayerSkill",
               &Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_PlayerSkill,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_PlayerSkill>,
               InternalVTableHelperCtorCaller<UDS_VM_W_PlayerSkill>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill.InnerSingleton;
}

// UDS_VM_W_PlayerSkill @ 14b74d240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_PlayerSkill * __thiscall
UDS_VM_W_PlayerSkill::UDS_VM_W_PlayerSkill(UDS_VM_W_PlayerSkill *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_PlayerSkill__6B_;
  *(undefined8 *)&(this->BtnEvent_Info).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_Info).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_Info).Delegate.field_0x10 = 0;
  (this->BtnEvent_Bag)._padding_ = '\0';
  (this->BtnEvent_Bag).bIsCustomSelected = false;
  (this->BtnEvent_Bag).bIsLacked = false;
  (this->BtnEvent_Bag).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_Bag).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_Bag).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_Bag).Delegate.field_0x10 = 0;
  (this->EntryBindingEvent_SkillSlots).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEvent_SkillSlots).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEvent_SkillSlots).UserObjectList.ArrayMax = 0;
  (this->HaloPoint).StringTableType = None;
  (this->HaloPoint).StringTableID = 0;
  (this->HaloPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->HaloPoint).StringEnumTableNameID.Number = 0;
  (this->HaloPoint).DateTime.Ticks = 0;
  (this->HaloPoint).TimeSpan.Ticks = 0;
  (this->HaloPoint).TimeExpressionType = None;
  (this->HaloPoint).IsExpression = false;
  (this->HaloPoint).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HaloPoint).UniqueString.Data.ArrayNum = 0;
  (this->HaloPoint).UniqueString.Data.ArrayMax = 0;
  (this->HaloPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HaloPoint).FormatArgs.ArrayNum = 0;
  (this->HaloPoint).FormatArgs.ArrayMax = 0;
  (this->VM_SkillInfo).field0_0x0.DebugPtr = (UDS_VM_W_PlayerSkill_SkillInfo *)0x0;
  (this->VM_InventoryBag).field0_0x0.DebugPtr = (UDS_VM_W_InventoryBag *)0x0;
  (this->M_InventoryBag).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  (this->SelectedSlot).field0_0x0.DebugPtr = (UDS_VM_W_PlayerSkill_SkillInfo *)0x0;
  (this->SlotContextArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotContextArray).ArrayNum = 0;
  (this->SlotContextArray).ArrayMax = 0;
  (this->BtnEvent_Info)._padding_ = '\0';
  (this->BtnEvent_Info).bIsCustomSelected = false;
  (this->BtnEvent_Info).bIsLacked = false;
  (this->BtnEvent_Info).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_W_PlayerSkill @ 14b74d340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_PlayerSkill * __thiscall
UDS_VM_W_PlayerSkill::UDS_VM_W_PlayerSkill(UDS_VM_W_PlayerSkill *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_PlayerSkill__6B_;
  *(undefined8 *)&(this->BtnEvent_Info).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_Info).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_Info).Delegate.field_0x10 = 0;
  (this->BtnEvent_Bag)._padding_ = '\0';
  (this->BtnEvent_Bag).bIsCustomSelected = false;
  (this->BtnEvent_Bag).bIsLacked = false;
  (this->BtnEvent_Bag).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_Bag).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_Bag).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_Bag).Delegate.field_0x10 = 0;
  (this->EntryBindingEvent_SkillSlots).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEvent_SkillSlots).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEvent_SkillSlots).UserObjectList.ArrayMax = 0;
  (this->HaloPoint).StringTableType = None;
  (this->HaloPoint).StringTableID = 0;
  (this->HaloPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->HaloPoint).StringEnumTableNameID.Number = 0;
  (this->HaloPoint).DateTime.Ticks = 0;
  (this->HaloPoint).TimeSpan.Ticks = 0;
  (this->HaloPoint).TimeExpressionType = None;
  (this->HaloPoint).IsExpression = false;
  (this->HaloPoint).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HaloPoint).UniqueString.Data.ArrayNum = 0;
  (this->HaloPoint).UniqueString.Data.ArrayMax = 0;
  (this->HaloPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HaloPoint).FormatArgs.ArrayNum = 0;
  (this->HaloPoint).FormatArgs.ArrayMax = 0;
  (this->VM_SkillInfo).field0_0x0.DebugPtr = (UDS_VM_W_PlayerSkill_SkillInfo *)0x0;
  (this->VM_InventoryBag).field0_0x0.DebugPtr = (UDS_VM_W_InventoryBag *)0x0;
  (this->M_InventoryBag).field0_0x0.DebugPtr = (UDS_M_InventoryBag *)0x0;
  (this->SelectedSlot).field0_0x0.DebugPtr = (UDS_VM_W_PlayerSkill_SkillInfo *)0x0;
  (this->SlotContextArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotContextArray).ArrayNum = 0;
  (this->SlotContextArray).ArrayMax = 0;
  (this->BtnEvent_Info)._padding_ = '\0';
  (this->BtnEvent_Info).bIsCustomSelected = false;
  (this->BtnEvent_Info).bIsLacked = false;
  (this->BtnEvent_Info).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_W_PlayerSkill @ 14b74f030

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::~UDS_VM_W_PlayerSkill(UDS_VM_W_PlayerSkill *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_PlayerSkill__6B_;
  DestructItems<TSharedPtr<FDS_VMC_PlayerSkill_SkillSlot,1>,int>
            ((TSharedPtr<FDS_VMC_PlayerSkill_SkillSlot,1> *)
             (this->SlotContextArray).AllocatorInstance.Data,(this->SlotContextArray).ArrayNum);
  pFVar1 = (this->SlotContextArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->HaloPoint).FormatArgs.AllocatorInstance.Data,
             (this->HaloPoint).FormatArgs.ArrayNum);
  pFVar1 = (this->HaloPoint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HaloPoint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEvent_SkillSlots).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEvent_Bag).Delegate);
  pvVar2 = *(void **)&(this->BtnEvent_Bag).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEvent_Bag).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEvent_Info).Delegate);
  pvVar2 = *(void **)&(this->BtnEvent_Info).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEvent_Info).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b751390

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_PlayerSkill::GetFieldNotificationDescriptor(UDS_VM_W_PlayerSkill *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_PlayerSkill::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b751c00

UClass * __cdecl UDS_VM_W_PlayerSkill::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_PlayerSkill",
               &Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_PlayerSkill,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_PlayerSkill>,
               InternalVTableHelperCtorCaller<UDS_VM_W_PlayerSkill>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_PlayerSkill @ 14b752400

void __cdecl UDS_VM_W_PlayerSkill::StaticRegisterNativesUDS_VM_W_PlayerSkill(void)

{
  return;
}

// BindModel @ 14bf423c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::BindModel(UDS_VM_W_PlayerSkill *this)

{
  bool bVar1;
  UDS_PlayerSkillEvent *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_PlayerSkillEvent::GetEvent();
  if (pUVar2 != (UDS_PlayerSkillEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnSkillSlotSelectDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_PlayerSkill>
              (&pUVar2->OnSkillSlotSelectDelegate,(UDS_VM_W_PlayerSkill *)(local_res10 + 1),
               (pmf_e7acc092 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnSkillSlotLevelUpDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_PlayerSkill>
              (&pUVar2->OnSkillSlotLevelUpDelegate,(UDS_VM_W_PlayerSkill *)(local_res10 + 1),
               (pmf_e7acc092 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnSkillSlotOpenDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_PlayerSkill>
              (&pUVar2->OnSkillSlotOpenDelegate,(UDS_VM_W_PlayerSkill *)(local_res10 + 1),
               (pmf_e7acc092 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnSkillResetDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_PlayerSkill>
              (&pUVar2->OnSkillResetDelegate,(UDS_VM_W_PlayerSkill *)(local_res10 + 1),
               (pmf_e7acc092 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnEquipSlotSelectDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_EquipSlotType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_PlayerSkill>
              (&pUVar2->OnEquipSlotSelectDelegate,(UDS_VM_W_PlayerSkill *)(local_res10 + 1),
               (pmf_9302bac3 *)this);
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_PlayerSkill>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar3[3].field_0x20,(UDS_VM_W_PlayerSkill *)(local_res10 + 1),(pmf_f0a11b43 *)this)
    ;
  }
  return;
}

// ChangeToBag @ 14bf43f90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::ChangeToBag(UDS_VM_W_PlayerSkill *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SwticherIndex_ListChangeBtn.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwticherIndex_ListChangeBtn.FieldName;
  if (this->SwticherIndex_ListChangeBtn != 1) {
    this->SwticherIndex_ListChangeBtn = 1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::SwticherIndex_SkillInfo.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwticherIndex_SkillInfo.FieldName;
  if (this->SwticherIndex_SkillInfo != 1) {
    this->SwticherIndex_SkillInfo = 1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// ChangeToInfo @ 14bf44030

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::ChangeToInfo(UDS_VM_W_PlayerSkill *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SwticherIndex_ListChangeBtn.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwticherIndex_ListChangeBtn.FieldName;
  if (this->SwticherIndex_ListChangeBtn != 0) {
    this->SwticherIndex_ListChangeBtn = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::SwticherIndex_SkillInfo.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwticherIndex_SkillInfo.FieldName;
  if (this->SwticherIndex_SkillInfo != 0) {
    this->SwticherIndex_SkillInfo = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// InitViewModel @ 14bf5c090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::InitViewModel(UDS_VM_W_PlayerSkill *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_PlayerSkill_SkillInfo *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_SkillInfo).field0_0x0.DebugPtr == (UDS_VM_W_PlayerSkill_SkillInfo *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_W_PlayerSkill_SkillInfo_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_W_PlayerSkill_SkillInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_W_PlayerSkill_SkillInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_W_PlayerSkill_SkillInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_W_PlayerSkill_SkillInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_SkillInfo).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnClickBagSwitchBtn @ 14bf617f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill::OnClickBagSwitchBtn(UDS_VM_W_PlayerSkill *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  FDS_PlayerSkillBaseTableRow *this_00;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)this->SelectedPlayerSkillType,true);
  bVar1 = FDS_PlayerSkillBaseTableRow::IsValid(this_00);
  if (bVar1) {
    if ((this_00->ID_EquipISlotType == None) || (this_00->EquipItemType == None)) {
      local_158._0_8_ = 0;
      local_158._8_8_ = 0;
      local_158._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x4bb16,Alert_None_01,&local_158);
    }
    else {
      ChangeToBag(this);
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_PlayerSkill::OnClickBagSwitchBtn",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x104,L"playerSkillBase is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnClickInfoSwitchBtn @ 14bf622c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill::OnClickInfoSwitchBtn(UDS_VM_W_PlayerSkill *this,FDS_ButtonEventField *param_1)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::SwticherIndex_ListChangeBtn.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SwticherIndex_ListChangeBtn.FieldName;
  if (this->SwticherIndex_ListChangeBtn != 0) {
    this->SwticherIndex_ListChangeBtn = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  }
  iStack_10 = FFieldNotificationClassDescriptor::SwticherIndex_SkillInfo.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SwticherIndex_SkillInfo.FieldName;
  if (this->SwticherIndex_SkillInfo != 0) {
    this->SwticherIndex_SkillInfo = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  }
  return;
}

// OnCloseInit @ 14bf635b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::OnCloseInit(UDS_VM_W_PlayerSkill *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnEquipSlotSelectEvent @ 14bf63a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill::OnEquipSlotSelectEvent(UDS_VM_W_PlayerSkill *this,EDS_EquipSlotType param_1)

{
  UDS_M_InventoryBag *pUVar1;
  code *pcVar2;
  bool bVar3;
  FDS_SlotBaseTableRow *this_00;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  ChangeToBag(this);
  this_00 = FDS_SlotBaseTableRow::GetRef((longlong)(int)param_1,true);
  bVar3 = FDS_SlotBaseTableRow::IsValid(this_00);
  if ((bVar3) &&
     (pUVar1 = (this->M_InventoryBag).field0_0x0.DebugPtr, pUVar1 != (UDS_M_InventoryBag *)0x0)) {
    UDS_M_InventoryBag::OnClickedTab(pUVar1,this_00->ClickLinkedBag);
    pUVar1 = (this->M_InventoryBag).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2e0);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    (*pcVar2)(pUVar1,local_res18,0);
  }
  return;
}

// OnEventInventoryBagItemSlot @ 14bf63ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill::OnEventInventoryBagItemSlot
          (UDS_VM_W_PlayerSkill *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_2b8 [32];
  FWeakObjectPtr local_288;
  FWeakObjectPtr local_280;
  FWeakObjectPtr local_278;
  UObject *local_270;
  UObject *local_268 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"UDS_VM_W_PlayerSkill::OnEventInventoryBagItemSlot",0x31,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_258.Ptr,0x115,L"ModelEvent is Invalid.");
    if ((void *)local_258._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_258._padding_);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 == (UObject *)0x0) {
LAB_14bf63bd4:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bf63bd4;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_288.ObjectIndex = 0;
  local_288.ObjectSerialNumber = 0;
  local_270 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_288,(FObjectPtr)&local_270);
  bVar3 = FWeakObjectPtr::IsValid(&local_288);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_PlayerSkill::OnEventInventoryBagItemSlot",0x31,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x11c,L"ModelEventItemBase is Invalid.")
    ;
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_288);
  if (*(int *)&pUVar5[5].field_0x8 != 7) {
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 1));
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bf63d10;
  }
  pUVar5 = (UObject *)0x0;
LAB_14bf63d10:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_280.ObjectIndex = 0;
  local_280.ObjectSerialNumber = 0;
  local_268[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_280,(FObjectPtr)local_268);
  bVar3 = FWeakObjectPtr::IsValid(&local_280);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_280);
    (**(code **)(*(longlong *)pUVar5 + 0x3a0))(pUVar5);
    bVar3 = FWeakObjectPtr::IsValid(&local_278);
    if ((bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&local_278), bVar3)) {
      DS_ItemDataUtil::Use((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_278,0,0,0);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_439747089958698715>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerSkill\\DS_VM_W_PlayerSkill.cpp"
                       ,0x125,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnHaloPointChanged @ 14bf63f00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::OnHaloPointChanged(UDS_VM_W_PlayerSkill *this,int param_1)

{
  bool bVar1;
  FNumberFormattingOptions *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr aFStackX_10 [3];
  FName FStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  FNumberFormattingOptions FStack_28;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(aFStackX_10);
  if (bVar1) {
    pFVar2 = FNumberFormattingOptions::FNumberFormattingOptions(&FStack_28);
    FStack_48 = *(FName *)pFVar2;
    iStack_40 = pFVar2->MinimumIntegralDigits;
    iStack_3c = pFVar2->MaximumIntegralDigits;
    aFStackX_10[1].ObjectIndex = pFVar2->MinimumFractionalDigits;
    aFStackX_10[1].ObjectSerialNumber = pFVar2->MaximumFractionalDigits;
    pUVar3 = FWeakObjectPtr::Get(aFStackX_10);
    iStack_38 = aFStackX_10[1].ObjectIndex;
    iStack_34 = aFStackX_10[1].ObjectSerialNumber;
    FDS_Text::SetTextFromNumber
              (&this->HaloPoint,*(int *)&pUVar3[10].field_0xc,(FNumberFormattingOptions *)&FStack_48
              );
    iStack_40 = FFieldNotificationClassDescriptor::HaloPoint.BitNumber;
    FStack_48 = FFieldNotificationClassDescriptor::HaloPoint.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_48);
  }
  return;
}

// OnSetViewModel @ 14bf6f900

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill::OnSetViewModel
          (UDS_VM_W_PlayerSkill *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_ContentsOpen *)0x0) {
    if ((local_28.Object)->TabFrameID == PlayerSkill_Life) {
      this->PlayerSkillCategory = Life;
    }
    else if ((local_28.Object)->TabFrameID == PlayerSkill_Action) {
      this->PlayerSkillCategory = Action;
    }
    RefreshInfo(this);
    RefreshSkillSlots(this);
    RefreshSkillInfo(this);
    RefreshInventoryBag(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSkillLevelUpEvent @ 14bf71030

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill::OnSkillLevelUpEvent(UDS_VM_W_PlayerSkill *this,EDS_PlayerSkillType param_1)

{
  bool bVar1;
  FNumberFormattingOptions *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr aFStackX_10 [3];
  FName FStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  FNumberFormattingOptions FStack_28;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(aFStackX_10);
  if (bVar1) {
    pFVar2 = FNumberFormattingOptions::FNumberFormattingOptions(&FStack_28);
    FStack_48 = *(FName *)pFVar2;
    iStack_40 = pFVar2->MinimumIntegralDigits;
    iStack_3c = pFVar2->MaximumIntegralDigits;
    aFStackX_10[1].ObjectIndex = pFVar2->MinimumFractionalDigits;
    aFStackX_10[1].ObjectSerialNumber = pFVar2->MaximumFractionalDigits;
    pUVar3 = FWeakObjectPtr::Get(aFStackX_10);
    iStack_38 = aFStackX_10[1].ObjectIndex;
    iStack_34 = aFStackX_10[1].ObjectSerialNumber;
    FDS_Text::SetTextFromNumber
              (&this->HaloPoint,*(int *)&pUVar3[10].field_0xc,(FNumberFormattingOptions *)&FStack_48
              );
    iStack_40 = FFieldNotificationClassDescriptor::HaloPoint.BitNumber;
    FStack_48 = FFieldNotificationClassDescriptor::HaloPoint.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_48);
  }
  return;
}

// OnSkillResetEvent @ 14bf71130

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill::OnSkillResetEvent(UDS_VM_W_PlayerSkill *this,EDS_PlayerSkillType param_1)

{
  bool bVar1;
  FNumberFormattingOptions *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr aFStackX_10 [3];
  FName FStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  FNumberFormattingOptions FStack_28;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(aFStackX_10);
  if (bVar1) {
    pFVar2 = FNumberFormattingOptions::FNumberFormattingOptions(&FStack_28);
    FStack_48 = *(FName *)pFVar2;
    iStack_40 = pFVar2->MinimumIntegralDigits;
    iStack_3c = pFVar2->MaximumIntegralDigits;
    aFStackX_10[1].ObjectIndex = pFVar2->MinimumFractionalDigits;
    aFStackX_10[1].ObjectSerialNumber = pFVar2->MaximumFractionalDigits;
    pUVar3 = FWeakObjectPtr::Get(aFStackX_10);
    iStack_38 = aFStackX_10[1].ObjectIndex;
    iStack_34 = aFStackX_10[1].ObjectSerialNumber;
    FDS_Text::SetTextFromNumber
              (&this->HaloPoint,*(int *)&pUVar3[10].field_0xc,(FNumberFormattingOptions *)&FStack_48
              );
    iStack_40 = FFieldNotificationClassDescriptor::HaloPoint.BitNumber;
    FStack_48 = FFieldNotificationClassDescriptor::HaloPoint.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_48);
  }
  return;
}

// OnSkillSlotClickEvent @ 14bf711c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill::OnSkillSlotClickEvent(UDS_VM_W_PlayerSkill *this,EDS_PlayerSkillType param_1)

{
  EDS_PlayerSkillType EVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  this->SelectedPlayerSkillType = param_1;
  iVar2 = (this->SlotContextArray).ArrayNum;
  pFVar7 = (this->SlotContextArray).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->SlotContextArray).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FDS_VMC_PlayerSkill_SkillSlot,1>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    lVar4 = *(longlong *)pFVar7;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar1 = *(EDS_PlayerSkillType *)(lVar4 + 0x20);
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(bool *)(lVar4 + 0x21) = EVar1 == param_1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar7 = pFVar7 + 0x10;
  }
  RefreshSkillInfo(this);
  ChangeToInfo(this);
  return;
}

// Refresh @ 14bf74040

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::Refresh(UDS_VM_W_PlayerSkill *this)

{
  RefreshInfo(this);
  RefreshSkillSlots(this);
  RefreshSkillInfo(this);
  RefreshInventoryBag(this);
  return;
}

// RefreshInfo @ 14bf754e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::RefreshInfo(UDS_VM_W_PlayerSkill *this)

{
  bool bVar1;
  FNumberFormattingOptions *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  FName local_48;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  FNumberFormattingOptions local_28;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pFVar2 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
    local_48 = *(FName *)pFVar2;
    iStack_40 = pFVar2->MinimumIntegralDigits;
    iStack_3c = pFVar2->MaximumIntegralDigits;
    local_res10[1].ObjectIndex = pFVar2->MinimumFractionalDigits;
    local_res10[1].ObjectSerialNumber = pFVar2->MaximumFractionalDigits;
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    local_38 = local_res10[1].ObjectIndex;
    iStack_34 = local_res10[1].ObjectSerialNumber;
    FDS_Text::SetTextFromNumber
              (&this->HaloPoint,*(int *)&pUVar3[10].field_0xc,(FNumberFormattingOptions *)&local_48)
    ;
    iStack_40 = FFieldNotificationClassDescriptor::HaloPoint.BitNumber;
    local_48 = FFieldNotificationClassDescriptor::HaloPoint.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  return;
}

// RefreshInventoryBag @ 14bf759b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::RefreshInventoryBag(UDS_VM_W_PlayerSkill *this)

{
  undefined8 uVar1;
  code *pcVar2;
  FDS_ViewModelContext_ModelBase *pFVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UEnum *pUVar7;
  FName FVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UDS_M_InventoryBag *pUVar11;
  FDS_DataContainer *pFVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  UDS_LogManager *pUVar15;
  UClass *pUVar16;
  UDS_VM_W_InventoryBag *pUVar17;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  ForElementType<FSetElementId> FVar20;
  undefined1 auStackY_598 [32];
  undefined1 local_568 [8];
  FDelegateAllocation local_560;
  FWeakObjectPtr local_550;
  FName local_548;
  int iStack_540;
  undefined4 uStack_53c;
  undefined8 local_538;
  FString local_530;
  FString local_520;
  UDS_VM_W_PlayerSkill *local_510;
  undefined8 local_508 [2];
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_4f8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_4e8;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_4d0;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_4b8;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_4a0;
  TSharedPtr<FDS_ViewModelContext,1> local_488;
  FDestructionSentinel local_478;
  FDestructionSentinel local_460;
  FDelegateAllocation *local_448;
  undefined1 local_440 [8];
  undefined1 local_438 [8];
  FDS_DataContainer local_430;
  FDS_DataContainer local_390;
  undefined1 local_2e8 [128];
  undefined1 local_268 [128];
  undefined1 local_1e8 [32];
  void *local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  undefined1 local_1b0 [8];
  ForElementType<FSetElementId> local_1a8;
  int local_1a0;
  undefined1 local_198 [32];
  void *local_178;
  undefined4 local_170;
  uint local_16c;
  undefined4 local_168;
  undefined4 local_164;
  void *local_158;
  undefined4 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_598;
  local_1e8._0_8_ = (FScriptContainerElement *)0x0;
  local_1e8._8_8_ = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  local_1b4 = 0;
  local_1a8 = (ForElementType<FSetElementId>)0x0;
  local_1a0 = 0;
  local_198._0_8_ = (FScriptContainerElement *)0x0;
  local_198._8_8_ = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_164 = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_1bc = 0x80;
  local_1b8 = 0xffffffff;
  local_16c = 0x80;
  local_168 = 0xffffffff;
  pUVar7 = StaticEnum<enum_EDS_BagGroupType>();
  if (pUVar7 == (UEnum *)0x0) {
    ::FString::FString(&local_530,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar7,&local_530,0x18);
  }
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_1e8,(EDS_InventoryBagData)local_440);
  uVar1 = *(undefined8 *)FVar8;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar5 = uVar5 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_1e8._8_4_ != local_1b4) {
    FVar20 = (ForElementType<FSetElementId>)local_1b0;
    if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
      FVar20 = local_1a8;
    }
    iVar6 = *(int *)((longlong)FVar20 + (ulonglong)(local_1a0 - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      do {
        pFVar18 = (FScriptContainerElement *)(local_1e8._0_8_ + (longlong)iVar6 * 0x20);
        if (*(longlong *)pFVar18 == *(longlong *)FVar8) {
          if (pFVar18 != (FScriptContainerElement *)0x0) {
            pFVar18 = pFVar18 + 8;
            goto LAB_14bf75b39;
          }
          break;
        }
        iVar6 = *(int *)(pFVar18 + 0x18);
      } while (iVar6 != -1);
    }
  }
  pFVar18 = (FScriptContainerElement *)
            TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::EmplaceByHash<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)local_1e8,uVar5,(FName *)FVar8);
LAB_14bf75b39:
  iVar6 = local_530.Data.ArrayNum + -1;
  if (local_530.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::AssignRange((FString *)pFVar18,(wchar_t *)local_530.Data.AllocatorInstance.Data,iVar6);
  if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data.AllocatorInstance.Data);
  }
  pUVar7 = StaticEnum<enum_EDS_SortingType>();
  if (pUVar7 == (UEnum *)0x0) {
    ::FString::FString(&local_520,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar7,&local_520,1);
  }
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_1e8,(EDS_InventoryBagData)local_438);
  uVar1 = *(undefined8 *)FVar8;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar5 = uVar5 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_1e8._8_4_ != local_1b4) {
    FVar20 = (ForElementType<FSetElementId>)local_1b0;
    if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
      FVar20 = local_1a8;
    }
    iVar6 = *(int *)((longlong)FVar20 + (ulonglong)(local_1a0 - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      do {
        pFVar18 = (FScriptContainerElement *)(local_1e8._0_8_ + (longlong)iVar6 * 0x20);
        if (*(longlong *)pFVar18 == *(longlong *)FVar8) {
          if (pFVar18 != (FScriptContainerElement *)0x0) {
            pFVar18 = pFVar18 + 8;
            goto LAB_14bf75c3d;
          }
          break;
        }
        iVar6 = *(int *)(pFVar18 + 0x18);
      } while (iVar6 != -1);
    }
  }
  pFVar18 = (FScriptContainerElement *)
            TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::EmplaceByHash<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)local_1e8,uVar5,(FName *)FVar8);
LAB_14bf75c3d:
  iVar6 = local_520.Data.ArrayNum + -1;
  if (local_520.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::AssignRange((FString *)pFVar18,(wchar_t *)local_520.Data.AllocatorInstance.Data,iVar6);
  if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data.AllocatorInstance.Data);
  }
  pUVar11 = (this->M_InventoryBag).field0_0x0.DebugPtr;
  if (pUVar11 == (UDS_M_InventoryBag *)0x0) {
    pUVar9 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_268,pUVar10);
    local_268._8_8_ = pUVar9;
    pUVar11 = (UDS_M_InventoryBag *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_268);
    if (local_268._64_8_ != 0) {
      plVar19 = (longlong *)(local_268 + 0x50);
      if ((longlong *)local_268._104_8_ != (longlong *)0x0) {
        plVar19 = (longlong *)local_268._104_8_;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar11 == (UDS_M_InventoryBag *)0x0)) {
      (this->M_InventoryBag).field0_0x0.DebugPtr = pUVar11;
      if (pUVar11 == (UDS_M_InventoryBag *)0x0) {
        pUVar15 = UDS_LogManager::GetInst();
        if (pUVar15 != (UDS_LogManager *)0x0) {
          pUVar15 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_W_PlayerSkill::RefreshInventoryBag",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar15,1,Warning,local_148.Ptr,0xb5,L"InventoryBagModel is nullptr.");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        goto LAB_14bf76160;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
      (this->M_InventoryBag).field0_0x0.DebugPtr = pUVar11;
    }
    local_4e8._16_8_ = 0;
    local_4e8._0_8_ = 0;
    local_4e8._8_8_ = 0;
    local_4d0._16_8_ = 0;
    local_4d0._0_8_ = 0;
    local_4d0._8_8_ = 0;
    pFVar12 = FDS_DataContainer::FDS_DataContainer(&local_430,(FDS_DataContainer *)local_1e8);
    UDS_M_InventoryBag::InitModel(pUVar11,pFVar12,&local_4d0,&local_4e8);
    pUVar11 = (this->M_InventoryBag).field0_0x0.DebugPtr;
    local_548 = (FName)OnEventInventoryBagItemSlot;
    uStack_53c = local_488.SharedReferenceCount.ReferenceController._4_4_;
    iStack_540 = 0;
    local_568 = (undefined1  [8])0x0;
    local_560.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_560.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,
               (FWriteAccessScope *)&local_460);
    local_448 = &local_560;
    puVar13 = UE::Core::Private::DelegateAllocate(0x30,&local_560);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &
                 ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar13[3] = 0;
      local_510 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_510);
      *(FName *)(puVar13 + 4) = local_548;
      puVar13[5] = CONCAT44(uStack_53c,iStack_540);
    }
    if (local_460.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_460.Accessor,&local_460);
    }
    UDS_ModelBase::AddUpdateModelDelegate
              ((UDS_ModelBase *)pUVar11,
               (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)local_568);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,
               (FWriteAccessScope *)&local_478);
    if ((local_560.DelegateSize != 0) &&
       (local_560.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_560.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_560,0,0,0x10);
      local_560.DelegateSize = 0;
    }
    if (local_478.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
    }
    if (local_560.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_560.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_568);
  }
  else {
    local_4b8._16_8_ = 0;
    local_4b8._0_8_ = 0;
    local_4b8._8_8_ = 0;
    local_4a0._16_8_ = 0;
    local_4a0._0_8_ = 0;
    local_4a0._8_8_ = 0;
    pFVar12 = FDS_DataContainer::FDS_DataContainer(&local_390,(FDS_DataContainer *)local_1e8);
    UDS_M_InventoryBag::InitModel(pUVar11,pFVar12,&local_4a0,&local_4b8);
    pUVar11 = (this->M_InventoryBag).field0_0x0.DebugPtr;
    local_508[0] = 0;
    local_550.ObjectIndex = 0;
    local_550.ObjectSerialNumber = 0;
    pcVar2 = *(code **)(pUVar11->_padding_ + 0x2e0);
    FWeakObjectPtr::operator=(&local_550,(FObjectPtr)local_508);
    (*pcVar2)(pUVar11,local_550,0);
  }
  if ((this->VM_InventoryBag).field0_0x0.DebugPtr == (UDS_VM_W_InventoryBag *)0x0) {
    local_538 = 0;
    pUVar10 = Z_Construct_UClass_UDS_VM_W_InventoryBag_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar16 = Z_Construct_UClass_UDS_VM_W_InventoryBag_NoRegister();
    CheckIsClassChildOf_Internal(pUVar16,pUVar10);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_2e8,pUVar10);
    local_2e8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_2e8._56_8_ = (UPackage *)0x0;
    local_2e8._16_4_ = 0;
    local_2e8._20_4_ = 0;
    local_2e8._24_4_ = RF_Transient;
    local_2e8._40_8_ = (UObject *)0x0;
    local_2e8[0x20] = false;
    local_2e8._8_8_ = this;
    pUVar17 = (UDS_VM_W_InventoryBag *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2e8);
    if (local_2e8._64_8_ != 0) {
      plVar19 = (longlong *)(local_2e8 + 0x50);
      if ((longlong *)local_2e8._104_8_ != (longlong *)0x0) {
        plVar19 = (longlong *)local_2e8._104_8_;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (pUVar17 != (UDS_VM_W_InventoryBag *)0x0) {
      *(undefined1 *)((longlong)&pUVar17->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar17 != (UDS_VM_W_InventoryBag *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    (this->VM_InventoryBag).field0_0x0.DebugPtr = pUVar17;
    if (pUVar17 == (UDS_VM_W_InventoryBag *)0x0) goto LAB_14bf76160;
  }
  MakeContext<FDS_ViewModelContext_ModelBase>(&local_4f8);
  pFVar3 = local_4f8.Object;
  if ((local_4f8.Object == (FDS_ViewModelContext_ModelBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)&pFVar3->_padding_ = 0x188;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 = (this->M_InventoryBag).field0_0x0.DebugPtr, pUVar11 != (UDS_M_InventoryBag *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (pFVar3->Model).field0_0x0 = (TObjectPtr<UDS_ModelBase>_u_0)(this->M_InventoryBag).field0_0x0;
  pUVar17 = (this->VM_InventoryBag).field0_0x0.DebugPtr;
  local_488.Object = (FDS_ViewModelContext *)local_4f8.Object;
  local_488.SharedReferenceCount.ReferenceController =
       local_4f8.SharedReferenceCount.ReferenceController;
  if (local_4f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar17,&local_488);
  iStack_540 = FFieldNotificationClassDescriptor::VM_InventoryBag.BitNumber;
  local_548 = FFieldNotificationClassDescriptor::VM_InventoryBag.FieldName;
  (**(code **)(this->_padding_ + 0x38))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4f8.SharedReferenceCount.ReferenceController);
LAB_14bf76160:
  local_150 = 0;
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_198,0,local_198._8_4_);
  iVar6 = SUB84(local_198._8_8_,4);
  local_198._8_8_ = local_198._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_198,0,(int *)(local_198 + 0xc));
  }
  local_168 = 0xffffffff;
  local_164 = 0;
  local_170 = 0;
  if (0x80 < local_16c) {
    local_16c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),0);
  }
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._0_8_);
  }
  local_1a0 = 0;
  if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1e8,0,local_1e8._8_4_);
  iVar6 = SUB84(local_1e8._8_8_,4);
  local_1e8._8_8_ = local_1e8._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_1e8,0,(int *)(local_1e8 + 0xc));
  }
  local_1b4 = 0;
  local_1c0 = 0;
  local_1b8 = 0xffffffff;
  if (0x80 < local_1bc) {
    local_1bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10),0);
  }
  if (local_1c8 != (void *)0x0) {
    FMemory::Free(local_1c8);
  }
  if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._0_8_);
  }
  return;
}

// RefreshSkillInfo @ 14bf77440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::RefreshSkillInfo(UDS_VM_W_PlayerSkill *this)

{
  EDS_PlayerSkillType EVar1;
  UDS_VM_W_PlayerSkill_SkillInfo *this_00;
  code *pcVar2;
  bool bVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  this_00 = (this->VM_SkillInfo).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_W_PlayerSkill_SkillInfo *)0x0) {
    EVar1 = this->SelectedPlayerSkillType;
    pFVar4 = ::operator_new(0x28);
    pFVar6 = (FDS_ViewModelContext *)0x0;
    pFVar7 = pFVar6;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->ViewModelTemplateKey = None;
      pFVar4->_padding_ = (longlong)&___7FDS_VMC_PlayerSkill_SkillInfo__6B_;
      pFVar7 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_VMC_PlayerSkill_SkillInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar7;
      pFVar6 = pFVar4;
    }
    if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar5 = FDS_VMC_PlayerSkill_SkillInfo::StaticStruct();
    *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar5;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_28.Object = pFVar7;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    *(EDS_PlayerSkillType *)&pFVar7[1]._padding_ = EVar1;
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_18.Object = pFVar7;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  return;
}

// RefreshSkillSlots @ 14bf77ea0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::RefreshSkillSlots(UDS_VM_W_PlayerSkill *this)

{
  int *piVar1;
  FWeakObjectPtr *this_00;
  TArray<TSharedPtr<FDS_VMC_PlayerSkill_SkillSlot,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  EDS_PlayerSkillCategoryType EVar3;
  undefined1 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_01;
  UDS_UserObjectListItem *this_02;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  FIdentityFunctor local_res8 [8];
  undefined8 local_res10;
  UDS_UserObjectListItem *local_res18;
  FName local_98;
  int local_90;
  FDS_ViewModelContext *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  ForAnyElementType local_78;
  uint local_70;
  uint local_6c;
  TArray<FDS_PlayerSkillBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEvent_SkillSlots);
  pTVar2 = &this->SlotContextArray;
  DestructItems<TSharedPtr<FDS_VMC_PlayerSkill_SkillSlot,1>,int>
            ((TSharedPtr<FDS_VMC_PlayerSkill_SkillSlot,1> *)(pTVar2->AllocatorInstance).Data,
             (this->SlotContextArray).ArrayNum);
  pFVar13 = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SlotContextArray).ArrayMax;
  iVar9 = 0;
  (this->SlotContextArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  EVar3 = this->PlayerSkillCategory;
  FDS_PlayerSkillBaseTableRow::GetAll(&local_68);
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_6c = 0;
  pFVar17 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
  pFVar12 = pFVar13;
  FVar16.Data = pFVar13;
  for (FVar14.Data = local_68.AllocatorInstance.Data; FVar14.Data != pFVar17;
      FVar14.Data = FVar14.Data + 8) {
    if (((*(FDS_PlayerSkillBaseTableRow **)FVar14.Data)->isVisible != false) &&
       ((*(FDS_PlayerSkillBaseTableRow **)FVar14.Data)->SkillCategoryType == EVar3)) {
      uVar8 = (uint)pFVar12;
      if ((FVar16.Data <= FVar14.Data) &&
         ((FVar14.Data < FVar16.Data + (longlong)(int)local_6c * 8 &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), FVar16.Data = local_78.Data, uVar8 = local_70, bVar7)))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar8 == local_6c) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_78,(int *)&local_6c);
        FVar16.Data = local_78.Data;
      }
      local_70 = uVar8 + 1;
      *(FDS_PlayerSkillBaseTableRow **)(FVar16.Data + (longlong)(int)uVar8 * 8) =
           *(FDS_PlayerSkillBaseTableRow **)FVar14.Data;
      pFVar12 = (FScriptContainerElement *)(ulonglong)local_70;
      FVar16.Data = local_78.Data;
    }
    iVar9 = (int)pFVar12;
  }
  AlgoImpl::
  IntroSortInternal<FDS_PlayerSkillBaseTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_PlayerSkillBaseTableRow_const_*,_FDS_PlayerSkillBaseTableRow::GetByCategory_::__l2::<lambda_2>_>_>
            ((FDS_PlayerSkillBaseTableRow **)FVar16.Data,iVar9,local_res8[0],
             (<lambda_2> *)local_res8);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  pFVar17 = pFVar13;
  if (0 < (int)local_70) {
    do {
      uVar15 = (uint)pFVar13;
      uVar8 = 0;
      if ((int)uVar15 < (int)local_70) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)(pFVar17 + local_78.Data);
      pFVar10 = ::operator_new(0x30);
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar10->ViewModelTemplateKey = 0;
        *(undefined4 *)&pFVar10[1]._padding_ = 0;
        pFVar10[1].DerivedStaticStruct = (UStruct *)0x0;
        pFVar10->_padding_ = (longlong)&___7FDS_VMC_PlayerSkill_SkillSlot__6B_;
        this_00 = (FWeakObjectPtr *)((longlong)&pFVar10[1]._padding_ + 4);
        pFVar10->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar10->ViewModelName).ComparisonIndex = 0;
        (pFVar10->ViewModelName).Number = 0;
        this_00->ObjectIndex = 0;
        local_res10 = 0;
        FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res10);
      }
      local_88 = pFVar10;
      pTStack_80 = ::operator_new(0x20);
      if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
        pTStack_80->SharedReferenceCount = (atomic<int>)0x1;
        pTStack_80[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTStack_80->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_VMC_PlayerSkill_SkillSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTStack_80->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTStack_80[1].SharedReferenceCount = pFVar10;
      }
      if ((local_88 == (FDS_ViewModelContext *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = local_88;
      pUVar11 = FDS_VMC_PlayerSkill_SkillSlot::StaticStruct();
      pFVar10->DerivedStaticStruct = (UStruct *)pUVar11;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        local_58.Object = local_88;
        local_58.SharedReferenceCount.ReferenceController = pTStack_80;
        if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_80->SharedReferenceCount =
               (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      if ((local_88 == (FDS_ViewModelContext *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_88->ViewModelTemplateKey = W_PlayerSkill_SkillSlot;
      uVar4 = *(undefined1 *)(lVar5 + 8);
      if ((local_88 == (FDS_ViewModelContext *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)&local_88[1]._padding_ = uVar4;
      if ((local_88 == (FDS_ViewModelContext *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)((longlong)&local_88[1]._padding_ + 1) = 0;
      if (uVar15 == 0) {
        if ((local_88 == (FDS_ViewModelContext *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined1 *)((longlong)&local_88[1]._padding_ + 1) = 1;
        this->SelectedPlayerSkillType = *(EDS_PlayerSkillType *)(lVar5 + 8);
      }
      this_02 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_02 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      local_48.Object = local_88;
      local_48.SharedReferenceCount.ReferenceController = pTStack_80;
      if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(this_02,&local_48);
      local_res18 = this_02;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_02 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEvent_SkillSlots,
                 (TObjectPtr<UDS_UserObjectListItem>)&local_res18);
      pFVar13 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->SlotContextArray).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SlotContextArray).ArrayNum = iVar9 + 1;
      pFVar13 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(FDS_ViewModelContext **)pFVar13 = local_88;
      *(TReferenceControllerBase<1> **)(pFVar13 + 8) = pTStack_80;
      if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_80);
      pFVar13 = (FScriptContainerElement *)(ulonglong)(uVar15 + 1);
      pFVar17 = pFVar17 + 8;
    } while ((int)(uVar15 + 1) < (int)local_70);
  }
  local_90 = FFieldNotificationClassDescriptor::EntryBindingEvent_SkillSlots.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::EntryBindingEvent_SkillSlots.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// UnbindModel @ 14bf857f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill::UnbindModel(UDS_VM_W_PlayerSkill *this)

{
  bool bVar1;
  UDS_PlayerSkillEvent *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  
  pUVar2 = UDS_PlayerSkillEvent::GetEvent();
  if (pUVar2 != (UDS_PlayerSkillEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnSkillSlotSelectDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnSkillSlotLevelUpDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnSkillResetDelegate,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnEquipSlotSelectDelegate,this);
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[3].field_0x20,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

