// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetOnChangedCheckState_WrapperImpl @ 14b61b4b0

void __cdecl
UDS_VM_Common_Check_Text::SetOnChangedCheckState_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  UClass *pUVar4;
  UDS_M_Common_Check_Text *this_00;
  FWeakObjectPtr FStackX_8;
  UObject *pUStackX_18;
  FReadAccessScope FStack_28;
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle == (UObject *)0x0) {
    bVar3 = *(char *)((longlong)param_1 + 0x134) == '\0';
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x130);
    *(bool *)((longlong)param_1 + 0x134) = bVar3;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 200),
               &FStack_28);
    if ((*(int *)((longlong)param_1 + 0xd8) != 0) &&
       (plVar2 = *(longlong **)((longlong)param_1 + 0xd0), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,uVar1,bVar3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_28);
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_M_Common_Check_Text_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this,pUVar4);
    pUStackX_18 = (UObject *)0x0;
    if (bVar3) {
      pUStackX_18 = this->Handle;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUStackX_18);
    }
    FStackX_8.ObjectIndex = 0;
    FStackX_8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUStackX_18);
    }
    FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pUStackX_18);
    bVar3 = FWeakObjectPtr::IsValid(&FStackX_8);
    if (bVar3) {
      this_00 = (UDS_M_Common_Check_Text *)FWeakObjectPtr::Get(&FStackX_8);
      UDS_M_Common_Check_Text::OnChangedCheckState(this_00);
      return;
    }
  }
  return;
}

// StaticClass @ 14b61b4c0

UClass * __cdecl UDS_VM_Common_Check_Text::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Check_Text.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Check_Text",
               &Z_Registration_Info_UClass_UDS_VM_Common_Check_Text.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Check_Text,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Check_Text>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Check_Text>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Check_Text.InnerSingleton;
}

// UDS_VM_Common_Check_Text @ 14b621010

UDS_VM_Common_Check_Text * __thiscall
UDS_VM_Common_Check_Text::UDS_VM_Common_Check_Text
          (UDS_VM_Common_Check_Text *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Check_Text__6B_;
  *(undefined8 *)&this->OnDelegateChangedCheckState = 0;
  *(undefined8 *)&(this->OnDelegateChangedCheckState).field_0x8 = 0;
  *(undefined4 *)&(this->OnDelegateChangedCheckState).field_0x10 = 0;
  (this->FilterName).StringTableType = None;
  (this->FilterName).StringTableID = 0;
  (this->FilterName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FilterName).StringEnumTableNameID.Number = 0;
  (this->FilterName).DateTime.Ticks = 0;
  (this->FilterName).TimeSpan.Ticks = 0;
  (this->FilterName).TimeExpressionType = None;
  (this->FilterName).IsExpression = false;
  (this->FilterName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterName).UniqueString.Data.ArrayNum = 0;
  (this->FilterName).UniqueString.Data.ArrayMax = 0;
  (this->FilterName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterName).FormatArgs.ArrayNum = 0;
  (this->FilterName).FormatArgs.ArrayMax = 0;
  this->FilterIndex = 0;
  this->FilterValue = false;
  this->Disabled = false;
  (this->OnChangedCheckState).bIsActivate = false;
  return this;
}

// UDS_VM_Common_Check_Text @ 14b6210d0

UDS_VM_Common_Check_Text * __thiscall
UDS_VM_Common_Check_Text::UDS_VM_Common_Check_Text
          (UDS_VM_Common_Check_Text *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Check_Text__6B_;
  *(undefined8 *)&this->OnDelegateChangedCheckState = 0;
  *(undefined8 *)&(this->OnDelegateChangedCheckState).field_0x8 = 0;
  *(undefined4 *)&(this->OnDelegateChangedCheckState).field_0x10 = 0;
  (this->FilterName).StringTableType = None;
  (this->FilterName).StringTableID = 0;
  (this->FilterName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FilterName).StringEnumTableNameID.Number = 0;
  (this->FilterName).DateTime.Ticks = 0;
  (this->FilterName).TimeSpan.Ticks = 0;
  (this->FilterName).TimeExpressionType = None;
  (this->FilterName).IsExpression = false;
  (this->FilterName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterName).UniqueString.Data.ArrayNum = 0;
  (this->FilterName).UniqueString.Data.ArrayMax = 0;
  (this->FilterName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterName).FormatArgs.ArrayNum = 0;
  (this->FilterName).FormatArgs.ArrayMax = 0;
  this->FilterIndex = 0;
  this->FilterValue = false;
  this->Disabled = false;
  (this->OnChangedCheckState).bIsActivate = false;
  return this;
}

