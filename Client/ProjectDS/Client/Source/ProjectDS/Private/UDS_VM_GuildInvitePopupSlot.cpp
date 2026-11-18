// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetClickInviteButton_WrapperImpl @ 14b64df00

void __cdecl
UDS_VM_GuildInvitePopupSlot::SetClickInviteButton_WrapperImpl(void *param_1,void *param_2)

{
  long64 lVar1;
  FName FVar2;
  int iVar3;
  long64 lVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar3 = FFieldNotificationClassDescriptor::IsInviteAble.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsInviteAble.FieldName;
  if (*(char *)((longlong)param_1 + 0xa0) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
    iStack_10 = iVar3;
    FStack_18 = FVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  lVar1 = *(long64 *)((longlong)param_1 + 0xd0);
  lVar4 = UDS_GuildManager::GetMyGuildUID();
  FDS_GuildService::SendGuildInviteRequest(lVar4,lVar1);
  return;
}

// StaticClass @ 14b64df10

UClass * __cdecl UDS_VM_GuildInvitePopupSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildInvitePopupSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildInvitePopupSlot,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildInvitePopupSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildInvitePopupSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupSlot.InnerSingleton;
}

// UDS_VM_GuildInvitePopupSlot @ 14b653300

UDS_VM_GuildInvitePopupSlot * __thiscall
UDS_VM_GuildInvitePopupSlot::UDS_VM_GuildInvitePopupSlot
          (UDS_VM_GuildInvitePopupSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitePopupSlot__6B_;
  *(undefined8 *)&(this->ClickInviteButton).Delegate = 0;
  *(undefined8 *)&(this->ClickInviteButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInviteButton).Delegate.field_0x10 = 0;
  (this->VM_PlayerInfo).field0_0x0.DebugPtr = (UDS_VM_PlayerSearchInfo *)0x0;
  this->PlayerUID = 0;
  (this->ClickInviteButton)._padding_ = '\0';
  (this->ClickInviteButton).bIsCustomSelected = false;
  (this->ClickInviteButton).bIsLacked = false;
  (this->ClickInviteButton).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_GuildInvitePopupSlot @ 14b653370

UDS_VM_GuildInvitePopupSlot * __thiscall
UDS_VM_GuildInvitePopupSlot::UDS_VM_GuildInvitePopupSlot
          (UDS_VM_GuildInvitePopupSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitePopupSlot__6B_;
  *(undefined8 *)&(this->ClickInviteButton).Delegate = 0;
  *(undefined8 *)&(this->ClickInviteButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInviteButton).Delegate.field_0x10 = 0;
  (this->VM_PlayerInfo).field0_0x0.DebugPtr = (UDS_VM_PlayerSearchInfo *)0x0;
  this->PlayerUID = 0;
  (this->ClickInviteButton)._padding_ = '\0';
  (this->ClickInviteButton).bIsCustomSelected = false;
  (this->ClickInviteButton).bIsLacked = false;
  (this->ClickInviteButton).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_GuildInvitePopupSlot @ 14b655430

void __thiscall
UDS_VM_GuildInvitePopupSlot::~UDS_VM_GuildInvitePopupSlot(UDS_VM_GuildInvitePopupSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitePopupSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickInviteButton).Delegate);
  pvVar1 = *(void **)&(this->ClickInviteButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickInviteButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b657430

IClassDescriptor * __thiscall
UDS_VM_GuildInvitePopupSlot::GetFieldNotificationDescriptor(UDS_VM_GuildInvitePopupSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildInvitePopupSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b657d90

UClass * __cdecl UDS_VM_GuildInvitePopupSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildInvitePopupSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildInvitePopupSlot,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildInvitePopupSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildInvitePopupSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildInvitePopupSlot @ 14b658330

void __cdecl UDS_VM_GuildInvitePopupSlot::StaticRegisterNativesUDS_VM_GuildInvitePopupSlot(void)

{
  return;
}

// BindModel @ 14be75ae0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildInvitePopupSlot::BindModel(UDS_VM_GuildInvitePopupSlot *this)

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

// InitViewModel @ 14be8cbf0

void __thiscall UDS_VM_GuildInvitePopupSlot::InitViewModel(UDS_VM_GuildInvitePopupSlot *this)

{
  return;
}

// OnClickInviteButton @ 14be959a0

void __thiscall
UDS_VM_GuildInvitePopupSlot::OnClickInviteButton
          (UDS_VM_GuildInvitePopupSlot *this,FDS_ButtonEventField *param_1)

{
  long64 lVar1;
  FName FVar2;
  int iVar3;
  long64 lVar4;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::IsInviteAble.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsInviteAble.FieldName;
  if (this->IsInviteAble != false) {
    this->IsInviteAble = false;
    local_10 = iVar3;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  lVar1 = this->PlayerUID;
  lVar4 = UDS_GuildManager::GetMyGuildUID();
  FDS_GuildService::SendGuildInviteRequest(lVar4,lVar1);
  return;
}

// OnSetViewModel @ 14be9ee70

void __thiscall
UDS_VM_GuildInvitePopupSlot::OnSetViewModel
          (UDS_VM_GuildInvitePopupSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  FDS_PlayerRepo *this_00;
  Player *pPVar6;
  longlong lVar7;
  FName *pFVar8;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_GuildInvitePopupSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_GuildInvitePopupSlot>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_GuildInvitePopupSlot *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_GuildInvitePopupSlot *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->PlayerUID = (local_28.Object)->PlayerUID;
    SetVM_PlayerInfo(this);
    this_00 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
    pPVar6 = FDS_PlayerRepo::FindCharTableByPlayerUID(this_00,this->PlayerUID);
    if (0 < (pPVar6->_impl_).player_uid_) {
      bVar5 = UDS_GuildManager::HasMyGuildMember(this->PlayerUID);
      iVar4 = FFieldNotificationClassDescriptor::IsInviteAble.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::IsInviteAble.FieldName;
      if (bVar5) {
        if (this->IsInviteAble != false) {
          this->IsInviteAble = false;
          local_50 = iVar4;
          local_58 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
        }
        iVar4 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.FieldName;
        if (this->PlayerStateSwitcher == 2) goto LAB_14be9efe0;
        this->PlayerStateSwitcher = 2;
        pFVar8 = &local_48;
        local_40 = iVar4;
        lVar7 = this->_padding_;
        local_48 = FVar3;
      }
      else {
        if (this->IsInviteAble == true) goto LAB_14be9efe0;
        this->IsInviteAble = true;
        local_30 = iVar4;
        pFVar8 = &local_38;
        lVar7 = this->_padding_;
        local_38 = FVar3;
      }
      (**(code **)(lVar7 + 0x38))(&this->_padding_,pFVar8);
    }
  }
LAB_14be9efe0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsInviteAble @ 14beb1460

void __thiscall
UDS_VM_GuildInvitePopupSlot::SetIsInviteAble(UDS_VM_GuildInvitePopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsInviteAble.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsInviteAble.FieldName;
  if (this->IsInviteAble != param_1) {
    this->IsInviteAble = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPlayerStateSwitcher @ 14beb3bf0

void __thiscall
UDS_VM_GuildInvitePopupSlot::SetPlayerStateSwitcher(UDS_VM_GuildInvitePopupSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.FieldName;
  if (this->PlayerStateSwitcher != param_1) {
    this->PlayerStateSwitcher = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_PlayerInfo @ 14beb8d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_GuildInvitePopupSlot::SetVM_PlayerInfo(UDS_VM_GuildInvitePopupSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_PlayerSearchInfo *pUVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_00;
  longlong *plVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_c0;
  TSharedPtr<FDS_ViewModelContext,1> local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar9 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_PlayerInfo).field0_0x0.DebugPtr == (UDS_VM_PlayerSearchInfo *)0x0) {
    local_c8 = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_PlayerSearchInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_VM_PlayerSearchInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_PlayerSearchInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_PlayerSearchInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_PlayerSearchInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_PlayerInfo).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_PlayerSearchInfo *)0x0) {
      return;
    }
  }
  pFVar6 = ::operator_new(0x28);
  pFVar10 = pFVar9;
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
    *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
    (pFVar6->ViewModelName).ComparisonIndex = 0;
    (pFVar6->ViewModelName).Number = 0;
    pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_Player__6B_;
    pFVar6[1]._padding_ = 0;
    pFVar10 = pFVar6;
  }
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Player__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar10;
    pFVar9 = pFVar6;
  }
  if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar7 = FDS_ViewModelContext_Player::StaticStruct();
  *(UScriptStruct **)&pFVar10->DerivedStaticStruct = pUVar7;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar9 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar9->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_c0.Object = pFVar10;
    local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.SharedReferenceCount.ReferenceController);
  }
  pFVar10->ViewModelTemplateKey = SearchPlayerInfo;
  pFVar10[1]._padding_ = this->PlayerUID;
  pUVar5 = (this->VM_PlayerInfo).field0_0x0.DebugPtr;
  if (pFVar9 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar9->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_b0.Object = pFVar10;
  local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  return;
}

