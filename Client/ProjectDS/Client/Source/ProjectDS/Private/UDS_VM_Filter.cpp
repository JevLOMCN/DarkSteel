// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b644610

UClass * __cdecl UDS_VM_Filter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Filter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Filter",
               &Z_Registration_Info_UClass_UDS_VM_Filter.InnerSingleton,
               StaticRegisterNativesUDS_VM_Filter,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Filter>,InternalVTableHelperCtorCaller<UDS_VM_Filter>,
               local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Filter.InnerSingleton;
}

// UDS_VM_Filter @ 14b6482c0

UDS_VM_Filter * __thiscall UDS_VM_Filter::UDS_VM_Filter(UDS_VM_Filter *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Filter__6B_;
  (this->FilterTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FilterTitleText).StringEnumTableNameID.Number = 0;
  (this->FilterTitleText).DateTime.Ticks = 0;
  (this->FilterTitleText).TimeSpan.Ticks = 0;
  (this->FilterTitleText).TimeExpressionType = None;
  (this->FilterTitleText).IsExpression = false;
  (this->FilterTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterTitleText).UniqueString.Data.ArrayNum = 0;
  (this->FilterTitleText).UniqueString.Data.ArrayMax = 0;
  (this->FilterTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterTitleText).FormatArgs.ArrayNum = 0;
  (this->FilterTitleText).FormatArgs.ArrayMax = 0;
  *(undefined8 *)&this->OnDelegateChangedCheckState = 0;
  *(undefined8 *)&(this->OnDelegateChangedCheckState).field_0x8 = 0;
  *(undefined4 *)&(this->OnDelegateChangedCheckState).field_0x10 = 0;
  (this->FilterTitleText).StringTableType = StringUi;
  (this->FilterTitleText).StringTableID = 0x1fbd1;
  return this;
}

// UDS_VM_Filter @ 14b648370

UDS_VM_Filter * __thiscall
UDS_VM_Filter::UDS_VM_Filter(UDS_VM_Filter *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Filter__6B_;
  (this->FilterTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FilterTitleText).StringEnumTableNameID.Number = 0;
  (this->FilterTitleText).DateTime.Ticks = 0;
  (this->FilterTitleText).TimeSpan.Ticks = 0;
  (this->FilterTitleText).TimeExpressionType = None;
  (this->FilterTitleText).IsExpression = false;
  (this->FilterTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterTitleText).UniqueString.Data.ArrayNum = 0;
  (this->FilterTitleText).UniqueString.Data.ArrayMax = 0;
  (this->FilterTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterTitleText).FormatArgs.ArrayNum = 0;
  (this->FilterTitleText).FormatArgs.ArrayMax = 0;
  *(undefined8 *)&this->OnDelegateChangedCheckState = 0;
  *(undefined8 *)&(this->OnDelegateChangedCheckState).field_0x8 = 0;
  *(undefined4 *)&(this->OnDelegateChangedCheckState).field_0x10 = 0;
  (this->FilterTitleText).StringTableType = StringUi;
  (this->FilterTitleText).StringTableID = 0x1fbd1;
  return this;
}

// ~UDS_VM_Filter @ 14b6495c0

void __thiscall UDS_VM_Filter::~UDS_VM_Filter(UDS_VM_Filter *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Filter__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDelegateChangedCheckState);
  pvVar1 = *(void **)&(this->OnDelegateChangedCheckState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDelegateChangedCheckState);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FilterTitleText).FormatArgs.AllocatorInstance.Data,
             (this->FilterTitleText).FormatArgs.ArrayNum);
  pFVar2 = (this->FilterTitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FilterTitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b64b1d0

IClassDescriptor * __thiscall UDS_VM_Filter::GetFieldNotificationDescriptor(UDS_VM_Filter *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Filter::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64bb10

UClass * __cdecl UDS_VM_Filter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Filter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Filter",
               &Z_Registration_Info_UClass_UDS_VM_Filter.InnerSingleton,
               StaticRegisterNativesUDS_VM_Filter,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Filter>,InternalVTableHelperCtorCaller<UDS_VM_Filter>,
               local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Filter.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Filter @ 14b64bf70

void __cdecl UDS_VM_Filter::StaticRegisterNativesUDS_VM_Filter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Filter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEntryFilterSlot @ 14b64d120

void __cdecl UDS_VM_Filter::execEntryFilterSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = EntryFilterSlot((UDS_VM_Filter *)param_1,&local_18);
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

// EntryFilterSlot @ 14bdbb830

FDS_EntryBindingEventField * __thiscall
UDS_VM_Filter::EntryFilterSlot
          (UDS_VM_Filter *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FDS_EntryBindingEventField *pFVar4;
  UDS_M_Filter *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  this_00 = &this->_padding_;
  pUVar5 = (UObject *)0x0;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Filter_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Filter *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_Filter::GetEntryEventFieldFilterSlot(this_01,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3308689465915998195>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Filter.cpp"
                     ,0xd,"false");
  if (!bVar2) {
    (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
    (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_EntryBindingEventField *)(*pcVar1)();
  return pFVar4;
}

