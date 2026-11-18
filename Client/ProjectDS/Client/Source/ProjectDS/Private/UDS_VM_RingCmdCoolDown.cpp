// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b6d4e90

UClass * __cdecl UDS_VM_RingCmdCoolDown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RingCmdCoolDown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RingCmdCoolDown",
               &Z_Registration_Info_UClass_UDS_VM_RingCmdCoolDown.InnerSingleton,
               StaticRegisterNativesUDS_VM_RingCmdCoolDown,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RingCmdCoolDown>,
               InternalVTableHelperCtorCaller<UDS_VM_RingCmdCoolDown>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RingCmdCoolDown.InnerSingleton;
}

// UDS_VM_RingCmdCoolDown @ 14b6d9460

UDS_VM_RingCmdCoolDown * __thiscall
UDS_VM_RingCmdCoolDown::UDS_VM_RingCmdCoolDown(UDS_VM_RingCmdCoolDown *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RingCmdCoolDown__6B_;
  (this->VMCooltime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  this->RingCmdType = None;
  this->RingCmdContentId = 0;
  return this;
}

// UDS_VM_RingCmdCoolDown @ 14b6d94c0

UDS_VM_RingCmdCoolDown * __thiscall
UDS_VM_RingCmdCoolDown::UDS_VM_RingCmdCoolDown
          (UDS_VM_RingCmdCoolDown *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RingCmdCoolDown__6B_;
  (this->VMCooltime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  this->RingCmdType = None;
  this->RingCmdContentId = 0;
  return this;
}

// ~UDS_VM_RingCmdCoolDown @ 14b6daa70

void __thiscall UDS_VM_RingCmdCoolDown::~UDS_VM_RingCmdCoolDown(UDS_VM_RingCmdCoolDown *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RingCmdCoolDown__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dcf30

IClassDescriptor * __thiscall
UDS_VM_RingCmdCoolDown::GetFieldNotificationDescriptor(UDS_VM_RingCmdCoolDown *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RingCmdCoolDown::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ddbc0

UClass * __cdecl UDS_VM_RingCmdCoolDown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RingCmdCoolDown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RingCmdCoolDown",
               &Z_Registration_Info_UClass_UDS_VM_RingCmdCoolDown.InnerSingleton,
               StaticRegisterNativesUDS_VM_RingCmdCoolDown,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RingCmdCoolDown>,
               InternalVTableHelperCtorCaller<UDS_VM_RingCmdCoolDown>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RingCmdCoolDown.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RingCmdCoolDown @ 14b6ddf90

void __cdecl UDS_VM_RingCmdCoolDown::StaticRegisterNativesUDS_VM_RingCmdCoolDown(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_RingCmdCoolDown_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execActionCooltimeChanged @ 14b6df1a0

void __cdecl
UDS_VM_RingCmdCoolDown::execActionCooltimeChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  EDS_CoolDownType local_res20 [2];
  FWeakObjectPtr local_28 [2];
  
  local_res20[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
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
  bVar2 = local_res10[0] != 0;
  local_28[0].ObjectIndex = 0;
  local_28[0].ObjectSerialNumber = 0;
  FWeakObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ActionCooltimeChanged
            ((UDS_VM_RingCmdCoolDown *)param_1,local_res20[0],bVar2,
             (TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>)local_28[0]);
  return;
}

// execItemCoolTimeChanged @ 14b6df300

void __cdecl
UDS_VM_RingCmdCoolDown::execItemCoolTimeChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_InventoryUpdate local_res10;
  
  local_res10 = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ItemCoolTimeChanged((UDS_VM_RingCmdCoolDown *)param_1,local_res10);
  return;
}

// ActionBind @ 14be10b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RingCmdCoolDown::ActionBind(UDS_VM_RingCmdCoolDown *this)

{
  double dVar1;
  bool bVar2;
  EDS_CoolDownType EVar3;
  FDS_ActionBaseTableRow *pFVar4;
  UDS_TimeCoolDownManager *pUVar5;
  UDS_LogManager *pUVar6;
  float fVar7;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [288];
  void *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar4 = FDS_ActionBaseTableRow::GetRef((longlong)this->RingCmdContentId,true);
  pUVar5 = UDS_TimeCoolDownManager::GetInst();
  if (pUVar5 == (UDS_TimeCoolDownManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_48 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x20),
                 "UDS_VM_RingCmdCoolDown::ActionBind",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_40,0xf7,L"timeCoolDownManager is nullptr.");
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->OnChangedTimeCoolDownEvent,this);
    local_168._8_4_ = 0;
    local_168._0_8_ = ActionCooltimeChanged;
    local_168._24_8_ = (ulonglong)(uint)local_168._12_4_ << 0x20;
    local_168._16_8_ = ActionCooltimeChanged;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_CoolDownType,bool,TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_RingCmdCoolDown>
              (&pUVar5->OnChangedTimeCoolDownEvent,(UDS_VM_RingCmdCoolDown *)local_168,
               (pmf_2d5452d3 *)this);
    EVar3 = FDS_RingCommandService::GetActionCoolDownType(pFVar4->ID);
    if ((this->VMCooltime).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
      bVar2 = UDS_TimeCoolDownManager::HasCoolDown(EVar3,0);
      if (bVar2) {
        fVar7 = FDS_RingCommandService::GetActionFunctionCooltime(pFVar4->ID);
        dVar1 = UDS_TimeCoolDownManager::GetCoolDownRemainTime(EVar3,0);
        SetCooltime(this,0.0,fVar7,fVar7 - (float)dVar1,fVar7);
      }
      else {
        SetCooltime(this,0.0,0.0,0.0,0.0);
      }
    }
  }
  return;
}

// ActionCooltimeChanged @ 14be10d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdCoolDown::ActionCooltimeChanged
          (UDS_VM_RingCmdCoolDown *this,EDS_CoolDownType param_1,bool param_2,
          TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr> param_3)

{
  bool bVar1;
  EDS_CoolDownType EVar2;
  FDS_ActionBaseTableRow *pFVar3;
  UDS_TimeCoolDownManager *pUVar4;
  UDS_LogManager *pUVar5;
  float fVar6;
  double dVar7;
  FWeakObjectPtr local_res20;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res20 = param_3.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar1) {
    return;
  }
  if (param_2) {
    pFVar3 = FDS_ActionBaseTableRow::GetRef((longlong)this->RingCmdContentId,param_2);
    pUVar4 = UDS_TimeCoolDownManager::GetInst();
    if (pUVar4 == (UDS_TimeCoolDownManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_RingCmdCoolDown::ActionCooltimeChanged",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0xa0,L"timeCoolDownManager is nullptr.");
      if ((void *)local_148._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_148._padding_);
      return;
    }
    if ((this->VMCooltime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
      return;
    }
    EVar2 = FDS_RingCommandService::GetActionCoolDownType(pFVar3->ID);
    bVar1 = UDS_TimeCoolDownManager::HasCoolDown(EVar2,0);
    if (bVar1) {
      fVar6 = FDS_RingCommandService::GetActionFunctionCooltime(pFVar3->ID);
      dVar7 = UDS_TimeCoolDownManager::GetCoolDownRemainTime(EVar2,0);
      SetCooltime(this,0.0,fVar6,fVar6 - (float)dVar7,fVar6);
      return;
    }
  }
  else if ((this->VMCooltime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    return;
  }
  SetCooltime(this,0.0,0.0,0.0,0.0);
  return;
}

// ActionUnbind @ 14be10ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RingCmdCoolDown::ActionUnbind(UDS_VM_RingCmdCoolDown *this)

{
  UDS_TimeCoolDownManager *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_TimeCoolDownManager::GetInst();
  if (pUVar1 == (UDS_TimeCoolDownManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_RingCmdCoolDown::ActionUnbind",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x113,L"timeCoolDownManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedTimeCoolDownEvent,this);
  }
  return;
}

// BindModel @ 14be12ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RingCmdCoolDown::BindModel(UDS_VM_RingCmdCoolDown *this)

{
  EDS_RingCmdType EVar1;
  double dVar2;
  bool bVar3;
  EDS_CoolDownType EVar4;
  FDS_ActionBaseTableRow *pFVar5;
  UDS_TimeCoolDownManager *pUVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  UDS_ItemDataSet *pUVar9;
  float fVar10;
  float fVar11;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178;
  undefined1 local_170 [16];
  undefined8 uStack_160;
  code *local_158;
  longlong lStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  EVar1 = this->RingCmdType;
  if (EVar1 == Item) {
    DS_ItemDataUtil::GetItemDataByUID((long64)local_170);
    bVar3 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)local_170,(void *)0x0);
    if (bVar3) {
      return;
    }
    DS_ItemDataUtil::GetItemDataSet();
    bVar3 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_178,(void *)0x0);
    if (bVar3) {
      return;
    }
    pUVar8 = FWeakObjectPtr::Get(&local_178);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8[0x13].field_0x18,this);
    uStack_160 = (ulonglong)uStack_160._4_4_ << 0x20;
    local_170._8_8_ = ItemCoolTimeChanged;
    local_158 = ItemCoolTimeChanged;
    lStack_150 = uStack_160;
    pUVar8 = FWeakObjectPtr::Get(&local_178);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InventoryUpdate),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_RingCmdCoolDown>
              (&pUVar8[0x13].field_0x18,(UDS_VM_RingCmdCoolDown *)(local_170 + 8),
               (pmf_5f91d208 *)this);
    pUVar9 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_178);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_170);
    bVar3 = UDS_ItemDataSet::IsCooltimeInProgress(pUVar9,*(int *)&pUVar8[8].field_0x10);
    if (bVar3) {
      pUVar9 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_178);
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_170);
      fVar10 = UDS_ItemDataSet::GetItemCooltimeOrigin(pUVar9,*(int *)&pUVar8[8].field_0x10);
      pUVar9 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_178);
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_170);
      fVar11 = UDS_ItemDataSet::GetItemCooltimeRemain(pUVar9,*(int *)&pUVar8[8].field_0x10);
      SetCooltime(this,0.0,fVar10,fVar10 - fVar11,fVar10);
      return;
    }
    SetCooltime(this,0.0,0.0,0.0,0.0);
    return;
  }
  if ((EVar1 != Menu) && (EVar1 == Action)) {
    pFVar5 = FDS_ActionBaseTableRow::GetRef((longlong)this->RingCmdContentId,true);
    pUVar6 = UDS_TimeCoolDownManager::GetInst();
    if (pUVar6 == (UDS_TimeCoolDownManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_RingCmdCoolDown::ActionBind",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_148.Ptr,0xf7,L"timeCoolDownManager is nullptr.");
      if ((void *)local_148._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_148._padding_);
      return;
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangedTimeCoolDownEvent,this);
    uStack_160 = (ulonglong)uStack_160._4_4_ << 0x20;
    local_170._8_8_ = ActionCooltimeChanged;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_CoolDownType,bool,TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_RingCmdCoolDown>
              (&pUVar6->OnChangedTimeCoolDownEvent,(UDS_VM_RingCmdCoolDown *)local_170,
               (pmf_2d5452d3 *)this);
    EVar4 = FDS_RingCommandService::GetActionCoolDownType(pFVar5->ID);
    if ((this->VMCooltime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
      return;
    }
    bVar3 = UDS_TimeCoolDownManager::HasCoolDown(EVar4,0);
    if (bVar3) {
      fVar10 = FDS_RingCommandService::GetActionFunctionCooltime(pFVar5->ID);
      dVar2 = UDS_TimeCoolDownManager::GetCoolDownRemainTime(EVar4,0);
      fVar11 = fVar10 - (float)dVar2;
      goto LAB_14be13085;
    }
  }
  fVar11 = 0.0;
  fVar10 = 0.0;
LAB_14be13085:
  SetCooltime(this,0.0,fVar10,fVar11,fVar10);
  return;
}

// InitViewModel @ 14be25620

void __thiscall UDS_VM_RingCmdCoolDown::InitViewModel(UDS_VM_RingCmdCoolDown *this)

{
  UDS_VM_Progress *this_00;
  
  if ((this->VMCooltime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    this_00 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->VMCooltime).field0_0x0.DebugPtr = this_00;
    UDS_VM_Progress::SetIncreaseType(this_00,DeltaTime);
    SetCooltime(this,0.0,0.0,0.0,0.0);
  }
  return;
}

// ItemBind @ 14be27ed0

void __thiscall UDS_VM_RingCmdCoolDown::ItemBind(UDS_VM_RingCmdCoolDown *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_ItemDataSet *pUVar3;
  float fVar4;
  float fVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [2];
  
  DS_ItemDataUtil::GetItemDataByUID((long64)local_res10);
  bVar1 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    DS_ItemDataUtil::GetItemDataSet();
    bVar1 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x13].field_0x18,this
                );
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_InventoryUpdate),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_RingCmdCoolDown>
                (&pUVar2[0x13].field_0x18,(UDS_VM_RingCmdCoolDown *)(local_res10 + 1),
                 (pmf_5f91d208 *)this);
      pUVar3 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res8);
      pUVar2 = FWeakObjectPtr::Get(local_res10);
      bVar1 = UDS_ItemDataSet::IsCooltimeInProgress(pUVar3,*(int *)&pUVar2[8].field_0x10);
      if (bVar1) {
        pUVar3 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res8);
        pUVar2 = FWeakObjectPtr::Get(local_res10);
        fVar4 = UDS_ItemDataSet::GetItemCooltimeOrigin(pUVar3,*(int *)&pUVar2[8].field_0x10);
        pUVar3 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res8);
        pUVar2 = FWeakObjectPtr::Get(local_res10);
        fVar5 = UDS_ItemDataSet::GetItemCooltimeRemain(pUVar3,*(int *)&pUVar2[8].field_0x10);
        SetCooltime(this,0.0,fVar4,fVar4 - fVar5,fVar4);
        return;
      }
      SetCooltime(this,0.0,0.0,0.0,0.0);
    }
  }
  return;
}

