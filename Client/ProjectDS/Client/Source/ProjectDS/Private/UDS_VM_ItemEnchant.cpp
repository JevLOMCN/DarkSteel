// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b688b60

UClass * __cdecl UDS_VM_ItemEnchant::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemEnchant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemEnchant",
               &Z_Registration_Info_UClass_UDS_VM_ItemEnchant.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemEnchant,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemEnchant>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemEnchant>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemEnchant.InnerSingleton;
}

// UDS_VM_ItemEnchant @ 14b68d4e0

UDS_VM_ItemEnchant * __thiscall
UDS_VM_ItemEnchant::UDS_VM_ItemEnchant(UDS_VM_ItemEnchant *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemEnchant__6B_;
  (this->VM_Money).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0xa029;
  return this;
}

// UDS_VM_ItemEnchant @ 14b68d580

UDS_VM_ItemEnchant * __thiscall
UDS_VM_ItemEnchant::UDS_VM_ItemEnchant(UDS_VM_ItemEnchant *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemEnchant__6B_;
  (this->VM_Money).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0xa029;
  return this;
}

// ~UDS_VM_ItemEnchant @ 14b68e1d0

void __thiscall UDS_VM_ItemEnchant::~UDS_VM_ItemEnchant(UDS_VM_ItemEnchant *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemEnchant__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Title).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Title).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b690120

