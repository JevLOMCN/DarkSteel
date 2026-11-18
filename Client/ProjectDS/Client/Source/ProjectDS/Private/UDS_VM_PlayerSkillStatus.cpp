// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// SetActionPointChargeClickEvent_WrapperImpl @ 14b6bc120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_PlayerSkillStatus::SetActionPointChargeClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ViewModelBase *this;
  code *pcVar1;
  FDS_ViewModelContext_Ticket *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_2b8 [32];
  FWeakObjectPtr aFStack_288 [2];
  TSharedPtr<FDS_ViewModelContext_Ticket,1> TStack_278;
  TSharedPtr<FDS_ViewModelContext,1> TStack_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if (*(longlong *)((longlong)param_1 + 0xf8) == 0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      TStack_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_258,"UDS_VM_PlayerSkillStatus::OnActionPointChargeClickEvent",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,TStack_258.Ptr,0x42,L"OpenPopupTicketChargeModel is nullptr.");
      if ((void *)TStack_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_258._padding_);
      }
    }
  }
  else {
    UDS_TicketData::GetData((ulong64)aFStack_288,UDS_PlayerData::MainPlayerEntityID,true);
    bVar3 = FWeakObjectPtr::IsValid(aFStack_288);
    if (bVar3) {
      MakeContext<FDS_ViewModelContext_Ticket>(&TStack_278);
      pFVar2 = TStack_278.Object;
      if (TStack_278.Object == (FDS_ViewModelContext_Ticket *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (pFVar2->TicketData).WeakPtr = aFStack_288[0];
      this = *(UDS_ViewModelBase **)((longlong)param_1 + 0xf8);
      TStack_268.Object = (FDS_ViewModelContext *)TStack_278.Object;
      TStack_268.SharedReferenceCount.ReferenceController =
           TStack_278.SharedReferenceCount.ReferenceController;
      if (TStack_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext(this,&TStack_268);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_278.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_PlayerSkillStatus::OnActionPointChargeClickEvent",0x37,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,0x49,L"ticketData is not vaild");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
  }
  return;
}

// StaticClass @ 14b6bc130

UClass * __cdecl UDS_VM_PlayerSkillStatus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PlayerSkillStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PlayerSkillStatus",
               &Z_Registration_Info_UClass_UDS_VM_PlayerSkillStatus.InnerSingleton,
               StaticRegisterNativesUDS_VM_PlayerSkillStatus,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PlayerSkillStatus>,
               InternalVTableHelperCtorCaller<UDS_VM_PlayerSkillStatus>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PlayerSkillStatus.InnerSingleton;
}

// UDS_VM_PlayerSkillStatus @ 14b6bdcb0

UDS_VM_PlayerSkillStatus * __thiscall
UDS_VM_PlayerSkillStatus::UDS_VM_PlayerSkillStatus
          (UDS_VM_PlayerSkillStatus *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerSkillStatus__6B_;
  (this->StatusName).StringTableID = 0;
  (this->StatusName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusName).StringEnumTableNameID.Number = 0;
  (this->StatusName).DateTime.Ticks = 0;
  (this->StatusName).TimeSpan.Ticks = 0;
  (this->StatusName).TimeExpressionType = None;
  (this->StatusName).IsExpression = false;
  (this->StatusName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).UniqueString.Data.ArrayNum = 0;
  (this->StatusName).UniqueString.Data.ArrayMax = 0;
  (this->StatusName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).FormatArgs.ArrayNum = 0;
  (this->StatusName).FormatArgs.ArrayMax = 0;
  (this->VM_OpenPopupTicketCharge).field0_0x0.DebugPtr = (UDS_VM_OpenPopupTicketCharge *)0x0;
  (this->ActionPointChargeClickEvent)._padding_ = '\0';
  (this->ActionPointChargeClickEvent).bIsCustomSelected = false;
  (this->ActionPointChargeClickEvent).bIsLacked = false;
  (this->ActionPointChargeClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ActionPointChargeClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ActionPointChargeClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ActionPointChargeClickEvent).Delegate.field_0x10 = 0;
  (this->StatusName).StringTableType = None;
  return this;
}

// UDS_VM_PlayerSkillStatus @ 14b6bdd60

UDS_VM_PlayerSkillStatus * __thiscall
UDS_VM_PlayerSkillStatus::UDS_VM_PlayerSkillStatus
          (UDS_VM_PlayerSkillStatus *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerSkillStatus__6B_;
  (this->StatusName).StringTableID = 0;
  (this->StatusName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusName).StringEnumTableNameID.Number = 0;
  (this->StatusName).DateTime.Ticks = 0;
  (this->StatusName).TimeSpan.Ticks = 0;
  (this->StatusName).TimeExpressionType = None;
  (this->StatusName).IsExpression = false;
  (this->StatusName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).UniqueString.Data.ArrayNum = 0;
  (this->StatusName).UniqueString.Data.ArrayMax = 0;
  (this->StatusName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).FormatArgs.ArrayNum = 0;
  (this->StatusName).FormatArgs.ArrayMax = 0;
  (this->VM_OpenPopupTicketCharge).field0_0x0.DebugPtr = (UDS_VM_OpenPopupTicketCharge *)0x0;
  (this->ActionPointChargeClickEvent)._padding_ = '\0';
  (this->ActionPointChargeClickEvent).bIsCustomSelected = false;
  (this->ActionPointChargeClickEvent).bIsLacked = false;
  (this->ActionPointChargeClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ActionPointChargeClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ActionPointChargeClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ActionPointChargeClickEvent).Delegate.field_0x10 = 0;
  (this->StatusName).StringTableType = None;
  return this;
}

// ~UDS_VM_PlayerSkillStatus @ 14b6bf3e0

void __thiscall UDS_VM_PlayerSkillStatus::~UDS_VM_PlayerSkillStatus(UDS_VM_PlayerSkillStatus *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerSkillStatus__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ActionPointChargeClickEvent).Delegate);
  pvVar1 = *(void **)&(this->ActionPointChargeClickEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ActionPointChargeClickEvent).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->StatusName).FormatArgs.AllocatorInstance.Data,
             (this->StatusName).FormatArgs.ArrayNum);
  pFVar2 = (this->StatusName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StatusName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6c0e70

IClassDescriptor * __thiscall
UDS_VM_PlayerSkillStatus::GetFieldNotificationDescriptor(UDS_VM_PlayerSkillStatus *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_PlayerSkillStatus::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6c1520

UClass * __cdecl UDS_VM_PlayerSkillStatus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PlayerSkillStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PlayerSkillStatus",
               &Z_Registration_Info_UClass_UDS_VM_PlayerSkillStatus.InnerSingleton,
               StaticRegisterNativesUDS_VM_PlayerSkillStatus,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PlayerSkillStatus>,
               InternalVTableHelperCtorCaller<UDS_VM_PlayerSkillStatus>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PlayerSkillStatus.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_PlayerSkillStatus @ 14b6c1a10

void __cdecl UDS_VM_PlayerSkillStatus::StaticRegisterNativesUDS_VM_PlayerSkillStatus(void)

{
  return;
}

// InitViewModel @ 14bf5b680

void __thiscall UDS_VM_PlayerSkillStatus::InitViewModel(UDS_VM_PlayerSkillStatus *this)

{
  return;
}

// OnActionPointChargeClickEvent @ 14bf5e490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PlayerSkillStatus::OnActionPointChargeClickEvent
          (UDS_VM_PlayerSkillStatus *this,FDS_ButtonEventField *param_1)

{
  UDS_VM_OpenPopupTicketCharge *this_00;
  code *pcVar1;
  FDS_ViewModelContext_Ticket *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_2b8 [32];
  FWeakObjectPtr local_288 [2];
  TSharedPtr<FDS_ViewModelContext_Ticket,1> local_278;
  TSharedPtr<FDS_ViewModelContext,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if ((this->VM_OpenPopupTicketCharge).field0_0x0.DebugPtr == (UDS_VM_OpenPopupTicketCharge *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_VM_PlayerSkillStatus::OnActionPointChargeClickEvent",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_258.Ptr,0x42,L"OpenPopupTicketChargeModel is nullptr.");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else {
    UDS_TicketData::GetData((ulong64)local_288,UDS_PlayerData::MainPlayerEntityID,true);
    bVar3 = FWeakObjectPtr::IsValid(local_288);
    if (bVar3) {
      MakeContext<FDS_ViewModelContext_Ticket>(&local_278);
      pFVar2 = local_278.Object;
      if (local_278.Object == (FDS_ViewModelContext_Ticket *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (pFVar2->TicketData).WeakPtr = local_288[0];
      this_00 = (this->VM_OpenPopupTicketCharge).field0_0x0.DebugPtr;
      local_268.Object = (FDS_ViewModelContext *)local_278.Object;
      local_268.SharedReferenceCount.ReferenceController =
           local_278.SharedReferenceCount.ReferenceController;
      if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_268);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_PlayerSkillStatus::OnActionPointChargeClickEvent",0x37,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x49,L"ticketData is not vaild");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bf69e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_PlayerSkillStatus::OnSetViewModel
          (UDS_VM_PlayerSkillStatus *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_PlayerSkillStatusType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_LogManager *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UDS_VM_OpenPopupTicketCharge *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_268 [32];
  FName local_228;
  int local_220;
  FName local_218;
  int local_210;
  FName local_208;
  int local_200;
  TSharedPtr<FDS_ViewModelContext_PlayerSkillStatus,1> local_1f8;
  TSharedPtr<FDS_ViewModelContext,1> local_1e8;
  undefined1 local_1d8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_1e8.Object = param_1->Object;
  local_1e8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PlayerSkillStatus>(&local_1f8,&local_1e8);
  if (local_1f8.Object == (FDS_ViewModelContext_PlayerSkillStatus *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_PlayerSkillStatus::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_158.Ptr,0x1b,
                 L"FDS_ViewModelContext_AscenderStatus is nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    EVar1 = (local_1f8.Object)->AscenderStatusType;
    this->StatusType = EVar1;
    if (EVar1 == PlayerData) {
      FDS_Text::SetTextFromStringTable(&this->StatusName,StringUi,0x2b07);
      this->SwitcherIndex = 0;
      this->bIsSign = true;
    }
    else if (EVar1 == TicketData) {
      FDS_Text::SetTextFromStringTable(&this->StatusName,StringUi,0x2b0a);
      this->SwitcherIndex = 1;
      this->bIsSign = false;
    }
    local_220 = FFieldNotificationClassDescriptor::StatusName.BitNumber;
    local_228 = FFieldNotificationClassDescriptor::StatusName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
    local_210 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
    local_218 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
    local_200 = FFieldNotificationClassDescriptor::bIsSign.BitNumber;
    local_208 = FFieldNotificationClassDescriptor::bIsSign.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
    if ((this->VM_OpenPopupTicketCharge).field0_0x0.DebugPtr == (UDS_VM_OpenPopupTicketCharge *)0x0)
    {
      pUVar4 = Z_Construct_UClass_UDS_VM_OpenPopupTicketCharge_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = Z_Construct_UClass_UDS_VM_OpenPopupTicketCharge_NoRegister();
      CheckIsClassChildOf_Internal(pUVar5,pUVar4);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1d8,pUVar4);
      local_1d8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_1d8._56_8_ = (UPackage *)0x0;
      local_1d8._16_4_ = 0;
      local_1d8._20_4_ = 0;
      local_1d8._24_4_ = RF_Transient;
      local_1d8._40_8_ = (UObject *)0x0;
      local_1d8[0x20] = false;
      local_1d8._8_8_ = this;
      pUVar6 = (UDS_VM_OpenPopupTicketCharge *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
      if (local_1d8._64_8_ != 0) {
        plVar7 = (longlong *)(local_1d8 + 0x50);
        if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_1d8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (pUVar6 != (UDS_VM_OpenPopupTicketCharge *)0x0) {
        *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_VM_OpenPopupTicketCharge *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (this->VM_OpenPopupTicketCharge).field0_0x0.DebugPtr = pUVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

