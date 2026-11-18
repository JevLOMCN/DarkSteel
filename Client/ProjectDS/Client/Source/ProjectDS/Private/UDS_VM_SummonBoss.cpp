// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetSummonBossButtonClickEvent_WrapperImpl @ 14b6dfcd0

void __cdecl
UDS_VM_SummonBoss::SetSummonBossButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_SummonBoss *this_00;
  UObject *pUVar4;
  FWeakObjectPtr aFStackX_8 [2];
  UObject *apUStackX_18 [2];
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_SummonBoss_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = this->Handle;
      goto LAB_14bf71a5e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bf71a5e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  aFStackX_8[0].ObjectIndex = 0;
  aFStackX_8[0].ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(aFStackX_8,(FObjectPtr)apUStackX_18);
  bVar2 = FWeakObjectPtr::IsValid(aFStackX_8);
  if (bVar2) {
    this_00 = (UDS_M_SummonBoss *)FWeakObjectPtr::Get(aFStackX_8);
    UDS_M_SummonBoss::OnClickedSummonBoss(this_00);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7645980323133521986>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBoss.cpp"
                       ,0x42,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticClass @ 14b6dfce0

UClass * __cdecl UDS_VM_SummonBoss::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SummonBoss.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SummonBoss",
               &Z_Registration_Info_UClass_UDS_VM_SummonBoss.InnerSingleton,
               StaticRegisterNativesUDS_VM_SummonBoss,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SummonBoss>,
               InternalVTableHelperCtorCaller<UDS_VM_SummonBoss>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SummonBoss.InnerSingleton;
}

// UDS_VM_SummonBoss @ 14b6e67b0

