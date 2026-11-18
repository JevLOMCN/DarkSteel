// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b674df0

UClass * __cdecl UDS_VM_HUD_PopupSkillGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PopupSkillGroup",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PopupSkillGroup,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_HUD_PopupSkillGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PopupSkillGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillGroup.InnerSingleton;
}

// UDS_VM_HUD_PopupSkillGroup @ 14b679e70

UDS_VM_HUD_PopupSkillGroup * __thiscall
UDS_VM_HUD_PopupSkillGroup::UDS_VM_HUD_PopupSkillGroup
          (UDS_VM_HUD_PopupSkillGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PopupSkillGroup__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->PopupSkillHelperList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupSkillHelperList).ArrayNum = 0;
  (this->PopupSkillHelperList).ArrayMax = 0;
  (this->ChainSkillList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainSkillList).ArrayNum = 0;
  (this->ChainSkillList).ArrayMax = 0;
  (this->CurrentSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_HUD_PopupSkillGroup @ 14b679ee0

UDS_VM_HUD_PopupSkillGroup * __thiscall
UDS_VM_HUD_PopupSkillGroup::UDS_VM_HUD_PopupSkillGroup
          (UDS_VM_HUD_PopupSkillGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PopupSkillGroup__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->PopupSkillHelperList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupSkillHelperList).ArrayNum = 0;
  (this->PopupSkillHelperList).ArrayMax = 0;
  (this->ChainSkillList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainSkillList).ArrayNum = 0;
  (this->ChainSkillList).ArrayMax = 0;
  (this->CurrentSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_HUD_PopupSkillGroup @ 14b67b6e0

void __thiscall
UDS_VM_HUD_PopupSkillGroup::~UDS_VM_HUD_PopupSkillGroup(UDS_VM_HUD_PopupSkillGroup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PopupSkillGroup__6B_;
  pFVar1 = (this->ChainSkillList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PopupSkillHelperList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67de90

IClassDescriptor * __thiscall
UDS_VM_HUD_PopupSkillGroup::GetFieldNotificationDescriptor(UDS_VM_HUD_PopupSkillGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_PopupSkillGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67e8f0

UClass * __cdecl UDS_VM_HUD_PopupSkillGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PopupSkillGroup",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PopupSkillGroup,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_HUD_PopupSkillGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PopupSkillGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_PopupSkillGroup @ 14b67f250

void __cdecl UDS_VM_HUD_PopupSkillGroup::StaticRegisterNativesUDS_VM_HUD_PopupSkillGroup(void)

{
  return;
}

// EmplaceSkill @ 14bf4f090

void __thiscall
UDS_VM_HUD_PopupSkillGroup::EmplaceSkill
          (UDS_VM_HUD_PopupSkillGroup *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_SkillSlot *pFVar2;
  bool bVar3;
  UDS_UserObjectListItem *this_00;
  FWeakObjectPtr local_res10;
  UDS_UserObjectListItem *local_res18;
  TSharedPtr<FDS_ViewModelContext_SkillSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    MakeContext<FDS_ViewModelContext_SkillSlot>(&local_28);
    pFVar2 = local_28.Object;
    if (local_28.Object != (FDS_ViewModelContext_SkillSlot *)0x0) {
      if ((local_28.Object == (FDS_ViewModelContext_SkillSlot *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)&pFVar2->_padding_ = 0x4b;
      local_18.Object = (FDS_ViewModelContext *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      (pFVar2->SkillData).WeakPtr = local_res10;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(this_00,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    local_res18 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res18);
  }
  return;
}

// InitViewModel @ 14bf5a6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_HUD_PopupSkillGroup::InitViewModel(UDS_VM_HUD_PopupSkillGroup *this)

{
  FName local_18;
  ulonglong uStack_10;
  
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = (FName)OnMainCharChanged;
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_HUD_PopupSkillGroup>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_VM_HUD_PopupSkillGroup *)&stack0x00000008,(pmf_f5442fcd *)this);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  UpdatePopupSkillList(this);
  UpdateChainSkillList(this);
  uStack_10 = CONCAT44(uStack_10._4_4_,
                       FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber);
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCloseInit @ 14bf632d0

void __thiscall UDS_VM_HUD_PopupSkillGroup::OnCloseInit(UDS_VM_HUD_PopupSkillGroup *this)

{
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  return;
}

// OnMainCharChanged @ 14bf64bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_PopupSkillGroup::OnMainCharChanged
          (UDS_VM_HUD_PopupSkillGroup *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  FName local_18;
  int local_10;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  UpdatePopupSkillList(this);
  UpdateChainSkillList(this);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateChainSkillList @ 14bf86820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_PopupSkillGroup::UpdateChainSkillList(UDS_VM_HUD_PopupSkillGroup *this)

{
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_SkillDataSet *this_00;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar7;
  FWeakObjectPtr *pFVar8;
  undefined1 auStackY_1a8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  undefined1 local_178 [8];
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_PlayerData::GetData((ulong64)&local_170,UDS_PlayerData::MainPlayerEntityID,false);
  bVar5 = FWeakObjectPtr::IsValid(&local_170);
  if (bVar5) {
    FWeakObjectPtr::Get(&local_170);
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_168);
    bVar5 = FWeakObjectPtr::IsValid(&local_168);
    if (bVar5) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_168);
      pTVar7 = UDS_SkillDataSet::GetSubSkillList(this_00,&local_160);
      pTVar1 = &this->ChainSkillList;
      if (pTVar1 != pTVar7) {
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->ChainSkillList).ArrayNum = pTVar7->ArrayNum;
        (this->ChainSkillList).ArrayMax = pTVar7->ArrayMax;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
      }
      if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.AllocatorInstance.Data);
      }
      pFVar8 = (FWeakObjectPtr *)(pTVar1->AllocatorInstance).Data;
      iVar3 = (this->ChainSkillList).ArrayNum;
      pFVar2 = pFVar8 + iVar3;
      while( true ) {
        if ((this->ChainSkillList).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_178);
        }
        if (pFVar8 == pFVar2) break;
        EmplaceSkill(this,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)*pFVar8);
        pFVar8 = pFVar8 + 1;
      }
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_HUD_PopupSkillGroup::UpdateChainSkillList",0x30,Yes);
    pwVar10 = L"Failed to get skillDataSet.";
    uVar9 = 100;
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_HUD_PopupSkillGroup::UpdateChainSkillList",0x30,Yes);
    pwVar10 = L"Failed to get PlayerData.";
    uVar9 = 0x5d;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,uVar9,pwVar10);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// UpdatePopupSkillList @ 14bf884b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_PopupSkillGroup::UpdatePopupSkillList(UDS_VM_HUD_PopupSkillGroup *this)

{
  TArray<TWeakObjectPtr<UDS_ConditionHelper_PopupSkill,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UDS_SkillDataSet *this_00;
  TArray<TWeakObjectPtr<UDS_ConditionHelper_PopupSkill,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  UObject *pUVar9;
  UDS_DataSetBase *this_01;
  ulong64 uVar10;
  FWeakObjectPtr *this_02;
  undefined1 auStackY_1a8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  undefined1 local_178 [8];
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168;
  TArray<TWeakObjectPtr<UDS_ConditionHelper_PopupSkill,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_PlayerData::GetData((ulong64)&local_168,UDS_PlayerData::MainPlayerEntityID,false);
  bVar6 = FWeakObjectPtr::IsValid(&local_168);
  if (bVar6) {
    FWeakObjectPtr::Get(&local_168);
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_170);
    bVar6 = FWeakObjectPtr::IsValid(&local_170);
    if (bVar6) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_170);
      pTVar8 = UDS_SkillDataSet::GetPopupSkillHelperList(this_00,&local_160);
      pTVar1 = &this->PopupSkillHelperList;
      if (pTVar1 != pTVar8) {
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
        (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->PopupSkillHelperList).ArrayNum = pTVar8->ArrayNum;
        (this->PopupSkillHelperList).ArrayMax = pTVar8->ArrayMax;
        pTVar8->ArrayNum = 0;
        pTVar8->ArrayMax = 0;
      }
      if ((FWeakObjectPtr)local_160.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
        FMemory::Free(local_160.AllocatorInstance.Data);
      }
      this_02 = (FWeakObjectPtr *)(pTVar1->AllocatorInstance).Data;
      iVar3 = (this->PopupSkillHelperList).ArrayNum;
      pFVar2 = this_02 + iVar3;
      while( true ) {
        if ((this->PopupSkillHelperList).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_ConditionHelper_PopupSkill,FWeakObjectPtr>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_178);
        }
        if (this_02 == pFVar2) break;
        bVar6 = FWeakObjectPtr::IsValid(this_02);
        if (bVar6) {
          pUVar9 = FWeakObjectPtr::Get(this_02);
          uVar4 = *(undefined4 *)&pUVar9[2].field_0x20;
          this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_170);
          uVar10 = UDS_DataSetBase::GetDataContainerKey(this_01);
          UDS_SkillData::GetData((ulong64)&local_160,uVar10,SUB41(uVar4,0));
          bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_160);
          if (bVar6) {
            EmplaceSkill(this,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)
                              local_160.AllocatorInstance.Data);
          }
        }
        this_02 = this_02 + 1;
      }
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_HUD_PopupSkillGroup::UpdatePopupSkillList",0x30,Yes);
    pwVar12 = L"Failed to get skillDataSet.";
    uVar11 = 0x43;
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_HUD_PopupSkillGroup::UpdatePopupSkillList",0x30,Yes);
    pwVar12 = L"Failed to get PlayerData.";
    uVar11 = 0x3c;
  }
  UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,uVar11,pwVar12);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// UpdateSkillList @ 14bf89f10

void __thiscall UDS_VM_HUD_PopupSkillGroup::UpdateSkillList(UDS_VM_HUD_PopupSkillGroup *this)

{
  FName local_18;
  int local_10;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  UpdatePopupSkillList(this);
  UpdateChainSkillList(this);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

