// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b747d20

UClass * __cdecl UDS_VM_W_NpcRelation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_NpcRelation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_NpcRelation",
               &Z_Registration_Info_UClass_UDS_VM_W_NpcRelation.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_NpcRelation,0x150,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_NpcRelation>,
               InternalVTableHelperCtorCaller<UDS_VM_W_NpcRelation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_NpcRelation.InnerSingleton;
}

// UDS_VM_W_NpcRelation @ 14b74cfa0

UDS_VM_W_NpcRelation * __thiscall
UDS_VM_W_NpcRelation::UDS_VM_W_NpcRelation(UDS_VM_W_NpcRelation *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_NpcRelation__6B_;
  (this->VM_W_NpcRelationGauge).field0_0x0.DebugPtr = (UDS_VM_W_Common_LevelGauge *)0x0;
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
  (this->FixedText_Btn_Give).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Give).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Give).DateTime.Ticks = 0;
  (this->FixedText_Btn_Give).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Give).TimeExpressionType = None;
  (this->FixedText_Btn_Give).IsExpression = false;
  (this->FixedText_Btn_Give).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Give).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Give).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Give).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Give).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Give).FormatArgs.ArrayMax = 0;
  (this->M_NpcRelationGauge).field0_0x0.DebugPtr = (UDS_M_CommonLevelGauge_NpcRelation *)0x0;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0x4e202;
  (this->FixedText_Btn_Give).StringTableType = StringUi;
  (this->FixedText_Btn_Give).StringTableID = 0x4e20c;
  return this;
}

// UDS_VM_W_NpcRelation @ 14b74d090

UDS_VM_W_NpcRelation * __thiscall
UDS_VM_W_NpcRelation::UDS_VM_W_NpcRelation(UDS_VM_W_NpcRelation *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_NpcRelation__6B_;
  (this->VM_W_NpcRelationGauge).field0_0x0.DebugPtr = (UDS_VM_W_Common_LevelGauge *)0x0;
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
  (this->FixedText_Btn_Give).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Give).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Give).DateTime.Ticks = 0;
  (this->FixedText_Btn_Give).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Give).TimeExpressionType = None;
  (this->FixedText_Btn_Give).IsExpression = false;
  (this->FixedText_Btn_Give).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Give).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Give).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Give).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Give).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Give).FormatArgs.ArrayMax = 0;
  (this->M_NpcRelationGauge).field0_0x0.DebugPtr = (UDS_M_CommonLevelGauge_NpcRelation *)0x0;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0x4e202;
  (this->FixedText_Btn_Give).StringTableType = StringUi;
  (this->FixedText_Btn_Give).StringTableID = 0x4e20c;
  return this;
}

// ~UDS_VM_W_NpcRelation @ 14b74ef50

void __thiscall UDS_VM_W_NpcRelation::~UDS_VM_W_NpcRelation(UDS_VM_W_NpcRelation *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_NpcRelation__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Give).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Give).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Give).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Give).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7512b0