UDS_VM_SummonBoss * __thiscall
UDS_VM_SummonBoss::UDS_VM_SummonBoss(UDS_VM_SummonBoss *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SummonBoss__6B_;
  *(undefined8 *)&(this->SummonBossButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->SummonBossButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SummonBossButtonClickEvent).Delegate.field_0x10 = 0;
  (this->SummonBossButtonText).StringTableType = None;
  (this->SummonBossButtonText).StringTableID = 0;
  (this->SummonBossButtonText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SummonBossButtonText).StringEnumTableNameID.Number = 0;
  (this->SummonBossButtonText).DateTime.Ticks = 0;
  (this->SummonBossButtonText).TimeSpan.Ticks = 0;
  (this->SummonBossButtonText).TimeExpressionType = None;
  (this->SummonBossButtonText).IsExpression = false;
  (this->SummonBossButtonText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SummonBossButtonText).UniqueString.Data.ArrayNum = 0;
  (this->SummonBossButtonText).UniqueString.Data.ArrayMax = 0;
  (this->SummonBossButtonText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SummonBossButtonText).FormatArgs.ArrayNum = 0;
  (this->SummonBossButtonText).FormatArgs.ArrayMax = 0;
  (this->SummonBossNeedItemText).StringTableType = None;
  (this->SummonBossNeedItemText).StringTableID = 0;
  (this->SummonBossNeedItemText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SummonBossNeedItemText).StringEnumTableNameID.Number = 0;
  (this->SummonBossNeedItemText).DateTime.Ticks = 0;
  (this->SummonBossNeedItemText).TimeSpan.Ticks = 0;
  (this->SummonBossNeedItemText).TimeExpressionType = None;
  (this->SummonBossNeedItemText).IsExpression = false;
  (this->SummonBossNeedItemText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SummonBossNeedItemText).UniqueString.Data.ArrayNum = 0;
  (this->SummonBossNeedItemText).UniqueString.Data.ArrayMax = 0;
  (this->SummonBossNeedItemText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SummonBossNeedItemText).FormatArgs.ArrayNum = 0;
  (this->SummonBossNeedItemText).FormatArgs.ArrayMax = 0;
  (this->SummonBossTitleText).StringTableType = None;
  (this->SummonBossTitleText).StringTableID = 0;
  (this->SummonBossTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SummonBossTitleText).StringEnumTableNameID.Number = 0;
  (this->SummonBossTitleText).DateTime.Ticks = 0;
  (this->SummonBossTitleText).TimeSpan.Ticks = 0;
  (this->SummonBossTitleText).TimeExpressionType = None;
  (this->SummonBossTitleText).IsExpression = false;
  (this->SummonBossTitleText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SummonBossTitleText).UniqueString.Data.ArrayNum = 0;
  (this->SummonBossTitleText).UniqueString.Data.ArrayMax = 0;
  (this->SummonBossTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SummonBossTitleText).FormatArgs.ArrayNum = 0;
  (this->SummonBossTitleText).FormatArgs.ArrayMax = 0;
  (this->SummonBossButtonClickEvent)._padding_ = '\0';
  (this->SummonBossButtonClickEvent).bIsCustomSelected = false;
  (this->SummonBossButtonClickEvent).bIsLacked = false;
  (this->SummonBossButtonClickEvent).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_SummonBoss @ 14b6e68f0

UDS_VM_SummonBoss * __thiscall
UDS_VM_SummonBoss::UDS_VM_SummonBoss(UDS_VM_SummonBoss *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SummonBoss__6B_;
  *(undefined8 *)&(this->SummonBossButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->SummonBossButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SummonBossButtonClickEvent).Delegate.field_0x10 = 0;
  (this->SummonBossButtonText).StringTableType = None;
  (this->SummonBossButtonText).StringTableID = 0;
  (this->SummonBossButtonText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SummonBossButtonText).StringEnumTableNameID.Number = 0;
  (this->SummonBossButtonText).DateTime.Ticks = 0;
  (this->SummonBossButtonText).TimeSpan.Ticks = 0;
  (this->SummonBossButtonText).TimeExpressionType = None;
  (this->SummonBossButtonText).IsExpression = false;
  (this->SummonBossButtonText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SummonBossButtonText).UniqueString.Data.ArrayNum = 0;
  (this->SummonBossButtonText).UniqueString.Data.ArrayMax = 0;
  (this->SummonBossButtonText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SummonBossButtonText).FormatArgs.ArrayNum = 0;
  (this->SummonBossButtonText).FormatArgs.ArrayMax = 0;
  (this->SummonBossNeedItemText).StringTableType = None;
  (this->SummonBossNeedItemText).StringTableID = 0;
  (this->SummonBossNeedItemText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SummonBossNeedItemText).StringEnumTableNameID.Number = 0;
  (this->SummonBossNeedItemText).DateTime.Ticks = 0;
  (this->SummonBossNeedItemText).TimeSpan.Ticks = 0;
  (this->SummonBossNeedItemText).TimeExpressionType = None;
  (this->SummonBossNeedItemText).IsExpression = false;
  (this->SummonBossNeedItemText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SummonBossNeedItemText).UniqueString.Data.ArrayNum = 0;
  (this->SummonBossNeedItemText).UniqueString.Data.ArrayMax = 0;
  (this->SummonBossNeedItemText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SummonBossNeedItemText).FormatArgs.ArrayNum = 0;
  (this->SummonBossNeedItemText).FormatArgs.ArrayMax = 0;
  (this->SummonBossTitleText).StringTableType = None;
  (this->SummonBossTitleText).StringTableID = 0;
  (this->SummonBossTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SummonBossTitleText).StringEnumTableNameID.Number = 0;
  (this->SummonBossTitleText).DateTime.Ticks = 0;
  (this->SummonBossTitleText).TimeSpan.Ticks = 0;
  (this->SummonBossTitleText).TimeExpressionType = None;
  (this->SummonBossTitleText).IsExpression = false;
  (this->SummonBossTitleText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SummonBossTitleText).UniqueString.Data.ArrayNum = 0;
  (this->SummonBossTitleText).UniqueString.Data.ArrayMax = 0;
  (this->SummonBossTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SummonBossTitleText).FormatArgs.ArrayNum = 0;
  (this->SummonBossTitleText).FormatArgs.ArrayMax = 0;
  (this->SummonBossButtonClickEvent)._padding_ = '\0';
  (this->SummonBossButtonClickEvent).bIsCustomSelected = false;
  (this->SummonBossButtonClickEvent).bIsLacked = false;
  (this->SummonBossButtonClickEvent).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_SummonBoss @ 14b6e76d0

void __thiscall UDS_VM_SummonBoss::~UDS_VM_SummonBoss(UDS_VM_SummonBoss *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SummonBoss__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SummonBossTitleText).FormatArgs.AllocatorInstance.Data,
             (this->SummonBossTitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->SummonBossTitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SummonBossTitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SummonBossNeedItemText).FormatArgs.AllocatorInstance.Data,
             (this->SummonBossNeedItemText).FormatArgs.ArrayNum);
  pFVar1 = (this->SummonBossNeedItemText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SummonBossNeedItemText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SummonBossButtonText).FormatArgs.AllocatorInstance.Data,
             (this->SummonBossButtonText).FormatArgs.ArrayNum);
  pFVar1 = (this->SummonBossButtonText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SummonBossButtonText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SummonBossButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->SummonBossButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SummonBossButtonClickEvent).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9bb0