// ItemCoolTimeChanged @ 14be28050

void __thiscall
UDS_VM_RingCmdCoolDown::ItemCoolTimeChanged
          (UDS_VM_RingCmdCoolDown *this,EDS_InventoryUpdate param_1)

{
  bool bVar1;
  UDS_ItemDataSet *pUVar2;
  UObject *pUVar3;
  float fVar4;
  float fVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  if ((char)param_1 < '\0') {
    DS_ItemDataUtil::GetItemDataByUID((long64)local_res18);
    bVar1 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)local_res18,(void *)0x0);
    if (!bVar1) {
      DS_ItemDataUtil::GetItemDataSet();
      bVar1 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_res10,(void *)0x0)
      ;
      if (!bVar1) {
        pUVar2 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res10);
        pUVar3 = FWeakObjectPtr::Get(local_res18);
        bVar1 = UDS_ItemDataSet::IsCooltimeInProgress(pUVar2,*(int *)&pUVar3[8].field_0x10);
        if (bVar1) {
          pUVar2 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res10);
          pUVar3 = FWeakObjectPtr::Get(local_res18);
          fVar4 = UDS_ItemDataSet::GetItemCooltimeOrigin(pUVar2,*(int *)&pUVar3[8].field_0x10);
          pUVar2 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res10);
          pUVar3 = FWeakObjectPtr::Get(local_res18);
          fVar5 = UDS_ItemDataSet::GetItemCooltimeRemain(pUVar2,*(int *)&pUVar3[8].field_0x10);
          SetCooltime(this,0.0,fVar4,fVar4 - fVar5,fVar4);
        }
      }
    }
  }
  else if (((ulonglong)param_1 >> 8 & 1) != 0) {
    SetCooltime(this,0.0,0.0,0.0,0.0);
    return;
  }
  return;
}

