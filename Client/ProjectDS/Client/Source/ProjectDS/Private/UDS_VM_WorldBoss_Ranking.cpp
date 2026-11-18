// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b6fb4a0

UClass * __cdecl UDS_VM_WorldBoss_Ranking::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_Ranking.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_Ranking",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_Ranking.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_Ranking,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldBoss_Ranking>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_Ranking>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_Ranking.InnerSingleton;
}

// UDS_VM_WorldBoss_Ranking @ 14b700900

UDS_VM_WorldBoss_Ranking * __thiscall
UDS_VM_WorldBoss_Ranking::UDS_VM_WorldBoss_Ranking
          (UDS_VM_WorldBoss_Ranking *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_Ranking__6B_;
  (this->RankingList_ViewModel).field0_0x0.DebugPtr = (UDS_VM_WorldBoss_RankingList *)0x0;
  (this->TitleLabel_Text).StringTableType = None;
  (this->TitleLabel_Text).StringTableID = 0;
  (this->TitleLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleLabel_Text).StringEnumTableNameID.Number = 0;
  (this->TitleLabel_Text).DateTime.Ticks = 0;
  (this->TitleLabel_Text).TimeSpan.Ticks = 0;
  (this->TitleLabel_Text).TimeExpressionType = None;
  (this->TitleLabel_Text).IsExpression = false;
  (this->TitleLabel_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->TitleLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->TitleLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabel_Text).FormatArgs.ArrayNum = 0;
  (this->TitleLabel_Text).FormatArgs.ArrayMax = 0;
  (this->RankingListEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RankingListEventField).UserObjectList.ArrayNum = 0;
  (this->RankingListEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_WorldBoss_Ranking @ 14b7009a0

UDS_VM_WorldBoss_Ranking * __thiscall
UDS_VM_WorldBoss_Ranking::UDS_VM_WorldBoss_Ranking
          (UDS_VM_WorldBoss_Ranking *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_Ranking__6B_;
  (this->RankingList_ViewModel).field0_0x0.DebugPtr = (UDS_VM_WorldBoss_RankingList *)0x0;
  (this->TitleLabel_Text).StringTableType = None;
  (this->TitleLabel_Text).StringTableID = 0;
  (this->TitleLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleLabel_Text).StringEnumTableNameID.Number = 0;
  (this->TitleLabel_Text).DateTime.Ticks = 0;
  (this->TitleLabel_Text).TimeSpan.Ticks = 0;
  (this->TitleLabel_Text).TimeExpressionType = None;
  (this->TitleLabel_Text).IsExpression = false;
  (this->TitleLabel_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->TitleLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->TitleLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabel_Text).FormatArgs.ArrayNum = 0;
  (this->TitleLabel_Text).FormatArgs.ArrayMax = 0;
  (this->RankingListEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RankingListEventField).UserObjectList.ArrayNum = 0;
  (this->RankingListEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_WorldBoss_Ranking @ 14b702f00

void __thiscall UDS_VM_WorldBoss_Ranking::~UDS_VM_WorldBoss_Ranking(UDS_VM_WorldBoss_Ranking *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_Ranking__6B_;
  pFVar1 = (this->RankingListEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleLabel_Text).FormatArgs.AllocatorInstance.Data,
             (this->TitleLabel_Text).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleLabel_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleLabel_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b705f90

IClassDescriptor * __thiscall
UDS_VM_WorldBoss_Ranking::GetFieldNotificationDescriptor(UDS_VM_WorldBoss_Ranking *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldBoss_Ranking::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b706ad0

UClass * __cdecl UDS_VM_WorldBoss_Ranking::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_Ranking.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_Ranking",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_Ranking.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_Ranking,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldBoss_Ranking>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_Ranking>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_Ranking.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldBoss_Ranking @ 14b7076a0

void __cdecl UDS_VM_WorldBoss_Ranking::StaticRegisterNativesUDS_VM_WorldBoss_Ranking(void)

{
  return;
}

// BindModel @ 14c003cc0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_Ranking::BindModel(UDS_VM_WorldBoss_Ranking *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14c01f740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_Ranking::InitViewModel(UDS_VM_WorldBoss_Ranking *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_WorldBoss_RankingList *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->RankingList_ViewModel).field0_0x0.DebugPtr == (UDS_VM_WorldBoss_RankingList *)0x0) {
    local_a8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_WorldBoss_RankingList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_WorldBoss_RankingList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar3 = (UDS_VM_WorldBoss_RankingList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_WorldBoss_RankingList *)0x0) {
      pUVar3->field_0x8c = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_WorldBoss_RankingList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->RankingList_ViewModel).field0_0x0.DebugPtr = pUVar3;
    this->RankingListSwitcher = 0;
  }
  else {
    this->RankingListSwitcher = 0;
  }
  return;
}

// OnSetViewModel @ 14c036ed0

void __thiscall
UDS_VM_WorldBoss_Ranking::OnSetViewModel
          (UDS_VM_WorldBoss_Ranking *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_ViewModelBase *this_00;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this_00 = (UDS_ViewModelBase *)(this->RankingList_ViewModel).field0_0x0.DebugPtr;
  if (this_00 != (UDS_ViewModelBase *)0x0) {
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
    UDS_ViewModelBase::SetContext(this_00,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetRankingEntryEventField @ 14c042ea0

void __thiscall
UDS_VM_WorldBoss_Ranking::SetRankingEntryEventField
          (UDS_VM_WorldBoss_Ranking *this,FDS_EntryBindingEventField *param_1)

{
  int *piVar1;
  FDS_EntryBindingEventField *this_00;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FName local_18;
  int local_10;
  
  this_00 = &this->RankingListEventField;
  FDS_EntryBindingEventField::Reset(this_00);
  if (this_00 != param_1) {
    iVar2 = (this->RankingListEventField).UserObjectList.ArrayMax;
    piVar1 = &(this->RankingListEventField).UserObjectList.ArrayMax;
    iVar3 = (param_1->UserObjectList).ArrayNum;
    pFVar4 = (param_1->UserObjectList).AllocatorInstance.Data;
    (this->RankingListEventField).UserObjectList.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,iVar2,(ForAnyElementType *)this_00,iVar3,piVar1);
      ConstructItems<TObjectPtr<UDS_UserObjectListItem>,TObjectPtr<UDS_UserObjectListItem>,int>
                ((this_00->UserObjectList).AllocatorInstance.Data,
                 (TObjectPtr<UDS_UserObjectListItem> *)pFVar4,iVar3);
    }
  }
  local_10 = FFieldNotificationClassDescriptor::RankingListEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RankingListEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetRankingListSwitcher @ 14c042f60

void __thiscall
UDS_VM_WorldBoss_Ranking::SetRankingListSwitcher(UDS_VM_WorldBoss_Ranking *this,int *param_1)

{
  return;
}

// UnbindModel @ 14c0490d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_Ranking::UnbindModel(UDS_VM_WorldBoss_Ranking *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

