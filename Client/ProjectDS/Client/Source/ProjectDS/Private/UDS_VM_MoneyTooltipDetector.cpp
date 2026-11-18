// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetHoveredEvent_WrapperImpl @ 14b6a2060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_MoneyTooltipDetector::SetHoveredEvent_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  UDS_WindowManager *this;
  UDS_LogManager *pUVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  EDS_WindowWidget EVar4;
  undefined1 auStackY_198 [32];
  code *pcStack_168;
  undefined8 uStack_160;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> TStack_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_MoneyTooltipDetector::OnHoveredEvent",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x28,L"UDS_WindowManager is nullptr")
      ;
      if ((UDS_WindowManager *)TStack_138._padding_ != (UDS_WindowManager *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    cVar1 = *(char *)((longlong)param_1 + 0xf8);
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      uStack_160 = (ulonglong)uStack_160._4_4_ << 0x20;
      pcStack_168 = OnOpenWindowCallback_CoinTooltip;
      pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               CreateUObject<UDS_VM_MoneyTooltipDetector>
                         (&TStack_158,param_1,(pmf_032593b8 *)&pcStack_168);
      EVar4 = CoinToolTip;
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      uStack_160 = (ulonglong)uStack_160._4_4_ << 0x20;
      pcStack_168 = OnOpenWindowCallback_TextTooltip;
      pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               CreateUObject<UDS_VM_MoneyTooltipDetector>
                         (&TStack_158,param_1,(pmf_032593b8 *)&pcStack_168);
      EVar4 = CommonTextTooltip;
    }
    UDS_WindowManager::OpenWindow(this,EVar4,pTVar3);
  }
  return;
}

// SetUnhoveredEvent_WrapperImpl @ 14b6a2070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_MoneyTooltipDetector::SetUnhoveredEvent_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  UDS_WindowManager *this;
  UDS_LogManager *pUVar2;
  EDS_WindowWidget EVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 auStackY_178 [32];
  float fStack_148;
  float afStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_MoneyTooltipDetector::OnUnhoveredEvent",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x41,L"UDS_WindowManager is nullptr")
      ;
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    cVar1 = *(char *)((longlong)param_1 + 0xf8);
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      pfVar5 = afStack_144;
      EVar3 = CoinToolTip;
      pfVar4 = &fStack_148;
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      pfVar5 = &fStack_148;
      EVar3 = CommonTextTooltip;
      pfVar4 = afStack_144;
    }
    afStack_144[0] = 0.0;
    fStack_148 = 0.0;
    UDS_WindowManager::CloseWindow(this,EVar3,(uint *)pfVar4,pfVar5);
  }
  return;
}

// SetMoneyType_WrapperImpl @ 14b6a2080

void __cdecl UDS_VM_MoneyTooltipDetector::SetMoneyType_WrapperImpl(void *param_1,void *param_2)

{
  EDS_MoneyType aEStackX_8 [32];
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xe0) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::MoneyType.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MoneyType.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  aEStackX_8[0] = *(EDS_MoneyType *)((longlong)param_1 + 0xe0);
  TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>::CopyToEmpty<enum_EDS_MoneyType,int>
            ((void *)((longlong)param_1 + 0xe8),aEStackX_8,1,*(int *)((longlong)param_1 + 0xf4));
  return;
}

// StaticClass @ 14b6a2090

UClass * __cdecl UDS_VM_MoneyTooltipDetector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MoneyTooltipDetector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MoneyTooltipDetector",
               &Z_Registration_Info_UClass_UDS_VM_MoneyTooltipDetector.InnerSingleton,
               StaticRegisterNativesUDS_VM_MoneyTooltipDetector,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_MoneyTooltipDetector>,
               InternalVTableHelperCtorCaller<UDS_VM_MoneyTooltipDetector>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MoneyTooltipDetector.InnerSingleton;
}

// UDS_VM_MoneyTooltipDetector @ 14b6a4f30

