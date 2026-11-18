// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetClickKickoutButton_WrapperImpl @ 14b6669d0

void __cdecl
UDS_VM_GuildSettingMemberSlot::SetClickKickoutButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_GuildManager *this;
  UObject *pUVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DisableKickoutButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableKickoutButton.FieldName;
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    if (*(char *)((longlong)param_1 + 0xa0) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    }
    this = UDS_GuildManager::GetInst();
    if ((this != (UDS_GuildManager *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x128)), bVar3)) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x128));
      UDS_GuildManager::SendKickoutGuildMember(this,*(long64 *)&pUVar4[1].field_0x8);
    }
  }
  return;
}

// StaticClass @ 14b6669e0

UClass * __cdecl UDS_VM_GuildSettingMemberSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSettingMemberSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSettingMemberSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildSettingMemberSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSettingMemberSlot,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildSettingMemberSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSettingMemberSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSettingMemberSlot.InnerSingleton;
}

// UDS_VM_GuildSettingMemberSlot @ 14b66cec0

UDS_VM_GuildSettingMemberSlot * __thiscall
UDS_VM_GuildSettingMemberSlot::UDS_VM_GuildSettingMemberSlot
          (UDS_VM_GuildSettingMemberSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingMemberSlot__6B_;
  (this->FixedTxt_KickoutButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_KickoutButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_KickoutButton).DateTime.Ticks = 0;
  (this->FixedTxt_KickoutButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_KickoutButton).TimeExpressionType = None;
  (this->FixedTxt_KickoutButton).IsExpression = false;
  (this->FixedTxt_KickoutButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_KickoutButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_KickoutButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_KickoutButton).FormatArgs.ArrayMax = 0;
  (this->ClickKickoutButton)._padding_ = '\0';
  (this->ClickKickoutButton).bIsCustomSelected = false;
  (this->ClickKickoutButton).bIsLacked = false;
  (this->ClickKickoutButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickKickoutButton).Delegate = 0;
  *(undefined8 *)&(this->ClickKickoutButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickKickoutButton).Delegate.field_0x10 = 0;
  (this->VM_GuildMemberData).field0_0x0.DebugPtr = (UDS_VM_GuildMemberData *)0x0;
  (this->MemberData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedTxt_KickoutButton).StringTableType = StringUi;
  (this->FixedTxt_KickoutButton).StringTableID = 0x3a9e5;
  return this;
}

// UDS_VM_GuildSettingMemberSlot @ 14b66cf80

UDS_VM_GuildSettingMemberSlot * __thiscall
UDS_VM_GuildSettingMemberSlot::UDS_VM_GuildSettingMemberSlot
          (UDS_VM_GuildSettingMemberSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingMemberSlot__6B_;
  (this->FixedTxt_KickoutButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_KickoutButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_KickoutButton).DateTime.Ticks = 0;
  (this->FixedTxt_KickoutButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_KickoutButton).TimeExpressionType = None;
  (this->FixedTxt_KickoutButton).IsExpression = false;
  (this->FixedTxt_KickoutButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_KickoutButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_KickoutButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_KickoutButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_KickoutButton).FormatArgs.ArrayMax = 0;
  (this->ClickKickoutButton)._padding_ = '\0';
  (this->ClickKickoutButton).bIsCustomSelected = false;
  (this->ClickKickoutButton).bIsLacked = false;
  (this->ClickKickoutButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickKickoutButton).Delegate = 0;
  *(undefined8 *)&(this->ClickKickoutButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickKickoutButton).Delegate.field_0x10 = 0;
  (this->VM_GuildMemberData).field0_0x0.DebugPtr = (UDS_VM_GuildMemberData *)0x0;
  (this->MemberData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedTxt_KickoutButton).StringTableType = StringUi;
  (this->FixedTxt_KickoutButton).StringTableID = 0x3a9e5;
  return this;
}

// ~UDS_VM_GuildSettingMemberSlot @ 14b66ee00

void __thiscall
UDS_VM_GuildSettingMemberSlot::~UDS_VM_GuildSettingMemberSlot(UDS_VM_GuildSettingMemberSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingMemberSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickKickoutButton).Delegate);
  pvVar1 = *(void **)&(this->ClickKickoutButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickKickoutButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_KickoutButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_KickoutButton).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_KickoutButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_KickoutButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671730