IClassDescriptor * __thiscall
UDS_VM_W_NpcRelation::GetFieldNotificationDescriptor(UDS_VM_W_NpcRelation *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_NpcRelation::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b751a80

UClass * __cdecl UDS_VM_W_NpcRelation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_NpcRelation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_NpcRelation",
               &Z_Registration_Info_UClass_UDS_VM_W_NpcRelation.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_NpcRelation,0x150,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_NpcRelation>,
               InternalVTableHelperCtorCaller<UDS_VM_W_NpcRelation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_NpcRelation.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_NpcRelation @ 14b7523e0

void __cdecl UDS_VM_W_NpcRelation::StaticRegisterNativesUDS_VM_W_NpcRelation(void)

{
  return;
}

// BindModel @ 14c003300

void __thiscall UDS_VM_W_NpcRelation::BindModel(UDS_VM_W_NpcRelation *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClearedBasket,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ItemBasketType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_NpcRelation>
              (&pUVar1->OnClearedBasket,(UDS_VM_W_NpcRelation *)&stack0x00000010,
               (pmf_49ea22c5 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasket,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_NpcRelation>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBasket,(UDS_VM_W_NpcRelation *)&stack0x00000010,
               (pmf_0a1c7a74 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemovedBasketSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_NpcRelation>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemovedBasketSlot,(UDS_VM_W_NpcRelation *)&stack0x00000010,
               (pmf_7a305576 *)this);
  }
  return;
}

// OnCleardBasket @ 14c025f20

void __thiscall
UDS_VM_W_NpcRelation::OnCleardBasket(UDS_VM_W_NpcRelation *this,EDS_ItemBasketType param_1)

{
  UDS_M_CommonLevelGauge_NpcRelation *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ViewModelContext *pFVar3;
  UDS_VM_W_Common_LevelGauge *this_00;
  longlong *plVar4;
  atomic<int> *paVar5;
  TSharedPtr<FDS_ViewModelContext,1> TStack_18;
  
  pUVar1 = (this->M_NpcRelationGauge).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_M_CommonLevelGauge_NpcRelation *)0x0) &&
     ((this->VM_W_NpcRelationGauge).field0_0x0.DebugPtr != (UDS_VM_W_Common_LevelGauge *)0x0)) {
    plVar4 = (longlong *)(**(code **)(pUVar1->_padding_ + 0x310))(pUVar1,&TStack_18);
    pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
    pFVar3 = (FDS_ViewModelContext *)*plVar4;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar5 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar5 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_18.SharedReferenceCount.ReferenceController);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      this_00 = (this->VM_W_NpcRelationGauge).field0_0x0.DebugPtr;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar5 = (atomic<int>)((int)*paVar5 + 1);
        UNLOCK();
      }
      TStack_18.Object = pFVar3;
      TStack_18.SharedReferenceCount.ReferenceController = pTVar2;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&TStack_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    TStack_18.SharedReferenceCount.ReferenceController._0_4_ =
         FFieldNotificationClassDescriptor::VM_W_NpcRelationGauge.BitNumber;
    TStack_18.Object =
         (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::VM_W_NpcRelationGauge.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_18);
  }
  return;
}

// OnRemovedBasketSlot @ 14c02e870

void __thiscall UDS_VM_W_NpcRelation::OnRemovedBasketSlot(UDS_VM_W_NpcRelation *this,int param_1)

{
  UDS_M_CommonLevelGauge_NpcRelation *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ViewModelContext *pFVar3;
  UDS_VM_W_Common_LevelGauge *this_00;
  longlong *plVar4;
  atomic<int> *paVar5;
  TSharedPtr<FDS_ViewModelContext,1> TStack_18;
  
  pUVar1 = (this->M_NpcRelationGauge).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_M_CommonLevelGauge_NpcRelation *)0x0) &&
     ((this->VM_W_NpcRelationGauge).field0_0x0.DebugPtr != (UDS_VM_W_Common_LevelGauge *)0x0)) {
    plVar4 = (longlong *)(**(code **)(pUVar1->_padding_ + 0x310))(pUVar1,&TStack_18);
    pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
    pFVar3 = (FDS_ViewModelContext *)*plVar4;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar5 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar5 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_18.SharedReferenceCount.ReferenceController);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      this_00 = (this->VM_W_NpcRelationGauge).field0_0x0.DebugPtr;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar5 = (atomic<int>)((int)*paVar5 + 1);
        UNLOCK();
      }
      TStack_18.Object = pFVar3;
      TStack_18.SharedReferenceCount.ReferenceController = pTVar2;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&TStack_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    TStack_18.SharedReferenceCount.ReferenceController._0_4_ =
         FFieldNotificationClassDescriptor::VM_W_NpcRelationGauge.BitNumber;
    TStack_18.Object =
         (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::VM_W_NpcRelationGauge.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_18);
  }
  return;
}