UDS_VM_MoneyTooltipDetector * __thiscall
UDS_VM_MoneyTooltipDetector::UDS_VM_MoneyTooltipDetector
          (UDS_VM_MoneyTooltipDetector *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyTooltipDetector__6B_;
  *(undefined8 *)&(this->HoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->HoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->HoveredEvent).Delegate.field_0x10 = 0;
  (this->UnhoveredEvent)._padding_ = '\0';
  (this->UnhoveredEvent).bIsCustomSelected = false;
  (this->UnhoveredEvent).bIsLacked = false;
  (this->UnhoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->UnhoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->UnhoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->UnhoveredEvent).Delegate.field_0x10 = 0;
  (this->MoneyTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MoneyTypes).ArrayNum = 0;
  (this->MoneyTypes).ArrayMax = 0;
  (this->HoveredEvent)._padding_ = '\0';
  (this->HoveredEvent).bIsCustomSelected = false;
  (this->HoveredEvent).bIsLacked = false;
  (this->HoveredEvent).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_MoneyTooltipDetector @ 14b6a4fc0

UDS_VM_MoneyTooltipDetector * __thiscall
UDS_VM_MoneyTooltipDetector::UDS_VM_MoneyTooltipDetector
          (UDS_VM_MoneyTooltipDetector *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyTooltipDetector__6B_;
  *(undefined8 *)&(this->HoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->HoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->HoveredEvent).Delegate.field_0x10 = 0;
  (this->UnhoveredEvent)._padding_ = '\0';
  (this->UnhoveredEvent).bIsCustomSelected = false;
  (this->UnhoveredEvent).bIsLacked = false;
  (this->UnhoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->UnhoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->UnhoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->UnhoveredEvent).Delegate.field_0x10 = 0;
  (this->MoneyTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MoneyTypes).ArrayNum = 0;
  (this->MoneyTypes).ArrayMax = 0;
  (this->HoveredEvent)._padding_ = '\0';
  (this->HoveredEvent).bIsCustomSelected = false;
  (this->HoveredEvent).bIsLacked = false;
  (this->HoveredEvent).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_MoneyTooltipDetector @ 14b6a7020

void __thiscall
UDS_VM_MoneyTooltipDetector::~UDS_VM_MoneyTooltipDetector(UDS_VM_MoneyTooltipDetector *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyTooltipDetector__6B_;
  pFVar1 = (this->MoneyTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->UnhoveredEvent).Delegate);
  pvVar2 = *(void **)&(this->UnhoveredEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->UnhoveredEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HoveredEvent).Delegate);
  pvVar2 = *(void **)&(this->HoveredEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HoveredEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a9710

IClassDescriptor * __thiscall
UDS_VM_MoneyTooltipDetector::GetFieldNotificationDescriptor(UDS_VM_MoneyTooltipDetector *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MoneyTooltipDetector::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6a9f80

UClass * __cdecl UDS_VM_MoneyTooltipDetector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MoneyTooltipDetector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MoneyTooltipDetector",
               &Z_Registration_Info_UClass_UDS_VM_MoneyTooltipDetector.InnerSingleton,
               StaticRegisterNativesUDS_VM_MoneyTooltipDetector,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_MoneyTooltipDetector>,
               InternalVTableHelperCtorCaller<UDS_VM_MoneyTooltipDetector>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MoneyTooltipDetector.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MoneyTooltipDetector @ 14b6aac50

void __cdecl UDS_VM_MoneyTooltipDetector::StaticRegisterNativesUDS_VM_MoneyTooltipDetector(void)

{
  return;
}

// OnHoveredEvent @ 14bdcee70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MoneyTooltipDetector::OnHoveredEvent
          (UDS_VM_MoneyTooltipDetector *this,FDS_ButtonEventField *param_1)

{
  EDS_MoneyToolTipType EVar1;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  EDS_WindowWidget EVar4;
  undefined1 auStackY_198 [32];
  code *local_168;
  undefined8 uStack_160;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_MoneyTooltipDetector::OnHoveredEvent",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x28,L"UDS_WindowManager is nullptr");
      if ((UDS_WindowManager *)local_138._padding_ != (UDS_WindowManager *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    EVar1 = this->ToolTipType;
    if ((EVar1 == Money) || (EVar1 == MoneyETC)) {
      uStack_160 = (ulonglong)uStack_160._4_4_ << 0x20;
      local_168 = OnOpenWindowCallback_CoinTooltip;
      pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               CreateUObject<UDS_VM_MoneyTooltipDetector>
                         (&local_158,this,(pmf_032593b8 *)&local_168);
      EVar4 = CoinToolTip;
    }
    else {
      if (EVar1 != MoneyDescription) {
        return;
      }
      uStack_160 = (ulonglong)uStack_160._4_4_ << 0x20;
      local_168 = OnOpenWindowCallback_TextTooltip;
      pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               CreateUObject<UDS_VM_MoneyTooltipDetector>
                         (&local_158,this,(pmf_032593b8 *)&local_168);
      EVar4 = CommonTextTooltip;
    }
    UDS_WindowManager::OpenWindow(this_00,EVar4,pTVar3);
  }
  return;
}

// OnOpenWindowCallback_CoinTooltip @ 14bdd0ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MoneyTooltipDetector::OnOpenWindowCallback_CoinTooltip
          (UDS_VM_MoneyTooltipDetector *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  TVector2<double> *pTVar6;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1b8;
  FWeakObjectPtr local_1b0;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  UDS_UserWidget *local_198;
  UDS_UserWidget *local_190;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TVector2<double>_u_0 local_178;
  TVector2<double> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_MoneyTooltipDetector::OnOpenWindowCallback_CoinTooltip",0x3d,Yes
                );
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x5a,L"InUserWidget is nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pFVar4 = ::operator_new(0x38);
    pFVar8 = (FDS_ViewModelContext *)0x0;
    pFVar7 = pFVar8;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      *(undefined4 *)((longlong)&pFVar4[1].ViewModelName.ComparisonIndex.Value + 1) = 0;
      *(undefined2 *)((longlong)&pFVar4[1].ViewModelName.Number + 1) = 0;
      *(undefined1 *)((longlong)&pFVar4[1].ViewModelName.Number + 3) = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonCoinTooltip__6B_;
      pFVar4[1]._padding_ = 0;
      *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
      *(undefined1 *)&pFVar4[1].ViewModelName.ComparisonIndex.Value = 1;
      pFVar7 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonCoinTooltip__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar7;
      pFVar8 = pFVar4;
    }
    if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_CommonCoinTooltip::StaticStruct();
    *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar5;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar8->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_188.Object = pFVar7;
      local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
    }
    pFVar7->ViewModelTemplateKey = W_Common_Coin_ToolTip;
    TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>::operator=(pFVar7 + 1,&this->MoneyTypes);
    *(bool *)&pFVar7[1].ViewModelName.ComparisonIndex.Value = this->ToolTipType == MoneyETC;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_1a8.Object = pFVar7;
    local_1a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1b8.ObjectIndex = 0;
    local_1b8.ObjectSerialNumber = 0;
    local_198 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1b8,(FObjectPtr)&local_198);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1b8,&local_1a8,false);
    local_1a8.Object = (FDS_ViewModelContext *)(this->Margin).field0_0x0._s_0.X;
    local_1a8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(this->Margin).field0_0x0._s_0.Y;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1b0.ObjectIndex = 0;
    local_1b0.ObjectSerialNumber = 0;
    local_190 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1b0,(FObjectPtr)&local_190);
    local_178._s_0.X = (double)local_1a8.Object;
    local_178._s_0.Y = (double)local_1a8.SharedReferenceCount.ReferenceController;
    pTVar6 = DS_Util::TransformTooltipPositionOnMouse
                       (&local_168,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1b0,
                        (TVector2<double> *)&local_178._s_0,None);
    UDS_UserWidget::OnSetWindowPosition(param_1,pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
  }
  return;
}