// UnbindModel @ 14bebbec0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildInvitePopupSlot::UnbindModel(UDS_VM_GuildInvitePopupSlot *this)

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

// UpdatePlayerInfo @ 14bec0cc0

void __thiscall UDS_VM_GuildInvitePopupSlot::UpdatePlayerInfo(UDS_VM_GuildInvitePopupSlot *this)

{
  bool bVar1;
  FDS_PlayerRepo *this_00;
  Player *pPVar2;
  FName local_18;
  int local_10;
  
  this_00 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  pPVar2 = FDS_PlayerRepo::FindCharTableByPlayerUID(this_00,this->PlayerUID);
  if (0 < (pPVar2->_impl_).player_uid_) {
    bVar1 = UDS_GuildManager::HasMyGuildMember(this->PlayerUID);
    local_10 = FFieldNotificationClassDescriptor::IsInviteAble.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsInviteAble.FieldName;
    if (bVar1) {
      if (this->IsInviteAble != false) {
        this->IsInviteAble = false;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      local_10 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::PlayerStateSwitcher.FieldName;
      if (this->PlayerStateSwitcher != 2) {
        this->PlayerStateSwitcher = 2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
    else if (this->IsInviteAble != true) {
      this->IsInviteAble = true;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      return;
    }
  }
  return;
}