IClassDescriptor * __thiscall
UDS_VM_SummonBoss::GetFieldNotificationDescriptor(UDS_VM_SummonBoss *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_SummonBoss::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea900

UClass * __cdecl UDS_VM_SummonBoss::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SummonBoss.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SummonBoss",
               &Z_Registration_Info_UClass_UDS_VM_SummonBoss.InnerSingleton,
               StaticRegisterNativesUDS_VM_SummonBoss,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SummonBoss>,
               InternalVTableHelperCtorCaller<UDS_VM_SummonBoss>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SummonBoss.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_SummonBoss @ 14b6ead20

void __cdecl UDS_VM_SummonBoss::StaticRegisterNativesUDS_VM_SummonBoss(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_SummonBoss_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEnableSummonBoss @ 14b6ebef0

void __cdecl UDS_VM_SummonBoss::execEnableSummonBoss(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = EnableSummonBoss((UDS_VM_SummonBoss *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execGetSummonBossList @ 14b6ec200

void __cdecl
UDS_VM_SummonBoss::execGetSummonBossList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetSummonBossList((UDS_VM_SummonBoss *)param_1,&local_18);
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

// EnableSummonBoss @ 14bf4f230

bool __thiscall UDS_VM_SummonBoss::EnableSummonBoss(UDS_VM_SummonBoss *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_SummonBoss *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_SummonBoss_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bf4f25e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bf4f25e:
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
                      (&bGEnsureHasExecuted<7645980323133521980>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBoss.cpp"
                       ,0x3c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  this_01 = (UDS_M_SummonBoss *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_SummonBoss::IsEnableSummonBoss(this_01);
  return bVar2;
}

// GetSummonBossList @ 14bf57f60

FDS_EntryBindingEventField * __thiscall
UDS_VM_SummonBoss::GetSummonBossList
          (UDS_VM_SummonBoss *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FDS_EntryBindingEventField *pFVar4;
  UDS_M_SummonBoss *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  this_00 = &this->_padding_;
  pUVar5 = (UObject *)0x0;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_SummonBoss_NoRegister();
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
    this_01 = (UDS_M_SummonBoss *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_SummonBoss::GetSummonBossList(this_01,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7645980323133521974>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBoss.cpp"
                     ,0x36,"false");
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

// InitViewModelCDO @ 14bf5c330

void __thiscall UDS_VM_SummonBoss::InitViewModelCDO(UDS_VM_SummonBoss *this)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  undefined4 local_res10 [2];
  UDS_VM_SummonBoss *local_res18;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_78._0_8_ = OnLoadWindowCallbackMenual;
  local_78.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_78.Accessor & 0xffffffff00000000);
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget__W4EDS_ContentsTabFrameType__U__TWeakObjectPtr_VUDS_ContentArguments__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_SummonBoss____A6AXPEAVUDS_UserWidget__W4EDS_ContentsTabFrameType__U__TWeakObjectPtr_VUDS_ContentArguments__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_SummonBoss *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_SummonBoss *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res18);
    puVar2[4] = local_78._0_8_;
    puVar2[5] = local_78.Accessor;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  local_res10[0] = 0x389;
  if (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._8_4_ !=
      UDS_ContentsController::OnLoadWindowCallbackManualDelegate._52_4_) {
    lVar4 = 0x154cef9f8;
    if (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._64_8_ != 0) {
      lVar4 = UDS_ContentsController::OnLoadWindowCallbackManualDelegate._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)
                             (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._72_4_ - 1
                             & 0x389) * 4);
    while (iVar1 != -1) {
      lVar4 = UDS_ContentsController::OnLoadWindowCallbackManualDelegate._0_8_ +
              (longlong)iVar1 * 0x28;
      if (*(int *)(UDS_ContentsController::OnLoadWindowCallbackManualDelegate._0_8_ +
                  (longlong)iVar1 * 0x28) == 0x389) {
        if (lVar4 != 0) goto LAB_14bf5c4d3;
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x20);
    }
  }
  local_78._0_8_ = local_res10;
  local_78.Accessor = &local_58.AccessDetector;
  TSet<TTuple<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_WindowWidget_&&,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_&&>_>
            (&UDS_ContentsController::OnLoadWindowCallbackManualDelegate,(uint)&local_res18,
             (TPairInitializer<EDS_WindowWidget_&&,TDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_&&>
              *)0x389,(bool *)&local_78);
LAB_14bf5c4d3:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// OnLoadWindowCallbackMenual @ 14bf647c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_SummonBoss::OnLoadWindowCallbackMenual
          (UDS_VM_SummonBoss *this,UDS_UserWidget *param_1,EDS_ContentsTabFrameType param_2,
          TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr> param_3)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FName *pFVar9;
  FName FVar10;
  FString *pFVar11;
  longlong *plVar12;
  FWeakObjectPtr local_res20;
  undefined1 auStackY_138 [32];
  FString local_108;
  FString local_f8;
  FWeakObjectPtr local_e8;
  UDS_UserWidget *local_e0;
  FName local_d8;
  undefined1 local_d0 [8];
  FName local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_res20 = param_3.WeakPtr;
  pUVar6 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UDS_M_SummonBoss_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar7);
  local_b8._8_8_ = pUVar6;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UObject *)0x0) goto LAB_14bf64898;
  }
  else {
    if (pUVar6 == (UObject *)0x0) {
LAB_14bf64898:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7645980323133521944>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBoss.cpp"
                         ,0x18,"false");
      if (!bVar4) {
        return;
      }
      goto code_r0x00014bf6488d;
    }
    UE::GC::MarkAsReachable(pUVar6);
  }
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar4) {
    pUVar8 = FWeakObjectPtr::Get(&local_res20);
    pFVar9 = ::FName::FName(&local_d8,L"AltarEntityID");
    TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
    ::Find((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
            *)(pUVar8 + 9),*pFVar9);
    ::FString::PrintfImpl(&local_108,L"%lld");
    FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossData>
                       ((FDS_DataContainer *)&pUVar6[1].field_0x18,(EDS_SummonBossData)local_d0);
    uVar1 = *(undefined8 *)FVar10;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar6[1].field_0x18,uVar5 + (int)((ulonglong)uVar1 >> 0x20),
                         (FName *)FVar10);
    if (pFVar11 != &local_108) {
      pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar11->Data).AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->Data).ArrayNum = local_108.Data.ArrayNum;
      (pFVar11->Data).ArrayMax = local_108.Data.ArrayMax;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pUVar8 = FWeakObjectPtr::Get(&local_res20);
    pFVar9 = ::FName::FName(&local_c8,L"InteractionID");
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Find
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)(pUVar8 + 3),*pFVar9);
    ::FString::PrintfImpl(&local_f8,L"%d");
    FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossData>
                       ((FDS_DataContainer *)&pUVar6[1].field_0x18,(EDS_SummonBossData)local_c0);
    uVar1 = *(undefined8 *)FVar10;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar6[1].field_0x18,uVar5 + (int)((ulonglong)uVar1 >> 0x20),
                         (FName *)FVar10);
    if (pFVar11 != &local_f8) {
      pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar11->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->Data).ArrayNum = local_f8.Data.ArrayNum;
      (pFVar11->Data).ArrayMax = local_f8.Data.ArrayMax;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    pcVar3 = *(code **)(*(longlong *)pUVar6 + 0x2e8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_e8.ObjectIndex = 0;
    local_e8.ObjectSerialNumber = 0;
    local_e0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_e0);
    (*pcVar3)(pUVar6,local_e8);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7645980323133521946>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBoss.cpp"
                       ,0x1a,"false");
    if (bVar4) {
code_r0x00014bf6488d:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bf6e070

void __thiscall
UDS_VM_SummonBoss::OnSetViewModel
          (UDS_VM_SummonBoss *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
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
  FDS_Text::SetTextFromStringTable(&this->SummonBossTitleText,StringUi,0x57e41);
  FDS_Text::SetTextFromStringTable(&this->SummonBossNeedItemText,StringUi,0x57e42);
  FDS_Text::SetTextFromStringTable(&this->SummonBossButtonText,StringUi,0x57e43);
  plVar1 = &this->_padding_;
  local_18.SharedReferenceCount.ReferenceController._0_4_ =
       FFieldNotificationClassDescriptor::SummonBossButtonText.BitNumber;
  local_18.Object =
       (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::SummonBossButtonText.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_18.SharedReferenceCount.ReferenceController._0_4_ =
       FFieldNotificationClassDescriptor::SummonBossNeedItemText.BitNumber;
  local_18.Object =
       (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::SummonBossNeedItemText.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_18.SharedReferenceCount.ReferenceController._0_4_ =
       FFieldNotificationClassDescriptor::SummonBossTitleText.BitNumber;
  local_18.Object =
       (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::SummonBossTitleText.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSummonBossButtonClickEvent @ 14bf71a30

void __thiscall
UDS_VM_SummonBoss::OnSummonBossButtonClickEvent
          (UDS_VM_SummonBoss *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_SummonBoss *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_SummonBoss_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bf71a5e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bf71a5e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_01 = (UDS_M_SummonBoss *)FWeakObjectPtr::Get(local_res8);
    UDS_M_SummonBoss::OnClickedSummonBoss(this_01);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7645980323133521986>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\SummonBoss\\DS_VM_SummonBoss.cpp"
                       ,0x42,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateView @ 14bf8b3d0

void __thiscall
UDS_VM_SummonBoss::UpdateView
          (UDS_VM_SummonBoss *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::GetSummonBossList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetSummonBossList.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EnableSummonBoss.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EnableSummonBoss.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