// OnOpenWindowCallback_TextTooltip @ 14bdd0fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MoneyTooltipDetector::OnOpenWindowCallback_TextTooltip
          (UDS_VM_MoneyTooltipDetector *this,UDS_UserWidget *param_1)

{
  FScriptContainerElement *_Src;
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  UDS_LogManager *pUVar6;
  FDS_MoneyBaseTableRow *this_00;
  UObject *pUVar7;
  UDS_ModelBase *pUVar8;
  FDS_StringUiTableRow *pFVar9;
  FText *this_01;
  FString *pFVar10;
  FName FVar11;
  double *pdVar12;
  TVector2<double> *pTVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStackY_258 [32];
  wchar_t *pwVar16;
  FWeakObjectPtr local_218;
  UDS_UserWidget *local_210;
  FName local_208;
  int local_200;
  int local_1fc;
  TVector2<double>_u_0 local_1f8;
  TVector2<double>_u_0 local_1e8;
  FDS_Text local_1d8;
  FName local_188 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_VM_MoneyTooltipDetector::OnOpenWindowCallback_TextTooltip",0x3d,Yes);
    pwVar16 = L"InUserWidget is nullptr";
    uVar5 = 0x6c;
  }
  else {
    if (0 < (this->MoneyTypes).ArrayNum) {
      this_00 = FDS_MoneyBaseTableRow::Get
                          ((ulonglong)(byte)*(this->MoneyTypes).AllocatorInstance.Data,true);
      if (this_00 != (FDS_MoneyBaseTableRow *)0x0) {
        pUVar7 = GetTransientPackageAsObject();
        pUVar8 = NewObject<UDS_ModelBase>(pUVar7);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_ModelBase *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        pFVar9 = FDS_MoneyBaseTableRow::MoneyDescriptionTable(this_00);
        local_1d8.StringTableType = None;
        local_1d8.StringTableID = 0;
        local_1d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_1d8.StringEnumTableNameID.Number = 0;
        local_1d8.TimeExpressionType = None;
        local_1d8.DateTime.Ticks = 0;
        local_1d8.TimeSpan.Ticks = 0;
        local_1d8.IsExpression = false;
        local_1d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.UniqueString.Data.ArrayNum = 0;
        local_1d8.UniqueString.Data.ArrayMax = 0;
        local_1d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.FormatArgs.ArrayNum = 0;
        local_1d8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_1d8,pFVar9);
        this_01 = FDS_Text::GetText(&local_1d8,(FText *)&local_1f8._s_0);
        pFVar10 = FText::ToString(this_01);
        local_208.ComparisonIndex.Value = 0;
        local_208.Number = 0;
        local_200 = (pFVar10->Data).ArrayNum;
        lVar14 = (longlong)local_200;
        _Src = (pFVar10->Data).AllocatorInstance.Data;
        if (local_200 == 0) {
          local_1fc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_200,0,(ForAnyElementType *)&local_208,local_200,&local_1fc);
          memcpy((void *)local_208,_Src,lVar14 * 2);
        }
        if ((longlong *)local_1f8._s_0.X != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_1f8._s_0.X + 0x10))();
        }
        FVar11 = FDS_DataContainer::TransformIndexToName<enum_EDS_TextData>
                           (&pUVar8->DataContainer,(EDS_TextData)&local_210);
        uVar1 = *(undefined8 *)FVar11;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
        pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                  ::FindOrAddImpl<FName>
                            ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                              *)&pUVar8->DataContainer,uVar5 + (int)((ulonglong)uVar1 >> 0x20),
                             (FName *)FVar11);
        iVar15 = local_200 + -1;
        if (local_200 == 0) {
          iVar15 = 0;
        }
        ::FString::AssignRange(pFVar10,(wchar_t *)local_208,iVar15);
        if (local_208 != (FName)0x0) {
          FMemory::Free((void *)local_208);
        }
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data,
                   local_1d8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_1d8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_1d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.UniqueString.Data.AllocatorInstance.Data);
        }
        pcVar2 = *(code **)(pUVar8->_padding_ + 0x308);
        ::FName::FName(local_188,L"");
        ::FName::FName(&local_208,L"");
        pdVar12 = (double *)(*pcVar2)(pUVar8,&local_1e8);
        local_1f8._s_0.X = *pdVar12;
        local_1f8._s_0.Y = pdVar12[1];
        if (local_1f8._s_0.Y != 0.0) {
          LOCK();
          *(int *)((longlong)local_1f8._s_0.Y + 8) = *(int *)((longlong)local_1f8._s_0.Y + 8) + 1;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_218.ObjectIndex = 0;
        local_218.ObjectSerialNumber = 0;
        local_210 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_210);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_218,
                   (TSharedPtr<FDS_ViewModelContext,1> *)&local_1f8._s_0,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_1e8._s_0.Y);
        dVar3 = (this->Margin).field0_0x0._s_0.X;
        dVar4 = (this->Margin).field0_0x0._s_0.Y;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_218.ObjectIndex = 0;
        local_218.ObjectSerialNumber = 0;
        local_210 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_210);
        local_1e8._s_0.X = dVar3;
        local_1e8._s_0.Y = dVar4;
        pTVar13 = DS_Util::TransformTooltipPositionOnMouse
                            ((TVector2<double> *)&local_1f8._s_0,
                             (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_218,
                             (TVector2<double> *)&local_1e8._s_0,None);
        UDS_UserWidget::OnSetWindowPosition(param_1,pTVar13);
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_VM_MoneyTooltipDetector::OnOpenWindowCallback_TextTooltip",0x3d,Yes
                );
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_178.Ptr,0x7b,L"FDS_MoneyBaseTableRow is nullptr. ID - %d");
      if ((void *)local_178._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_178._padding_);
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_VM_MoneyTooltipDetector::OnOpenWindowCallback_TextTooltip",0x3d,Yes);
    pwVar16 = L"MoneyTypes Invalid Index. Index - 0";
    uVar5 = 0x72;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_178.Ptr,uVar5,pwVar16);
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  return;
}