IClassDescriptor * __thiscall
UDS_VM_ItemEnchant::GetFieldNotificationDescriptor(UDS_VM_ItemEnchant *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemEnchant::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b690ca0

UClass * __cdecl UDS_VM_ItemEnchant::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemEnchant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemEnchant",
               &Z_Registration_Info_UClass_UDS_VM_ItemEnchant.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemEnchant,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemEnchant>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemEnchant>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemEnchant.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemEnchant @ 14b6911f0

void __cdecl UDS_VM_ItemEnchant::StaticRegisterNativesUDS_VM_ItemEnchant(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemEnchant_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGuideText @ 14b691b80

void __cdecl UDS_VM_ItemEnchant::execGuideText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GuideText((UDS_VM_ItemEnchant *)param_1,&local_58);
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

// execIsSelectedScroll @ 14b691cb0

void __cdecl
UDS_VM_ItemEnchant::execIsSelectedScroll(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSelectedScroll((UDS_VM_ItemEnchant *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsSelectedTarget @ 14b691cf0

void __cdecl
UDS_VM_ItemEnchant::execIsSelectedTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSelectedTarget((UDS_VM_ItemEnchant *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// BindModel @ 14be11b10

void __thiscall UDS_VM_ItemEnchant::BindModel(UDS_VM_ItemEnchant *this)

{
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014be11b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x2c8))();
    return;
  }
  return;
}

// GuideText @ 14be23710

FDS_Text * __thiscall
UDS_VM_ItemEnchant::GuideText(UDS_VM_ItemEnchant *this,FDS_Text *__return_storage_ptr__)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FDS_Text *pFVar4;
  UDS_M_ItemEnchant *pUVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  UObject *local_28 [2];
  
  this_00 = &this->_padding_;
  pUVar6 = (UObject *)0x0;
  local_res20 = pUVar6;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_ItemEnchant_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      local_res20 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar5 = (UDS_M_ItemEnchant *)FWeakObjectPtr::Get(&local_res8);
    bVar2 = UDS_M_ItemEnchant::IsSelectedTarget(pUVar5);
    if (bVar2) {
      if (*this_00 != 0) {
        pUVar3 = Z_Construct_UClass_UDS_M_ItemEnchant_NoRegister();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
        if (bVar2) {
          pUVar6 = (UObject *)*this_00;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_28[0] = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_28);
      bVar2 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar2) {
        pUVar5 = (UDS_M_ItemEnchant *)FWeakObjectPtr::Get(&local_res18);
        bVar2 = UDS_M_ItemEnchant::IsSelectedScroll(pUVar5);
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7994133979919810490>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_ItemEnchant.cpp"
                           ,0x46,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FDS_Text *)(*pcVar1)();
          return pFVar4;
        }
        bVar2 = false;
      }
      __return_storage_ptr__->StringTableType = StringUi;
      if (bVar2 == false) {
        __return_storage_ptr__->StringTableID = 0xa02e;
      }
      else {
        __return_storage_ptr__->StringTableID = 0;
      }
      goto LAB_14be238d3;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7994133979919810496>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_ItemEnchant.cpp"
                       ,0x40,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDS_Text *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->StringTableType = StringUi;
  __return_storage_ptr__->StringTableID = 0xa02d;
LAB_14be238d3:
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  __return_storage_ptr__->IsExpression = false;
  __return_storage_ptr__->TimeExpressionType = None;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  return __return_storage_ptr__;
}

// InitViewModel @ 14be252f0

void __thiscall UDS_VM_ItemEnchant::InitViewModel(UDS_VM_ItemEnchant *this)

{
  return;
}

// IsSelectedScroll @ 14be27550

bool __thiscall UDS_VM_ItemEnchant::IsSelectedScroll(UDS_VM_ItemEnchant *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_ItemEnchant *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemEnchant_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14be2757e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14be2757e:
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
                      (&bGEnsureHasExecuted<_7994133979919810490>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_ItemEnchant.cpp"
                       ,0x46,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  this_01 = (UDS_M_ItemEnchant *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_ItemEnchant::IsSelectedScroll(this_01);
  return bVar2;
}

// IsSelectedTarget @ 14be27630

bool __thiscall UDS_VM_ItemEnchant::IsSelectedTarget(UDS_VM_ItemEnchant *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_ItemEnchant *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemEnchant_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14be2765e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14be2765e:
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
                      (&bGEnsureHasExecuted<_7994133979919810496>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_ItemEnchant.cpp"
                       ,0x40,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  this_01 = (UDS_M_ItemEnchant *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_ItemEnchant::IsSelectedTarget(this_01);
  return bVar2;
}

// OnSetViewModel @ 14be39580

void __thiscall
UDS_VM_ItemEnchant::OnSetViewModel
          (UDS_VM_ItemEnchant *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  UDS_VM_MoneyDisplay *pUVar1;
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
  if ((this->VM_Money).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_Money).field0_0x0.DebugPtr = pUVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14be554b0

void __thiscall UDS_VM_ItemEnchant::UnbindModel(UDS_VM_ItemEnchant *this)

{
  UObject *this_00;
  UClass *pUVar1;
  void *pvVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  this_00 = (UObject *)this->_padding_;
  if (this_00 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_00);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(this_00);
      }
    }
    pUVar1 = Z_Construct_UClass_UDS_ObjectPoolItem_NoRegister();
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    if ((pvVar2 == (void *)0x0) || (*(char *)((longlong)pvVar2 + 0x10) != '\x01')) {
      (**(code **)(*(longlong *)this->_padding_ + 0x2d0))();
    }
  }
  return;
}

// UpdateView @ 14be5a740

void __thiscall
UDS_VM_ItemEnchant::UpdateView
          (UDS_VM_ItemEnchant *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  UDS_VM_MoneyDisplay *this_00;
  code *pcVar3;
  FDS_ViewModelContext_MoneyDisplay *pFVar4;
  bool bVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  UEnum *this_01;
  FName *pFVar9;
  ulonglong uVar10;
  long64 lVar11;
  int iVar12;
  wchar_t *pwVar13;
  wchar_t *_Str;
  byte local_res8 [16];
  FName local_res18;
  undefined1 local_res20 [8];
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FString local_68;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  if (this->_padding_ == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7994133979919810516>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_ItemEnchant.cpp"
                       ,0x2c,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_90 = FFieldNotificationClassDescriptor::IsSelectedTarget.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::IsSelectedTarget.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    local_80 = FFieldNotificationClassDescriptor::IsSelectedScroll.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::IsSelectedScroll.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    local_70 = FFieldNotificationClassDescriptor::GuideText.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::GuideText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    if ((this->VM_Money).field0_0x0.DebugPtr != (UDS_VM_MoneyDisplay *)0x0) {
      lVar1 = this->_padding_;
      FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantData>
                        ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_ItemEnchantData)local_res8);
      uVar2 = *(undefined8 *)FVar7;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
      pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               ::FindOrAddImpl<FName>
                         ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
      _Str = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_68,pwVar13);
      this_01 = StaticEnum<enum_EDS_MoneyType>();
      if (this_01 == (UEnum *)0x0) {
        uVar10 = (ulonglong)local_res8[0];
      }
      else {
        iVar12 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        pFVar9 = ::FName::FName(&local_res18,iVar12,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                                FNAME_Add);
        uVar10 = UEnum::GetValueByName(this_01,*pFVar9,None);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_58);
      pFVar4 = local_58.Object;
      if ((local_58.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&pFVar4->_padding_ = 0x192;
      pFVar4->MoneyId = uVar10 & 0xff;
      lVar1 = this->_padding_;
      FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantData>
                        ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_ItemEnchantData)local_res20);
      uVar2 = *(undefined8 *)FVar7;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
      pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               ::FindOrAddImpl<FName>
                         ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
      if ((pFVar8->Data).ArrayNum != 0) {
        _Str = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      iVar12 = _wtoi(_Str);
      pFVar4->Quantity = (longlong)iVar12;
      lVar11 = DS_MoneyDataUtil::GetMoneyQuantity((EDS_MoneyType)uVar10);
      iVar12 = 0x84a;
      if (pFVar4->Quantity <= lVar11) {
        iVar12 = 0x836;
      }
      pFVar4->TextStyleId = iVar12;
      this_00 = (this->VM_Money).field0_0x0.DebugPtr;
      local_48.Object = (FDS_ViewModelContext *)local_58.Object;
      local_48.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

