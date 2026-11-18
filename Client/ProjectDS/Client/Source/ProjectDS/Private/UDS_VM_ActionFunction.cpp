// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b5fcca0

UClass * __cdecl UDS_VM_ActionFunction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ActionFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ActionFunction",
               &Z_Registration_Info_UClass_UDS_VM_ActionFunction.InnerSingleton,
               StaticRegisterNativesUDS_VM_ActionFunction,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ActionFunction>,
               InternalVTableHelperCtorCaller<UDS_VM_ActionFunction>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ActionFunction.InnerSingleton;
}

// UDS_VM_ActionFunction @ 14b5fff70

UDS_VM_ActionFunction * __thiscall
UDS_VM_ActionFunction::UDS_VM_ActionFunction(UDS_VM_ActionFunction *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ActionFunction__6B_;
  (this->VMCooltime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->Name).StringTableType = None;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  (this->Discription).StringTableType = None;
  (this->Discription).StringTableID = 0;
  (this->Discription).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Discription).StringEnumTableNameID.Number = 0;
  (this->Discription).DateTime.Ticks = 0;
  (this->Discription).TimeSpan.Ticks = 0;
  (this->Discription).TimeExpressionType = None;
  (this->Discription).IsExpression = false;
  (this->Discription).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Discription).UniqueString.Data.ArrayNum = 0;
  (this->Discription).UniqueString.Data.ArrayMax = 0;
  (this->Discription).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Discription).FormatArgs.ArrayNum = 0;
  (this->Discription).FormatArgs.ArrayMax = 0;
  this->RequestPlayerLevel = 0;
  this->IsLock = false;
  this->ActionFunctionType = None;
  this->RequestQuest = 0;
  return this;
}

// UDS_VM_ActionFunction @ 14b600060

UDS_VM_ActionFunction * __thiscall
UDS_VM_ActionFunction::UDS_VM_ActionFunction
          (UDS_VM_ActionFunction *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ActionFunction__6B_;
  (this->VMCooltime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->Name).StringTableType = None;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  (this->Discription).StringTableType = None;
  (this->Discription).StringTableID = 0;
  (this->Discription).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Discription).StringEnumTableNameID.Number = 0;
  (this->Discription).DateTime.Ticks = 0;
  (this->Discription).TimeSpan.Ticks = 0;
  (this->Discription).TimeExpressionType = None;
  (this->Discription).IsExpression = false;
  (this->Discription).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Discription).UniqueString.Data.ArrayNum = 0;
  (this->Discription).UniqueString.Data.ArrayMax = 0;
  (this->Discription).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Discription).FormatArgs.ArrayNum = 0;
  (this->Discription).FormatArgs.ArrayMax = 0;
  this->RequestPlayerLevel = 0;
  this->IsLock = false;
  this->ActionFunctionType = None;
  this->RequestQuest = 0;
  return this;
}

// ~UDS_VM_ActionFunction @ 14b601a70