// OnSetViewModel @ 14bddcc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MoneyTooltipDetector::OnSetViewModel
          (UDS_VM_MoneyTooltipDetector *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  UDS_LogManager *pUVar3;
  FScriptContainerElement FVar4;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext_MoneyTooltipDetector,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_MoneyTooltipDetector>(&local_168,&local_158);
  if (local_168.Object == (FDS_ViewModelContext_MoneyTooltipDetector *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_MoneyTooltipDetector::OnSetViewModel",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x19,
                 L"FDS_ViewModelContext_MoneyTooltipDetector is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  else {
    TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>::operator=
              (&this->MoneyTypes,&(local_168.Object)->MoneyTypes);
    if ((this->MoneyTypes).ArrayNum < 1) {
      FVar4 = (FScriptContainerElement)0x0;
    }
    else {
      FVar4 = *(this->MoneyTypes).AllocatorInstance.Data;
    }
    this->MoneyType = (EDS_MoneyType)FVar4;
    this->ToolTipType = (local_168.Object)->ToolTipType;
    dVar2 = ((local_168.Object)->Margin).field0_0x0._s_0.Y;
    (this->Margin).field0_0x0._s_0.X = ((local_168.Object)->Margin).field0_0x0._s_0.X;
    (this->Margin).field0_0x0._s_0.Y = dVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUnhoveredEvent @ 14bddf050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MoneyTooltipDetector::OnUnhoveredEvent
          (UDS_VM_MoneyTooltipDetector *this,FDS_ButtonEventField *param_1)

{
  EDS_MoneyToolTipType EVar1;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar2;
  EDS_WindowWidget EVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 auStackY_178 [32];
  float local_148;
  float local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_MoneyTooltipDetector::OnUnhoveredEvent",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x41,L"UDS_WindowManager is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    EVar1 = this->ToolTipType;
    if ((EVar1 == Money) || (EVar1 == MoneyETC)) {
      pfVar5 = local_144;
      EVar3 = CoinToolTip;
      pfVar4 = &local_148;
    }
    else {
      if (EVar1 != MoneyDescription) {
        return;
      }
      pfVar5 = &local_148;
      EVar3 = CommonTextTooltip;
      pfVar4 = local_144;
    }
    local_144[0] = 0.0;
    local_148 = 0.0;
    UDS_WindowManager::CloseWindow(this_00,EVar3,(uint *)pfVar4,pfVar5);
  }
  return;
}

// SetMoneyType @ 14bde7b90

void __thiscall
UDS_VM_MoneyTooltipDetector::SetMoneyType(UDS_VM_MoneyTooltipDetector *this,EDS_MoneyType *param_1)

{
  EDS_MoneyType local_res8 [32];
  FName local_18;
  int local_10;
  
  this->MoneyType = *param_1;
  local_10 = FFieldNotificationClassDescriptor::MoneyType.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MoneyType.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_res8[0] = this->MoneyType;
  TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>::CopyToEmpty<enum_EDS_MoneyType,int>
            (&this->MoneyTypes,local_res8,1,(this->MoneyTypes).ArrayMax);
  return;
}