IClassDescriptor * __thiscall
UDS_VM_GuildSettingMemberSlot::GetFieldNotificationDescriptor(UDS_VM_GuildSettingMemberSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildSettingMemberSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6720a0

UClass * __cdecl UDS_VM_GuildSettingMemberSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSettingMemberSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSettingMemberSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildSettingMemberSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSettingMemberSlot,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildSettingMemberSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSettingMemberSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSettingMemberSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildSettingMemberSlot @ 14b672af0

void __cdecl UDS_VM_GuildSettingMemberSlot::StaticRegisterNativesUDS_VM_GuildSettingMemberSlot(void)

{
  return;
}

// BindModel @ 14be763e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildSettingMemberSlot::BindModel(UDS_VM_GuildSettingMemberSlot *this)

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

// InitViewModel @ 14be8cd70

void __thiscall UDS_VM_GuildSettingMemberSlot::InitViewModel(UDS_VM_GuildSettingMemberSlot *this)

{
  return;
}

// OnClickKickoutButton @ 14be95e90

void __thiscall
UDS_VM_GuildSettingMemberSlot::OnClickKickoutButton
          (UDS_VM_GuildSettingMemberSlot *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_GuildManager *this_00;
  UObject *pUVar4;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DisableKickoutButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableKickoutButton.FieldName;
  if (param_1->bIsCustomDisabled != true) {
    if (this->DisableKickoutButton != true) {
      this->DisableKickoutButton = true;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    this_00 = UDS_GuildManager::GetInst();
    if ((this_00 != (UDS_GuildManager *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid(&(this->MemberData).WeakPtr), bVar3)) {
      pUVar4 = FWeakObjectPtr::Get(&(this->MemberData).WeakPtr);
      UDS_GuildManager::SendKickoutGuildMember(this_00,*(long64 *)&pUVar4[1].field_0x8);
    }
  }
  return;
}

// OnSetViewModel @ 14bea1ee0

void __thiscall
UDS_VM_GuildSettingMemberSlot::OnSetViewModel
          (UDS_VM_GuildSettingMemberSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  FDS_ViewModelContext_GuildMemberData *pFVar5;
  bool bVar6;
  uint uVar7;
  UObject *pUVar8;
  UDS_VM_GuildMemberData *pUVar9;
  FWeakObjectPtr local_res10;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext_GuildSettingMemberSlot,1> local_58;
  TSharedPtr<FDS_ViewModelContext_GuildMemberData,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_GuildSettingMemberSlot>(&local_58,&local_38);
  if (local_58.Object == (FDS_ViewModelContext_GuildSettingMemberSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    goto LAB_14bea2143;
  }
  if ((local_58.Object == (FDS_ViewModelContext_GuildSettingMemberSlot *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->MemberData).WeakPtr = ((local_58.Object)->MemberData).WeakPtr;
  bVar6 = FWeakObjectPtr::IsValid(&(this->MemberData).WeakPtr);
  if (bVar6) {
    UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
    bVar6 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar6) {
      pUVar8 = FWeakObjectPtr::Get(&(this->MemberData).WeakPtr);
      lVar2 = *(longlong *)&pUVar8[1].field_0x8;
      pUVar8 = FWeakObjectPtr::Get(&local_res10);
      FVar4 = FFieldNotificationClassDescriptor::DisableKickoutButton.FieldName;
      bVar6 = lVar2 == *(longlong *)&pUVar8[6].field_0x8;
      if (this->DisableKickoutButton != bVar6) {
        local_70 = FFieldNotificationClassDescriptor::DisableKickoutButton.BitNumber;
        this->DisableKickoutButton = bVar6;
        local_78 = FVar4;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
      }
    }
    if ((this->VM_GuildMemberData).field0_0x0.DebugPtr == (UDS_VM_GuildMemberData *)0x0) {
      pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMemberData>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UDS_VM_GuildMemberData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->VM_GuildMemberData).field0_0x0.DebugPtr = pUVar9;
      if (pUVar9 != (UDS_VM_GuildMemberData *)0x0) goto LAB_14bea2056;
    }
    else {
LAB_14bea2056:
      MakeContext<FDS_ViewModelContext_GuildMemberData>(&local_48);
      pFVar5 = local_48.Object;
      if (local_48.Object != (FDS_ViewModelContext_GuildMemberData *)0x0) {
        if ((local_48.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar5->_padding_ = 0x212;
        (pFVar5->MemberData).WeakPtr = (this->MemberData).WeakPtr;
        pUVar9 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
        local_28.Object = (FDS_ViewModelContext *)local_48.Object;
        local_28.SharedReferenceCount.ReferenceController =
             local_48.SharedReferenceCount.ReferenceController;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_28);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    FVar4 = FFieldNotificationClassDescriptor::OnlineStateWidgetIndex.FieldName;
    pUVar9 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
    uVar7 = 0;
    if (pUVar9 != (UDS_VM_GuildMemberData *)0x0) {
      uVar7 = (uint)(pUVar9->IsOnline != true);
    }
    if (this->OnlineStateWidgetIndex != uVar7) {
      local_60 = FFieldNotificationClassDescriptor::OnlineStateWidgetIndex.BitNumber;
      this->OnlineStateWidgetIndex = uVar7;
      local_68 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
LAB_14bea2143:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDisableKickoutButton @ 14beae260

void __thiscall
UDS_VM_GuildSettingMemberSlot::SetDisableKickoutButton
          (UDS_VM_GuildSettingMemberSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableKickoutButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableKickoutButton.FieldName;
  if (this->DisableKickoutButton != param_1) {
    this->DisableKickoutButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetOnlineStateWidgetIndex @ 14beb3960

void __thiscall
UDS_VM_GuildSettingMemberSlot::SetOnlineStateWidgetIndex(UDS_VM_GuildSettingMemberSlot *this)

{
  UDS_VM_GuildMemberData *pUVar1;
  uint uVar2;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::OnlineStateWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::OnlineStateWidgetIndex.FieldName;
  pUVar1 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
  uVar2 = 0;
  if (pUVar1 != (UDS_VM_GuildMemberData *)0x0) {
    uVar2 = (uint)(pUVar1->IsOnline != true);
  }
  if (this->OnlineStateWidgetIndex != uVar2) {
    this->OnlineStateWidgetIndex = uVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_GuildMemberData @ 14beb8680

void __thiscall
UDS_VM_GuildSettingMemberSlot::SetVM_GuildMemberData(UDS_VM_GuildSettingMemberSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMemberData *pFVar2;
  bool bVar3;
  UDS_VM_GuildMemberData *pUVar4;
  TSharedPtr<FDS_ViewModelContext_GuildMemberData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildMemberData).field0_0x0.DebugPtr == (UDS_VM_GuildMemberData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMemberData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_GuildMemberData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMemberData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMemberData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMemberData>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x212;
  (pFVar2->MemberData).WeakPtr = (this->MemberData).WeakPtr;
  pUVar4 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bebc2e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildSettingMemberSlot::UnbindModel(UDS_VM_GuildSettingMemberSlot *this)

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