void __thiscall UDS_VM_ActionFunction::~UDS_VM_ActionFunction(UDS_VM_ActionFunction *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ActionFunction__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Discription).FormatArgs.AllocatorInstance.Data,
             (this->Discription).FormatArgs.ArrayNum);
  pFVar1 = (this->Discription).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Discription).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Name).FormatArgs.AllocatorInstance.Data,
             (this->Name).FormatArgs.ArrayNum);
  pFVar1 = (this->Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b603a70

IClassDescriptor * __thiscall
UDS_VM_ActionFunction::GetFieldNotificationDescriptor(UDS_VM_ActionFunction *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ActionFunction::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6040a0

UClass * __cdecl UDS_VM_ActionFunction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ActionFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ActionFunction",
               &Z_Registration_Info_UClass_UDS_VM_ActionFunction.InnerSingleton,
               StaticRegisterNativesUDS_VM_ActionFunction,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ActionFunction>,
               InternalVTableHelperCtorCaller<UDS_VM_ActionFunction>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ActionFunction.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ActionFunction @ 14b6048c0

void __cdecl UDS_VM_ActionFunction::StaticRegisterNativesUDS_VM_ActionFunction(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ActionFunction_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execActionCooltimeChanged @ 14b605960

void __cdecl
UDS_VM_ActionFunction::execActionCooltimeChanged(UObject *param_1,FFrame *param_2,void *param_3)

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
            ((UDS_VM_ActionFunction *)param_1,local_res20[0],bVar2,
             (TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>)local_28[0]);
  return;
}

// ActionCooltimeChanged @ 14bdae520

void __thiscall
UDS_VM_ActionFunction::ActionCooltimeChanged
          (UDS_VM_ActionFunction *this,EDS_CoolDownType param_1,bool param_2,
          TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr> param_3)

{
  FWeakObjectPtr local_res20;
  
  local_res20 = param_3.WeakPtr;
  FWeakObjectPtr::IsValid(&local_res20);
  return;
}

// BindModel @ 14bdaee80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ActionFunction::BindModel(UDS_VM_ActionFunction *this)

{
  double dVar1;
  FName FVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  EDS_CoolDownType EVar6;
  FDS_ActionBaseTableRow *this_00;
  UDS_LogManager *pUVar7;
  UDS_TimeCoolDownManager *pUVar8;
  float fVar9;
  float fVar10;
  undefined1 auStackY_218 [32];
  EDS_RingCmdType local_1e8 [16];
  undefined1 local_1d8 [24];
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong lStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  void *local_198;
  longlong local_190;
  FDS_TextFormatArg *local_188;
  longlong local_180;
  code *local_178;
  longlong lStack_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  if (this->ActionFunctionType != None) {
    this_00 = FDS_ActionBaseTableRow::GetRef((ulonglong)this->ActionFunctionType,true);
    bVar5 = FDS_ActionBaseTableRow::IsValid(this_00);
    FVar2 = FFieldNotificationClassDescriptor::IconID.FieldName;
    if (bVar5) {
      if (this->IconID != this_00->ID_Icon) {
        local_1d8._8_4_ = FFieldNotificationClassDescriptor::IconID.BitNumber;
        this->IconID = this_00->ID_Icon;
        FVar3 = FFieldNotificationClassDescriptor::IconID.FieldName;
        FFieldNotificationClassDescriptor::IconID.FieldName.ComparisonIndex =
             FVar2.ComparisonIndex.Value;
        FFieldNotificationClassDescriptor::IconID.FieldName.Number = FVar2.Number;
        local_1d8._0_4_ = FFieldNotificationClassDescriptor::IconID.FieldName.ComparisonIndex.Value;
        local_1d8._4_4_ = FFieldNotificationClassDescriptor::IconID.FieldName.Number;
        FFieldNotificationClassDescriptor::IconID.FieldName = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_1d8);
      }
      local_1d8[0x10] = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1a0 = 0;
      local_1b0 = 0;
      lStack_1a8 = 0;
      local_19c = 0;
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = (FDS_TextFormatArg *)0x0;
      local_180 = 0;
      FDS_Text::SetTextFromStringID((FDS_Text *)(local_1d8 + 0x10),&this_00->ID_Name);
      iVar4 = FFieldNotificationClassDescriptor::Name.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::Name.FieldName;
      FDS_Text::operator=(&this->Name,(FDS_Text *)(local_1d8 + 0x10));
      FVar3 = FFieldNotificationClassDescriptor::Name.FieldName;
      FFieldNotificationClassDescriptor::Name.FieldName.ComparisonIndex =
           FVar2.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::Name.FieldName.Number = FVar2.Number;
      local_1d8._0_4_ = FFieldNotificationClassDescriptor::Name.FieldName.ComparisonIndex.Value;
      local_1d8._4_4_ = FFieldNotificationClassDescriptor::Name.FieldName.Number;
      local_1d8._8_4_ = iVar4;
      FFieldNotificationClassDescriptor::Name.FieldName = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_1d8);
      DestructItems<FDS_TextFormatArg,int>(local_188,(int)local_180);
      if (local_188 != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_188);
      }
      if (local_198 != (void *)0x0) {
        FMemory::Free(local_198);
      }
      local_1d8[0x10] = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      lStack_1a8 = 0;
      local_1a0 = 0;
      local_19c = 0;
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = (FDS_TextFormatArg *)0x0;
      local_180 = 0;
      FDS_Text::SetTextFromStringID((FDS_Text *)(local_1d8 + 0x10),&this_00->ID_Name);
      iVar4 = FFieldNotificationClassDescriptor::Discription.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::Discription.FieldName;
      FDS_Text::operator=(&this->Discription,(FDS_Text *)(local_1d8 + 0x10));
      FVar3 = FFieldNotificationClassDescriptor::Discription.FieldName;
      FFieldNotificationClassDescriptor::Discription.FieldName.ComparisonIndex =
           FVar2.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::Discription.FieldName.Number = FVar2.Number;
      local_1d8._0_4_ =
           FFieldNotificationClassDescriptor::Discription.FieldName.ComparisonIndex.Value;
      local_1d8._4_4_ = FFieldNotificationClassDescriptor::Discription.FieldName.Number;
      local_1d8._8_4_ = iVar4;
      FFieldNotificationClassDescriptor::Discription.FieldName = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_1d8);
      DestructItems<FDS_TextFormatArg,int>(local_188,(int)local_180);
      if (local_188 != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_188);
      }
      if (local_198 != (void *)0x0) {
        FMemory::Free(local_198);
      }
      local_1e8[0] = Action;
      bVar5 = FDS_RingCommandService::IsContentLockCheck(local_1e8,(uint)this->ActionFunctionType);
      FVar2 = FFieldNotificationClassDescriptor::IsLock.FieldName;
      if (this->IsLock != bVar5) {
        local_1d8._8_4_ = FFieldNotificationClassDescriptor::IsLock.BitNumber;
        this->IsLock = bVar5;
        FVar3 = FFieldNotificationClassDescriptor::IsLock.FieldName;
        FFieldNotificationClassDescriptor::IsLock.FieldName.ComparisonIndex =
             FVar2.ComparisonIndex.Value;
        FFieldNotificationClassDescriptor::IsLock.FieldName.Number = FVar2.Number;
        local_1d8._0_4_ = FFieldNotificationClassDescriptor::IsLock.FieldName.ComparisonIndex.Value;
        local_1d8._4_4_ = FFieldNotificationClassDescriptor::IsLock.FieldName.Number;
        FFieldNotificationClassDescriptor::IsLock.FieldName = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_1d8);
      }
      pUVar8 = UDS_TimeCoolDownManager::GetInst();
      if (pUVar8 == (UDS_TimeCoolDownManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_VM_ActionFunction::BindModel",0x20,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_168.Ptr,0x40,L"timeCoolDownManager is nullptr.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar8->OnChangedTimeCoolDownEvent,this);
        local_1d8._8_4_ = 0;
        local_1d8._0_8_ = ActionCooltimeChanged;
        lStack_170 = (ulonglong)(uint)local_1d8._12_4_ << 0x20;
        local_178 = ActionCooltimeChanged;
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_CoolDownType,bool,TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_ActionFunction>
                  (&pUVar8->OnChangedTimeCoolDownEvent,(UDS_VM_ActionFunction *)local_1d8,
                   (pmf_b5c8868e *)this);
        EVar6 = FDS_RingCommandService::GetActionCoolDownType(this_00->ID);
        if ((this->VMCooltime).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
          bVar5 = UDS_TimeCoolDownManager::HasCoolDown(EVar6,0);
          if (bVar5) {
            fVar9 = FDS_RingCommandService::GetActionFunctionCooltime(this_00->ID);
            dVar1 = UDS_TimeCoolDownManager::GetCoolDownRemainTime(EVar6,0);
            fVar10 = fVar9 - (float)dVar1;
          }
          else {
            fVar10 = 0.0;
            fVar9 = 0.0;
          }
          SetCooltime(this,0.0,fVar9,fVar10,fVar9);
        }
      }
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_ActionFunction::BindModel",0x20,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_168.Ptr,0x34,L"actionBaseTableRow is invaild.");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
  }
  return;
}