// ItemUnbind @ 14be28390

void __thiscall UDS_VM_RingCmdCoolDown::ItemUnbind(UDS_VM_RingCmdCoolDown *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  DS_ItemDataUtil::GetItemDataSet();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x13].field_0x18,this);
  }
  return;
}

// MenuBind @ 14be28b00

void __thiscall UDS_VM_RingCmdCoolDown::MenuBind(UDS_VM_RingCmdCoolDown *this)

{
  SetCooltime(this,0.0,0.0,0.0,0.0);
  return;
}

// MenuUnbind @ 14be28b30

void __thiscall UDS_VM_RingCmdCoolDown::MenuUnbind(UDS_VM_RingCmdCoolDown *this)

{
  return;
}

// OnSetViewModel @ 14be3e3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdCoolDown::OnSetViewModel
          (UDS_VM_RingCmdCoolDown *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_RingCmdSlotInfo,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_RingCmdCoolDown::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x2d,L"InViewModelContext is nullptr")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148.Object = pFVar2;
    SafeCast<FDS_ViewModelContext_RingCmdSlotInfo>(&local_158,&local_148);
    if (local_158.Object == (FDS_ViewModelContext_RingCmdSlotInfo *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_RingCmdCoolDown::OnSetViewModel",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x34,L"context is nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      this->RingCmdType = (local_158.Object)->RingCmdType;
      this->RingCmdContentId = (local_158.Object)->RingCmdContentId;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnViewDestruct @ 14be45230

void __thiscall UDS_VM_RingCmdCoolDown::OnViewDestruct(UDS_VM_RingCmdCoolDown *this)

{
  (**(code **)(this->_padding_ + 0x2f8))();
  UDS_ViewModelBase::OnViewDestruct((UDS_ViewModelBase *)this);
  return;
}

// ResetCooltime @ 14be481c0

void __thiscall UDS_VM_RingCmdCoolDown::ResetCooltime(UDS_VM_RingCmdCoolDown *this)

{
  SetCooltime(this,0.0,0.0,0.0,0.0);
  return;
}

// SetCooltime @ 14be4a3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdCoolDown::SetCooltime
          (UDS_VM_RingCmdCoolDown *this,float param_1,float param_2,float param_3,float param_4)

{
  UDS_VM_Progress *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = (this->VMCooltime).field0_0x0.DebugPtr;
  if (this_00 == (UDS_VM_Progress *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_RingCmdCoolDown::SetCooltime",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_168.Ptr,0x123,L"VMCooltime is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    UDS_VM_Progress::SetIncreaseType(this_00,DeltaTime);
    UDS_VM_Progress::SetMinValue((this->VMCooltime).field0_0x0.DebugPtr,param_1);
    UDS_VM_Progress::SetMaxValue((this->VMCooltime).field0_0x0.DebugPtr,param_2);
    UDS_VM_Progress::SetCurrentValue((this->VMCooltime).field0_0x0.DebugPtr,param_3);
    UDS_VM_Progress::SetTargetValue((this->VMCooltime).field0_0x0.DebugPtr,param_4);
  }
  return;
}

// UnbindModel @ 14be55b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RingCmdCoolDown::UnbindModel(UDS_VM_RingCmdCoolDown *this)

{
  EDS_RingCmdType EVar1;
  bool bVar2;
  UDS_TimeCoolDownManager *pUVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  EVar1 = this->RingCmdType;
  if (EVar1 == Item) {
    DS_ItemDataUtil::GetItemDataSet();
    bVar2 = FWeakObjectPtr::IsValid(local_148);
    if (!bVar2) {
      return;
    }
    pUVar5 = FWeakObjectPtr::Get(local_148);
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[0x13].field_0x18;
  }
  else {
    if (EVar1 == Menu) {
      return;
    }
    if (EVar1 != Action) {
      return;
    }
    pUVar3 = UDS_TimeCoolDownManager::GetInst();
    if (pUVar3 == (UDS_TimeCoolDownManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_RingCmdCoolDown::ActionUnbind",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x113,L"timeCoolDownManager is nullptr.");
      if ((void *)local_138._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_138._padding_);
      return;
    }
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              &pUVar3->OnChangedTimeCoolDownEvent;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  return;
}

