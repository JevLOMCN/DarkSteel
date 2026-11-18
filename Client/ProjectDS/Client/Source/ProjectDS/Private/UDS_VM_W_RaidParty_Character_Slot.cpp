// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetbIsDropMode_WrapperImpl @ 14b74a910

void __cdecl
UDS_VM_W_RaidParty_Character_Slot::SetbIsDropMode_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x200) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsDropMode.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsDropMode.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b74a920

UClass * __cdecl UDS_VM_W_RaidParty_Character_Slot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Character_Slot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RaidParty_Character_Slot",
               &Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Character_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RaidParty_Character_Slot,0x218,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_RaidParty_Character_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RaidParty_Character_Slot>,local_res8,
               UDS_VM_W_RaidParty_Slot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Character_Slot.InnerSingleton;
}

// UDS_VM_W_RaidParty_Character_Slot @ 14b74dfa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_RaidParty_Character_Slot * __thiscall
UDS_VM_W_RaidParty_Character_Slot::UDS_VM_W_RaidParty_Character_Slot
          (UDS_VM_W_RaidParty_Character_Slot *this,FVTableHelper *param_1)

{
  UDS_VM_W_RaidParty_Slot::UDS_VM_W_RaidParty_Slot((UDS_VM_W_RaidParty_Slot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RaidParty_Character_Slot__6B_;
  *(undefined8 *)&this->OnClickSlotButtonUpDelegate = 0;
  *(undefined8 *)&(this->OnClickSlotButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnAddBtnClickDelegate = 0;
  *(undefined8 *)&(this->OnAddBtnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnAddBtnClickDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeBtnClickDelegate = 0;
  *(undefined8 *)&(this->OnChangeBtnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnChangeBtnClickDelegate).field_0x10 = 0;
  this->bIsDropMode = false;
  (this->CharCardSlotBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharCardSlotBindingEventField).UserObjectList.ArrayNum = 0;
  (this->CharCardSlotBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_W_RaidParty_Character_Slot @ 14b74e030

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_RaidParty_Character_Slot * __thiscall
UDS_VM_W_RaidParty_Character_Slot::UDS_VM_W_RaidParty_Character_Slot
          (UDS_VM_W_RaidParty_Character_Slot *this,FObjectInitializer *param_1)

{
  UDS_VM_W_RaidParty_Slot::UDS_VM_W_RaidParty_Slot((UDS_VM_W_RaidParty_Slot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RaidParty_Character_Slot__6B_;
  *(undefined8 *)&this->OnClickSlotButtonUpDelegate = 0;
  *(undefined8 *)&(this->OnClickSlotButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnAddBtnClickDelegate = 0;
  *(undefined8 *)&(this->OnAddBtnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnAddBtnClickDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeBtnClickDelegate = 0;
  *(undefined8 *)&(this->OnChangeBtnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnChangeBtnClickDelegate).field_0x10 = 0;
  this->bIsDropMode = false;
  (this->CharCardSlotBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharCardSlotBindingEventField).UserObjectList.ArrayNum = 0;
  (this->CharCardSlotBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_W_RaidParty_Character_Slot @ 14b74f620

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RaidParty_Character_Slot::~UDS_VM_W_RaidParty_Character_Slot
          (UDS_VM_W_RaidParty_Character_Slot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RaidParty_Character_Slot__6B_;
  pFVar1 = (this->CharCardSlotBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnChangeBtnClickDelegate);
  pvVar2 = *(void **)&(this->OnChangeBtnClickDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeBtnClickDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAddBtnClickDelegate);
  pvVar2 = *(void **)&(this->OnAddBtnClickDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddBtnClickDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickSlotButtonUpDelegate);
  pvVar2 = *(void **)&(this->OnClickSlotButtonUpDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickSlotButtonUpDelegate);
  UDS_VM_W_RaidParty_Slot::~UDS_VM_W_RaidParty_Slot((UDS_VM_W_RaidParty_Slot *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b751550

IClassDescriptor * __thiscall
UDS_VM_W_RaidParty_Character_Slot::GetFieldNotificationDescriptor
          (UDS_VM_W_RaidParty_Character_Slot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_RaidParty_Character_Slot::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b751f00

UClass * __cdecl UDS_VM_W_RaidParty_Character_Slot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Character_Slot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RaidParty_Character_Slot",
               &Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Character_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RaidParty_Character_Slot,0x218,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_RaidParty_Character_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RaidParty_Character_Slot>,local_res8,
               UDS_VM_W_RaidParty_Slot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Character_Slot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_RaidParty_Character_Slot @ 14b752470

void __cdecl
UDS_VM_W_RaidParty_Character_Slot::StaticRegisterNativesUDS_VM_W_RaidParty_Character_Slot(void)

{
  return;
}

// InitViewModel @ 14c01ec60

void __thiscall
UDS_VM_W_RaidParty_Character_Slot::InitViewModel(UDS_VM_W_RaidParty_Character_Slot *this)

{
  return;
}

// OnClickAddSlotButton @ 14c025f30

void __thiscall
UDS_VM_W_RaidParty_Character_Slot::OnClickAddSlotButton(UDS_VM_W_RaidParty_Character_Slot *this)

{
  bool bVar1;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  bVar1 = FDS_RaidPartyService::IsRaidPlaying();
  if (bVar1) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x347e6,Complete_None_01,&local_28);
    return;
  }
  FDS_RaidPartyService::OpenInviteWindow();
  return;
}

// OnClickChangeSlotButton @ 14c026230

void __thiscall
UDS_VM_W_RaidParty_Character_Slot::OnClickChangeSlotButton(UDS_VM_W_RaidParty_Character_Slot *this)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnChangeBtnClickDelegate,&local_28);
  if ((*(int *)&(this->OnChangeBtnClickDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnChangeBtnClickDelegate).field_0x8, plVar3 != (longlong *)0x0)
     ) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      lVar1 = this->_padding_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnChangeBtnClickDelegate,&local_28);
      if (*(int *)&(this->OnChangeBtnClickDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->OnChangeBtnClickDelegate).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,(int)lVar1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnCloseInit @ 14c028600

void __thiscall
UDS_VM_W_RaidParty_Character_Slot::OnCloseInit(UDS_VM_W_RaidParty_Character_Slot *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnDropModeChanged @ 14c0293e0

void __thiscall
UDS_VM_W_RaidParty_Character_Slot::OnDropModeChanged
          (UDS_VM_W_RaidParty_Character_Slot *this,int param_1,bool param_2)

{
  FName local_18;
  int local_10;
  
  if (((int)this->_padding_ == param_1) && (param_2)) {
    return;
  }
  this->bIsDropMode = param_2;
  local_10 = FFieldNotificationClassDescriptor::bIsDropMode.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsDropMode.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  OnRefreshSlotsEventField(this);
  return;
}

// OnRefreshSlotsEventField @ 14c02e190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RaidParty_Character_Slot::OnRefreshSlotsEventField(UDS_VM_W_RaidParty_Character_Slot *this)

{
  FDS_SlotInfo *pFVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  FDS_ViewModelContext_CharSlotByRaidPartyData *pFVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FDS_RaidPartyRepo *pFVar8;
  FDS_RaidPartyMemberInfo *this_00;
  FDS_DungeonBaseTableRow *pFVar9;
  UDS_UserObjectListItem *this_01;
  undefined8 *puVar10;
  ulong64 uVar11;
  FDS_RaidPartyMemberInfo *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  UDS_LogManager *pUVar14;
  FDS_CharacterBaseTableRow *this_02;
  FDS_CharacterSkinTableRow *pFVar15;
  FText *pFVar16;
  FDS_SlotInfoBase *pFVar17;
  undefined1 auStackY_268 [32];
  FDS_SlotInfoBase *local_228;
  FSharedReferencer<1> FStack_220;
  FString local_218;
  TSharedPtr<FDS_ViewModelContext_CharSlotByRaidPartyData,1> local_208;
  undefined1 local_1f8 [4];
  undefined1 local_1f4 [4];
  UDS_VM_W_RaidParty_Character_Slot *local_1f0;
  UDS_VM_W_RaidParty_Character_Slot *local_1e8;
  UDS_UserObjectListItem *local_1e0;
  FName local_1d8;
  int local_1d0;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  FDestructionSentinel local_1b8;
  undefined1 *local_1a0;
  FDestructionSentinel local_198;
  undefined1 *local_180;
  FText local_178;
  FText local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((int)this->_padding_ < 1) {
    return;
  }
  pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar7 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar8);
  if (!bVar7) {
    return;
  }
  pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  this_00 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(pFVar8,(int)this->_padding_);
  pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar9 = FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar8->RaidPartyInfo).DungeonId,true);
  FDS_EntryBindingEventField::Reset(&this->CharCardSlotBindingEventField);
  this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UDS_UserObjectListItem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  MakeContext<FDS_ViewModelContext_CharSlotByRaidPartyData>(&local_208);
  pFVar5 = local_208.Object;
  if ((local_208.Object == (FDS_ViewModelContext_CharSlotByRaidPartyData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)&pFVar5->_padding_ = 0x17f;
  *(undefined1 *)((longlong)&pFVar5->_padding_ + 4) = 3;
  pFVar5->RaidPartySlotIndex = (int)this->_padding_;
  TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::operator=
            (&pFVar5->OnDropModeChangeDelegate,
             (TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)&this->_padding_);
  FVar6.ReferenceController = local_1c8.SharedReferenceCount.ReferenceController;
  pFVar5->IsDropMode = this->bIsDropMode;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->AddClickDel,
             (FWriteAccessScope *)&local_1b8);
  local_1a0 = &(pFVar5->AddClickDel).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_1a0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_RaidParty_Character_Slot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_1f0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_1f0);
    puVar10[4] = OnClickAddSlotButton;
    puVar10[5] = (ulonglong)FVar6.ReferenceController & 0xffffffff00000000;
  }
  if (local_1b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
  }
  FVar6.ReferenceController = local_1c8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->ChangeClickDel,
             (FWriteAccessScope *)&local_198);
  local_180 = &(pFVar5->ChangeClickDel).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_180);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_RaidParty_Character_Slot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_1e8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_1e8);
    puVar10[4] = OnClickChangeSlotButton;
    puVar10[5] = (ulonglong)FVar6.ReferenceController & 0xffffffff00000000;
  }
  if (local_198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
  }
  bVar7 = FDS_RaidPartyMemberInfo::IsValidCharInfo(this_00);
  pFVar5->IsEmptySlot = !bVar7;
  if ((pFVar9->DungeonType == Raid) && (0 < (this_00->CharInfo).CharId)) {
    pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar12 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar8);
    pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if (pFVar12->PlayerUID == (pFVar8->RaidPartyInfo).LeaderUID) {
      pFVar1 = &pFVar5->RaidPartySlotInfo;
      if ((pFVar5->RaidPartySlotInfo).SlotInfo.Object == (FDS_SlotInfoBase *)0x0) {
        pTVar13 = ::operator_new(0x50);
        if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          local_228 = ___xmm_00000000000000000000000000000010;
          pFVar17 = (FDS_SlotInfoBase *)&DAT_00000010;
          FStack_220.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar13->SharedReferenceCount = (atomic<int>)0x1;
          pTVar13->WeakReferenceCount = (atomic<int>)0x1;
          pTVar13->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFDS_CharacterSlotInfo___00_SharedPointerInternals__6B_
          ;
          *(undefined8 *)&pTVar13[1].WeakReferenceCount = 0;
          *(undefined8 *)((longlong)&pTVar13[2]._padding_ + 4) = 0;
          pTVar13[1]._padding_ = (longlong)&___7FDS_CharacterSlotInfo__6B_;
          FText::FText((FText *)(pTVar13 + 3));
          FText::FText((FText *)(pTVar13 + 4));
          pFVar17 = (FDS_SlotInfoBase *)(pTVar13 + 1);
          if ((pFVar17 == (FDS_SlotInfoBase *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
          FStack_220.ReferenceController = pTVar13;
          local_228 = pFVar17;
        }
        if (pFVar1 != (FDS_SlotInfo *)&local_228) {
          (pFVar1->SlotInfo).Object = pFVar17;
          local_228 = (FDS_SlotInfoBase *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pFVar5->RaidPartySlotInfo).SlotInfo.SharedReferenceCount,&FStack_220);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_220.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
      }
      pFVar17 = (pFVar1->SlotInfo).Object;
      if (pFVar17 == (FDS_SlotInfoBase *)0x0) {
        pUVar14 = UDS_LogManager::GetInst();
        if (pUVar14 != (UDS_LogManager *)0x0) {
          pUVar14 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_W_RaidParty_Character_Slot::OnRefreshSlotsEventField",0x3b,
                     Yes);
          UDS_LogManager::PrintLog(pUVar14,1,Warning,local_158.Ptr,0x5f,L"charSlotInfo is nullptr.")
          ;
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14c02e791;
      }
      pFVar17->SlotInfoType = Character;
      this_02 = FDS_CharacterBaseTableRow::GetRef((longlong)(this_00->CharInfo).CharId,true);
      pFVar15 = FDS_CharacterBaseTableRow::ID_DefaultSkinTable(this_02);
      pFVar17->IconID = pFVar15->ID_CardImg;
      pFVar17->SlotIndex = (int)this->_padding_;
      local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.Data.ArrayNum = 0;
      local_218.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_218,(this_00->CharInfo).CharLevel);
      pFVar16 = FText::FromString(&local_178,&local_218);
      pIVar2 = (ITextData *)pFVar17[1]._padding_;
      pIVar3 = (pFVar16->TextData).Reference;
      if (pIVar2 != pIVar3) {
        pFVar17[1]._padding_ = (longlong)pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_1f8);
        }
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        }
      }
      *(uint *)&pFVar17[1].SlotInfoType = pFVar16->Flags;
      pIVar2 = (pFVar16->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      pFVar16 = FText::FromString(&local_168,&this_00->NickName);
      pIVar2 = *(ITextData **)&pFVar17[1].GradeBgID;
      pIVar3 = (pFVar16->TextData).Reference;
      if (pIVar2 != pIVar3) {
        *(ITextData **)&pFVar17[1].GradeBgID = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_1f4);
        }
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        }
      }
      pFVar17[1].DeckIndex = pFVar16->Flags;
      pIVar2 = (pFVar16->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
  }
  local_1c8.Object = (FDS_ViewModelContext *)local_208.Object;
  local_1c8.SharedReferenceCount.ReferenceController =
       local_208.SharedReferenceCount.ReferenceController;
  if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_UserObjectListItem::AddContext(this_01,&local_1c8);
  local_1e0 = this_01;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UDS_UserObjectListItem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  FDS_EntryBindingEventField::Add
            (&this->CharCardSlotBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_1e0);
  local_1d0 = FFieldNotificationClassDescriptor::CharCardSlotBindingEventField.BitNumber;
  local_1d8 = FFieldNotificationClassDescriptor::CharCardSlotBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
LAB_14c02e791:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  return;
}

// OnSetViewModel @ 14c033740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RaidParty_Character_Slot::OnSetViewModel
          (UDS_VM_W_RaidParty_Character_Slot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_1c8 [32];
  TSharedPtr<FDS_ViewModelContext_RaidPartySlot,1> local_198;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_168.Object = param_1->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_W_RaidParty_Slot::OnSetViewModel((UDS_VM_W_RaidParty_Slot *)this,&local_168);
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
  SafeCast<FDS_ViewModelContext_RaidPartySlot>(&local_198,&local_158);
  if (local_198.Object == (FDS_ViewModelContext_RaidPartySlot *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)local_198.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_RaidParty_Character_Slot::OnSetViewModel",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x1d,L"context.IsValid() == false");
      if ((FDS_ViewModelContext_RaidPartySlot *)local_148._padding_ !=
          (FDS_ViewModelContext_RaidPartySlot *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if (local_198.Object == (FDS_ViewModelContext_RaidPartySlot *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(int *)&this->_padding_ = (local_198.Object)->SlotIndex;
    local_180 = UDS_VM_W_RaidParty_Slot::FFieldNotificationClassDescriptor::SlotIndex.BitNumber;
    local_188 = UDS_VM_W_RaidParty_Slot::FFieldNotificationClassDescriptor::SlotIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    this->bIsDropMode = false;
    local_170 = FFieldNotificationClassDescriptor::bIsDropMode.BitNumber;
    local_178 = FFieldNotificationClassDescriptor::bIsDropMode.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
              (&this->OnAddBtnClickDelegate,&(local_198.Object)->OnAddBtnClickDelegate);
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
              (&this->OnChangeBtnClickDelegate,&(local_198.Object)->OnChangeBtnClickDelegate);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsDropMode @ 14c0417b0

void __thiscall
UDS_VM_W_RaidParty_Character_Slot::SetIsDropMode
          (UDS_VM_W_RaidParty_Character_Slot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsDropMode = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsDropMode.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsDropMode.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateProperties @ 14c04dc60

void __thiscall
UDS_VM_W_RaidParty_Character_Slot::UpdateProperties(UDS_VM_W_RaidParty_Character_Slot *this)

{
  FName local_18;
  int local_10;
  
  *(undefined1 *)&this->_padding_ = 1;
  local_10 = UDS_VM_W_RaidParty_Slot::FFieldNotificationClassDescriptor::SlotArrowVisibility.
             BitNumber;
  local_18 = UDS_VM_W_RaidParty_Slot::FFieldNotificationClassDescriptor::SlotArrowVisibility.
             FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  OnRefreshSlotsEventField(this);
  return;
}