// InitViewModel @ 14bdc63e0

void __thiscall UDS_VM_ActionFunction::InitViewModel(UDS_VM_ActionFunction *this)

{
  UDS_VM_Progress *pUVar1;
  
  if ((this->VMCooltime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VMCooltime).field0_0x0.DebugPtr = pUVar1;
    pUVar1->IncreaseType = DeltaTime;
    SetCooltime(this,0.0,0.0,0.0,0.0);
  }
  return;
}

// OnSetViewModel @ 14bdd30c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ActionFunction::OnSetViewModel
          (UDS_VM_ActionFunction *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_ActionFunctionType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_ActionFunction,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ActionFunction>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_ActionFunction *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_ActionFunction::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x1c,L"FDS_ViewModelContext_ActionSlot is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    EVar1 = (local_158.Object)->ActionFunctionType;
    this->ActionFunctionType = EVar1;
    if (EVar1 == None) {
      (**(code **)(this->_padding_ + 0x2f8))(this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ResetCooltime @ 14bde3480

void __thiscall UDS_VM_ActionFunction::ResetCooltime(UDS_VM_ActionFunction *this)

{
  SetCooltime(this,0.0,0.0,0.0,0.0);
  return;
}

// SetCooltime @ 14bde4e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ActionFunction::SetCooltime
          (UDS_VM_ActionFunction *this,float param_1,float param_2,float param_3,float param_4)

{
  longlong *plVar1;
  UDS_VM_Progress *pUVar2;
  FName FVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  FName local_168;
  int local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar2 = (this->VMCooltime).field0_0x0.DebugPtr;
  if (pUVar2 == (UDS_VM_Progress *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_ActionFunction::SetCooltime",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x82,L"VMCooltime is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pUVar2->IncreaseType = DeltaTime;
    iVar4 = UDS_VM_Progress::FFieldNotificationClassDescriptor::MinValue.BitNumber;
    FVar3 = UDS_VM_Progress::FFieldNotificationClassDescriptor::MinValue.FieldName;
    pUVar2 = (this->VMCooltime).field0_0x0.DebugPtr;
    plVar1 = &pUVar2->_padding_;
    if (param_1 != pUVar2->MinValue) {
      pUVar2->MinValue = param_1;
      local_160 = iVar4;
      local_168 = FVar3;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
      local_160 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetTargetPercent.BitNumber;
      local_168 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetTargetPercent.FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
      local_160 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetCurrentPercent.BitNumber;
      local_168 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetCurrentPercent.FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
      local_160 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetReverseCurrentPercent.
                  BitNumber;
      local_168 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetReverseCurrentPercent.
                  FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
      local_160 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetRemainValue.BitNumber;
      local_168 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetRemainValue.FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
    }
    iVar4 = UDS_VM_Progress::FFieldNotificationClassDescriptor::MaxValue.BitNumber;
    FVar3 = UDS_VM_Progress::FFieldNotificationClassDescriptor::MaxValue.FieldName;
    pUVar2 = (this->VMCooltime).field0_0x0.DebugPtr;
    plVar1 = &pUVar2->_padding_;
    if (param_2 != pUVar2->MaxValue) {
      pUVar2->MaxValue = param_2;
      local_160 = iVar4;
      local_168 = FVar3;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
      local_160 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetTargetPercent.BitNumber;
      local_168 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetTargetPercent.FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
      local_160 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetCurrentPercent.BitNumber;
      local_168 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetCurrentPercent.FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
      local_160 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetReverseCurrentPercent.
                  BitNumber;
      local_168 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetReverseCurrentPercent.
                  FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
      local_160 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetRemainValue.BitNumber;
      local_168 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetRemainValue.FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
    }
    UDS_VM_Progress::SetCurrentValue((this->VMCooltime).field0_0x0.DebugPtr,param_3);
    local_160 = UDS_VM_Progress::FFieldNotificationClassDescriptor::TargetValue.BitNumber;
    local_168 = UDS_VM_Progress::FFieldNotificationClassDescriptor::TargetValue.FieldName;
    pUVar2 = (this->VMCooltime).field0_0x0.DebugPtr;
    plVar1 = &pUVar2->_padding_;
    if (param_4 != pUVar2->TargetValue) {
      pUVar2->TargetValue = param_4;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
      local_160 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetTargetPercent.BitNumber;
      local_168 = UDS_VM_Progress::FFieldNotificationClassDescriptor::GetTargetPercent.FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_168);
    }
  }
  return;
}

// SetDiscription @ 14bde5530

void __thiscall UDS_VM_ActionFunction::SetDiscription(UDS_VM_ActionFunction *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Discription.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Discription.FieldName;
  FDS_Text::operator=(&this->Discription,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIconID @ 14bde6540

void __thiscall UDS_VM_ActionFunction::SetIconID(UDS_VM_ActionFunction *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  if (this->IconID != *param_1) {
    this->IconID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsLock @ 14bde6830

void __thiscall UDS_VM_ActionFunction::SetIsLock(UDS_VM_ActionFunction *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsLock.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsLock.FieldName;
  if (this->IsLock != *param_1) {
    this->IsLock = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetName @ 14bde7f00

void __thiscall UDS_VM_ActionFunction::SetName(UDS_VM_ActionFunction *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Name.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Name.FieldName;
  FDS_Text::operator=(&this->Name,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetRequestPlayerLevel @ 14bde8750

void __thiscall
UDS_VM_ActionFunction::SetRequestPlayerLevel(UDS_VM_ActionFunction *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::RequestPlayerLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RequestPlayerLevel.FieldName;
  if (this->RequestPlayerLevel != *param_1) {
    this->RequestPlayerLevel = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetRequestQuest @ 14bde87a0

void __thiscall UDS_VM_ActionFunction::SetRequestQuest(UDS_VM_ActionFunction *this,int *param_1)

{
  this->RequestQuest = *param_1;
  return;
}

// UnbindModel @ 14bdeb870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_ActionFunction::UnbindModel(UDS_VM_ActionFunction *this)

{
  UDS_TimeCoolDownManager *pUVar1;
  UDS_LogManager *pUVar2;
  UDS_LanguageManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this->IconID = 0;
  pUVar1 = UDS_TimeCoolDownManager::GetInst();
  if (pUVar1 == (UDS_TimeCoolDownManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_ActionFunction::UnbindModel",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x65,L"timeCoolDownManager is nullptr.");
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
  pUVar3 = UDS_LanguageManager::GetInst();
  if (pUVar3 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLanguageChanged,this
              );
  }
  return;
}