// OnSetViewModel @ 14c033090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_NpcRelation::OnSetViewModel
          (UDS_VM_W_NpcRelation *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UClass *pUVar5;
  UDS_M_CommonLevelGauge_NpcRelation *this_00;
  UClass *pUVar6;
  UDS_VM_W_Common_LevelGauge *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_2b8 [32];
  TSharedPtr<FDS_ViewModelContext_NpcGift,1> local_280;
  TSharedPtr<FDS_ViewModelContext,1> local_270;
  undefined1 local_258 [128];
  undefined1 local_1d8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_270.Object = param_1->Object;
  local_270.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_270.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_270.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_270.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NpcGift>(&local_280,&local_270);
  if (local_280.Object == (FDS_ViewModelContext_NpcGift *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_NpcRelation::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x15,L"context is Invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9106028977662722070>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_NpcRelation.cpp"
                       ,0x16,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((this->M_NpcRelationGauge).field0_0x0.DebugPtr == (UDS_M_CommonLevelGauge_NpcRelation *)0x0)
    {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = Z_Construct_UClass_UDS_M_CommonLevelGauge_NpcRelation_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1d8,pUVar5);
      local_1d8._8_8_ = this;
      this_00 = (UDS_M_CommonLevelGauge_NpcRelation *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
      if (local_1d8._64_8_ != 0) {
        plVar8 = (longlong *)(local_1d8 + 0x50);
        if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_1d8._104_8_;
        }
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_M_CommonLevelGauge_NpcRelation *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->M_NpcRelationGauge).field0_0x0.DebugPtr = this_00;
      if ((local_280.Object == (FDS_ViewModelContext_NpcGift *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UDS_M_CommonLevelGauge_NpcRelation::SetNpcRelationInfo
                (this_00,(local_280.Object)->PlayerEntityID,(local_280.Object)->NpcTID);
    }
    if ((this->VM_W_NpcRelationGauge).field0_0x0.DebugPtr == (UDS_VM_W_Common_LevelGauge *)0x0) {
      pUVar5 = Z_Construct_UClass_UDS_VM_W_Common_LevelGauge_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_VM_W_Common_LevelGauge_NoRegister();
      CheckIsClassChildOf_Internal(pUVar6,pUVar5);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_258,pUVar5);
      local_258._48_8_ = (FObjectInstancingGraph *)0x0;
      local_258._56_8_ = (UPackage *)0x0;
      local_258._16_4_ = 0;
      local_258._20_4_ = 0;
      local_258._24_4_ = RF_Transient;
      local_258._40_8_ = (UObject *)0x0;
      local_258[0x20] = false;
      local_258._8_8_ = this;
      pUVar7 = (UDS_VM_W_Common_LevelGauge *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_258);
      if (local_258._64_8_ != 0) {
        plVar8 = (longlong *)(local_258 + 0x50);
        if ((longlong *)local_258._104_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_258._104_8_;
        }
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      if (pUVar7 != (UDS_VM_W_Common_LevelGauge *)0x0) {
        *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UDS_VM_W_Common_LevelGauge *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      (this->VM_W_NpcRelationGauge).field0_0x0.DebugPtr = pUVar7;
    }
    UpdateRelationGauge(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14c048bc0

void __thiscall UDS_VM_W_NpcRelation::UnbindModel(UDS_VM_W_NpcRelation *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClearedBasket,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasket,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemovedBasketSlot,
               this);
  }
  return;
}

// UpdateRelationGauge @ 14c04df10

void __thiscall UDS_VM_W_NpcRelation::UpdateRelationGauge(UDS_VM_W_NpcRelation *this)

{
  UDS_M_CommonLevelGauge_NpcRelation *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ViewModelContext *pFVar3;
  UDS_VM_W_Common_LevelGauge *this_00;
  longlong *plVar4;
  atomic<int> *paVar5;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pUVar1 = (this->M_NpcRelationGauge).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_M_CommonLevelGauge_NpcRelation *)0x0) &&
     ((this->VM_W_NpcRelationGauge).field0_0x0.DebugPtr != (UDS_VM_W_Common_LevelGauge *)0x0)) {
    plVar4 = (longlong *)(**(code **)(pUVar1->_padding_ + 0x310))(pUVar1,&local_18);
    pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
    pFVar3 = (FDS_ViewModelContext *)*plVar4;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar5 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar5 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      this_00 = (this->VM_W_NpcRelationGauge).field0_0x0.DebugPtr;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar5 = (atomic<int>)((int)*paVar5 + 1);
        UNLOCK();
      }
      local_18.Object = pFVar3;
      local_18.SharedReferenceCount.ReferenceController = pTVar2;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_18.SharedReferenceCount.ReferenceController._0_4_ =
         FFieldNotificationClassDescriptor::VM_W_NpcRelationGauge.BitNumber;
    local_18.Object =
         (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::VM_W_NpcRelationGauge.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