// ~UDS_VM_Common_Check_Text @ 14b621d60

void __thiscall UDS_VM_Common_Check_Text::~UDS_VM_Common_Check_Text(UDS_VM_Common_Check_Text *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Check_Text__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FilterName).FormatArgs.AllocatorInstance.Data,
             (this->FilterName).FormatArgs.ArrayNum);
  pFVar1 = (this->FilterName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilterName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDelegateChangedCheckState);
  pvVar2 = *(void **)&(this->OnDelegateChangedCheckState).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDelegateChangedCheckState);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623d50

IClassDescriptor * __thiscall
UDS_VM_Common_Check_Text::GetFieldNotificationDescriptor(UDS_VM_Common_Check_Text *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_Check_Text::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6248b0

UClass * __cdecl UDS_VM_Common_Check_Text::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Check_Text.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Check_Text",
               &Z_Registration_Info_UClass_UDS_VM_Common_Check_Text.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Check_Text,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Check_Text>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Check_Text>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Check_Text.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_Check_Text @ 14b624c60

void __cdecl UDS_VM_Common_Check_Text::StaticRegisterNativesUDS_VM_Common_Check_Text(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Common_Check_Text_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsChecked @ 14b625930

void __cdecl UDS_VM_Common_Check_Text::execIsChecked(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsChecked((UDS_VM_Common_Check_Text *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsDiabled @ 14b625970

void __cdecl UDS_VM_Common_Check_Text::execIsDiabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsDiabled((UDS_VM_Common_Check_Text *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execTextName @ 14b625af0

void __cdecl UDS_VM_Common_Check_Text::execTextName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TextName((UDS_VM_Common_Check_Text *)param_1,&local_58);
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

// IsChecked @ 14bdc7c70

bool __thiscall UDS_VM_Common_Check_Text::IsChecked(UDS_VM_Common_Check_Text *this)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_CommonCheckTextData)local_res8);
    uVar2 = *(undefined8 *)FVar5;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar4 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    bVar3 = FToBoolHelper::FromCStringWide(pwVar7);
    this->FilterValue = bVar3;
    return bVar3;
  }
  return this->FilterValue;
}

// IsDiabled @ 14bdc8710

bool __thiscall UDS_VM_Common_Check_Text::IsDiabled(UDS_VM_Common_Check_Text *this)

{
  return this->Disabled;
}

// OnSetViewModel @ 14bdd75d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Common_Check_Text::OnSetViewModel
          (UDS_VM_Common_Check_Text *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_238 [32];
  undefined1 local_208 [8];
  ForAnyElementType local_200;
  int local_1f8;
  TSharedPtr<FDS_ViewModelContext_CommonCheckText,1> local_1f0;
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  FDestructionSentinel local_188;
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1a8.Object = param_1->Object;
  local_1a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_1a8);
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    local_198.Object = param_1->Object;
    local_198.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SafeCast<FDS_ViewModelContext_CommonCheckText>(&local_1f0,&local_198);
    if (local_1f0.Object == (FDS_ViewModelContext_CommonCheckText *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_Common_Check_Text::OnSetViewModel",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_158.Ptr,0x18,
                   L"FDS_ViewModelContext_CommonCheckText is nullptr");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f0.SharedReferenceCount.ReferenceController);
      goto LAB_14bdd78d8;
    }
    FDS_Text::operator=(&this->FilterName,&(local_1f0.Object)->CheckTextName);
    this->FilterIndex = (local_1f0.Object)->Index;
    this->FilterValue = (local_1f0.Object)->Value;
    this->Disabled = (local_1f0.Object)->Disabled;
    if (&(local_1f0.Object)->OnDelegateChangedCheckState != &this->OnDelegateChangedCheckState) {
      local_208 = (undefined1  [8])0x0;
      local_200.Data = (FScriptContainerElement *)0x0;
      local_1f8 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_1f0.Object)->OnDelegateChangedCheckState,&local_170);
      if ((*(int *)&((local_1f0.Object)->OnDelegateChangedCheckState).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&((local_1f0.Object)->OnDelegateChangedCheckState).field_0x8,
         plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x50))(plVar3,local_208);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_170);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDelegateChangedCheckState,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_208);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
                 (FWriteAccessScope *)&local_188);
      if ((local_1f8 != 0) && (local_200.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_200.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_200,0,0,0x10);
        local_1f8 = 0;
      }
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      if (local_200.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_208);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.SharedReferenceCount.ReferenceController);
  }
  else {
    FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_CommonCheckTextData)&local_1f0);
    uVar2 = *(undefined8 *)FVar5;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar4 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      uVar4 = _wtoi(L"");
      this->FilterIndex = uVar4;
    }
    else {
      uVar4 = _wtoi((wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
      this->FilterIndex = uVar4;
    }
  }
  local_1d0 = FFieldNotificationClassDescriptor::TextName.BitNumber;
  local_1d8 = FFieldNotificationClassDescriptor::TextName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
  local_1c0 = FFieldNotificationClassDescriptor::IsChecked.BitNumber;
  local_1c8 = FFieldNotificationClassDescriptor::IsChecked.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
  local_1b0 = FFieldNotificationClassDescriptor::IsDiabled.BitNumber;
  local_1b8 = FFieldNotificationClassDescriptor::IsDiabled.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
LAB_14bdd78d8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnWidgetEventFieldChangedCheckState @ 14bde1230

void __thiscall
UDS_VM_Common_Check_Text::OnWidgetEventFieldChangedCheckState
          (UDS_VM_Common_Check_Text *this,FDS_WidgetEventField *param_1)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  UClass *pUVar4;
  UDS_M_Common_Check_Text *this_00;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  FReadAccessScope local_28;
  
  plVar2 = &this->_padding_;
  if (*plVar2 == 0) {
    bVar3 = this->FilterValue == false;
    uVar1 = this->FilterIndex;
    this->FilterValue = bVar3;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnDelegateChangedCheckState,&local_28);
    if ((*(int *)&(this->OnDelegateChangedCheckState).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnDelegateChangedCheckState).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,uVar1,bVar3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_M_Common_Check_Text_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)plVar2,pUVar4);
    local_res18 = (UObject *)0x0;
    if (bVar3) {
      local_res18 = (UObject *)*plVar2;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      this_00 = (UDS_M_Common_Check_Text *)FWeakObjectPtr::Get(&local_res8);
      UDS_M_Common_Check_Text::OnChangedCheckState(this_00);
      return;
    }
  }
  return;
}

// SetChecked @ 14bde4060

void __thiscall UDS_VM_Common_Check_Text::SetChecked(UDS_VM_Common_Check_Text *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->FilterValue = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsChecked.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsChecked.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// TextName @ 14bdead00

FDS_Text * __thiscall
UDS_VM_Common_Check_Text::TextName(UDS_VM_Common_Check_Text *this,FDS_Text *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  longlong lVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  lVar5 = this->_padding_;
  if (lVar5 != 0) {
    FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>
                      ((FDS_DataContainer *)(lVar5 + 0x40),(EDS_CommonCheckTextData)local_res8);
    uVar1 = *(undefined8 *)FVar3;
    uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar5 + 0x40),uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
    if ((pFVar4->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    lVar5 = _wtoi64(_Str);
    FDS_Text::SetTextFromStringTable(&this->FilterName,StringUi,lVar5);
  }
  FDS_Text::FDS_Text(__return_storage_ptr__,&this->FilterName);
  return __return_storage_ptr__;
}

// UpdateView @ 14bdfa030

void __thiscall
UDS_VM_Common_Check_Text::UpdateView
          (UDS_VM_Common_Check_Text *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::TextName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsChecked.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsChecked.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsDiabled.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDiabled.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

