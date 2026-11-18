// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetPartyEntryEventField_WrapperImpl @ 14b6d4a70

void __cdecl UDS_VM_RaidPartyList::SetPartyEntryEventField_WrapperImpl(void *param_1,void *param_2)

{
  FDS_EntryBindingEventField *this;
  int iVar1;
  TObjectPtr<UDS_UserObjectListItem> *pTVar2;
  FName FStack_18;
  int iStack_10;
  
  this = (FDS_EntryBindingEventField *)((longlong)param_1 + 0xa0);
  FDS_EntryBindingEventField::Reset(this);
  if (this != param_2) {
    iVar1 = *(int *)((longlong)param_2 + 8);
    pTVar2 = *(TObjectPtr<UDS_UserObjectListItem> **)param_2;
    *(int *)((longlong)param_1 + 0xa8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xac) == 0)) {
      *(int *)((longlong)param_1 + 0xac) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,*(int *)((longlong)param_1 + 0xac),(ForAnyElementType *)this,iVar1,
                 (int *)((longlong)param_1 + 0xac));
      ConstructItems<TObjectPtr<UDS_UserObjectListItem>,TObjectPtr<UDS_UserObjectListItem>,int>
                ((this->UserObjectList).AllocatorInstance.Data,pTVar2,iVar1);
    }
  }
  iStack_10 = FFieldNotificationClassDescriptor::PartyEntryEventField.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::PartyEntryEventField.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6d4a80

UClass * __cdecl UDS_VM_RaidPartyList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartyList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartyList",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartyList.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartyList,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RaidPartyList>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartyList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartyList.InnerSingleton;
}

// UDS_VM_RaidPartyList @ 14b6d7840

UDS_VM_RaidPartyList * __thiscall
UDS_VM_RaidPartyList::UDS_VM_RaidPartyList(UDS_VM_RaidPartyList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->CurrentDropSlotIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyList__6B_;
  (this->PartyEntryEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PartyEntryEventField).UserObjectList.ArrayNum = 0;
  (this->PartyEntryEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_RaidPartyList @ 14b6d78a0

UDS_VM_RaidPartyList * __thiscall
UDS_VM_RaidPartyList::UDS_VM_RaidPartyList(UDS_VM_RaidPartyList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->CurrentDropSlotIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyList__6B_;
  (this->PartyEntryEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PartyEntryEventField).UserObjectList.ArrayNum = 0;
  (this->PartyEntryEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_RaidPartyList @ 14b6d9e60

void __thiscall UDS_VM_RaidPartyList::~UDS_VM_RaidPartyList(UDS_VM_RaidPartyList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyList__6B_;
  pFVar1 = (this->PartyEntryEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dc9f0

IClassDescriptor * __thiscall
UDS_VM_RaidPartyList::GetFieldNotificationDescriptor(UDS_VM_RaidPartyList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RaidPartyList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd2c0

UClass * __cdecl UDS_VM_RaidPartyList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartyList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartyList",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartyList.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartyList,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RaidPartyList>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartyList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartyList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RaidPartyList @ 14b6dde70

void __cdecl UDS_VM_RaidPartyList::StaticRegisterNativesUDS_VM_RaidPartyList(void)

{
  return;
}

// BindModel @ 14be77f20

void __thiscall UDS_VM_RaidPartyList::BindModel(UDS_VM_RaidPartyList *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_RaidPartyList>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyInfo,(UDS_VM_RaidPartyList *)&stack0x00000010,
               (pmf_737dda4f *)this);
  }
  return;
}

// NotifyPartyDropMode @ 14be901c0

void __thiscall
UDS_VM_RaidPartyList::NotifyPartyDropMode(UDS_VM_RaidPartyList *this,int param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  FDS_RaidPartyRepo *pFVar3;
  FDS_RaidPartyMemberInfo *pFVar4;
  
  pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar3);
  if (bVar1) {
    pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar4 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar3);
    pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if (pFVar4->PlayerUID == (pFVar3->RaidPartyInfo).LeaderUID) {
      iVar2 = 0;
      if (param_2) {
        iVar2 = param_1;
      }
      this->CurrentDropSlotIndex = iVar2;
    }
  }
  return;
}

// OnChangePartySlot @ 14be90b80

void __thiscall UDS_VM_RaidPartyList::OnChangePartySlot(UDS_VM_RaidPartyList *this,int param_1)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  
  if ((this->CurrentDropSlotIndex != param_1) &&
     (bVar1 = FDS_RaidPartyService::RequestRaidPartySlotChange(param_1,this->CurrentDropSlotIndex),
     bVar1)) {
    return;
  }
  pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar2);
  if (bVar1) {
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar3 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar2);
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if (pFVar3->PlayerUID == (pFVar2->RaidPartyInfo).LeaderUID) {
      this->CurrentDropSlotIndex = 0;
    }
  }
  return;
}

// OnChangedRaidPartyInfo @ 14be916a0

void __thiscall UDS_VM_RaidPartyList::OnChangedRaidPartyInfo(UDS_VM_RaidPartyList *this)

{
  int *piVar1;
  FDS_EntryBindingEventField *this_00;
  int iVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FDS_RaidPartyRepo *pFVar8;
  FDS_DungeonBaseTableRow *pFVar9;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *pUVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  TReferenceControllerBase<1> *pTVar15;
  FDS_ViewModelContext *pFVar16;
  EDS_ViewModelTemplateKey EVar17;
  FDS_ViewModelContext *pFVar18;
  ulonglong uStackX_8;
  UDS_VM_RaidPartyList *pUStackX_10;
  UDS_VM_RaidPartyList *pUStackX_18;
  UDS_VM_RaidPartyList *pUStackX_20;
  FDS_EntryBindingEventField FStack_188;
  TSharedPtr<FDS_ViewModelContext,1> TStack_178;
  FName FStack_168;
  int iStack_160;
  uint uStack_15c;
  UDS_VM_RaidPartyList *pUStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  UDS_UserObjectListItem *pUStack_148;
  undefined4 uStack_140;
  uint uStack_13c;
  code *pcStack_138;
  undefined8 uStack_130;
  TSharedPtr<FDS_ViewModelContext,1> TStack_128;
  TSharedPtr<FDS_ViewModelContext,1> TStack_118;
  TSharedPtr<FDS_ViewModelContext,1> TStack_108;
  FDestructionSentinel FStack_f8;
  FName *pFStack_e0;
  FDestructionSentinel FStack_d8;
  FName *pFStack_c0;
  FDestructionSentinel FStack_b8;
  FDS_ViewModelContext *pFStack_a0;
  FDestructionSentinel FStack_98;
  atomic<int> *paStack_80;
  code *pcStack_78;
  longlong lStack_70;
  code *pcStack_68;
  longlong lStack_60;
  code *pcStack_58;
  longlong lStack_50;
  
  pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar9 = FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar8->RaidPartyInfo).DungeonId,true);
  uVar7 = DS_CommonDataHelper::GetMaxRaidPartyMember((uint)pFVar9->DungeonType);
  uStackX_8 = (ulonglong)uVar7;
  FStack_188.UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_188.UserObjectList.ArrayNum = 0;
  FStack_188.UserObjectList.ArrayMax = 0;
  FDS_EntryBindingEventField::Reset(&FStack_188);
  if (0 < (int)uVar7) {
    FStack_168 = (FName)NotifyPartyDropMode;
    pUStack_148 = (UDS_UserObjectListItem *)OpenMemberSettingPopup;
    uStack_13c = uStack_130._4_4_;
    pUStack_158 = (UDS_VM_RaidPartyList *)OnChangePartySlot;
    uStack_14c = uStack_130._4_4_;
    TStack_178.Object = (FDS_ViewModelContext *)OnInvitePartyMember;
    EVar17 = W_Patcher;
    iStack_160 = 0;
    uStack_15c = uStack_130._4_4_;
    lStack_70 = (ulonglong)uStack_130._4_4_ << 0x20;
    pcStack_78 = NotifyPartyDropMode;
    uStack_140 = 0;
    lStack_60 = (ulonglong)uStack_130._4_4_ << 0x20;
    pcStack_68 = OpenMemberSettingPopup;
    uStack_150 = 0;
    lStack_50 = (ulonglong)uStack_130._4_4_ << 0x20;
    TStack_178.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)uStack_130._4_4_ << 0x20);
    pcStack_58 = OnChangePartySlot;
    pcStack_138 = OnInvitePartyMember;
    uStack_130 = (FDS_ViewModelContext *)TStack_178.SharedReferenceCount.ReferenceController;
    do {
      pFVar16 = (FDS_ViewModelContext *)0x0;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pFVar10 = ::operator_new(0x90);
      pFVar18 = pFVar16;
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar10->ViewModelTemplateKey = 0;
        pFVar10[1]._padding_ = 0;
        *(undefined8 *)&pFVar10[1].field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar10[2]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar10[2].ViewModelTemplateKey = 0;
        pFVar10[3].ViewModelName.ComparisonIndex = 0;
        pFVar10[3].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar10[4].DerivedStaticStruct = 0;
        *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
        (pFVar10->ViewModelName).ComparisonIndex = 0;
        (pFVar10->ViewModelName).Number = 0;
        pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_RaidPartySlot__6B_;
        *(undefined8 *)&pFVar10[1].DerivedStaticStruct = 0;
        pFVar10[1].ViewModelName.ComparisonIndex = 0;
        pFVar10[1].ViewModelName.Number = 0;
        pFVar10[1].ViewModelTemplateKey = None;
        *(undefined8 *)&pFVar10[2].DerivedStaticStruct = 0;
        pFVar10[2].ViewModelName.ComparisonIndex = 0;
        pFVar10[2].ViewModelName.Number = 0;
        pFVar10[3]._padding_ = 0;
        *(undefined8 *)&pFVar10[3].DerivedStaticStruct = 0;
        *(undefined8 *)&pFVar10[3].ViewModelTemplateKey = 0;
        pFVar10[4]._padding_ = 0;
        pFVar18 = pFVar10;
      }
      pFVar10 = ::operator_new(0x20);
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        pFVar10->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RaidPartySlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar18;
        pFVar16 = pFVar10;
      }
      if ((pFVar18 == (FDS_ViewModelContext *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar11 = FDS_ViewModelContext_RaidPartySlot::StaticStruct();
      *(UScriptStruct **)&pFVar18->DerivedStaticStruct = pUVar11;
      pUVar12 = UDS_ViewModelContextManager::GetInst();
      if (pUVar12 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar16->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar16->DerivedStaticStruct + 1);
          UNLOCK();
        }
        TStack_178.Object = pFVar18;
        TStack_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar16
        ;
        UDS_ViewModelContextManager::RegisterContext(pUVar12,&TStack_178);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_178.SharedReferenceCount.ReferenceController);
      }
      pFVar18->ViewModelTemplateKey = W_RaidPartySlot;
      *(EDS_ViewModelTemplateKey *)&pFVar18[1]._padding_ = EVar17;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar18[1].DerivedStaticStruct,(FWriteAccessScope *)&FStack_f8);
      pFStack_e0 = &pFVar18[1].ViewModelName;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)pFStack_e0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidPartyList____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        pUStackX_10 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&pUStackX_10);
        puVar13[4] = pcStack_78;
        puVar13[5] = lStack_70;
      }
      if (FStack_f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_f8.Accessor,&FStack_f8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar18[2].DerivedStaticStruct,(FWriteAccessScope *)&FStack_d8);
      pFStack_c0 = &pFVar18[2].ViewModelName;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)pFStack_c0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidPartyList____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        pUStackX_18 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&pUStackX_18);
        puVar13[4] = pcStack_68;
        puVar13[5] = lStack_60;
      }
      if (FStack_d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_d8.Accessor,&FStack_d8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar18[3].ViewModelTemplateKey,(FWriteAccessScope *)&FStack_b8);
      pFStack_a0 = pFVar18 + 4;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)pFStack_a0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidPartyList____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        pUStackX_20 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&pUStackX_20);
        puVar13[4] = pcStack_58;
        puVar13[5] = lStack_50;
      }
      if (FStack_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_b8.Accessor,&FStack_b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar18 + 3),
                 (FWriteAccessScope *)&FStack_98);
      paStack_80 = (atomic<int> *)&pFVar18[3].DerivedStaticStruct;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)paStack_80);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidPartyList____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        pUStack_158 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&pUStack_158);
        puVar13[4] = pcStack_138;
        puVar13[5] = uStack_130;
      }
      if (FStack_98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_98.Accessor,&FStack_98);
      }
      pFVar10 = ::operator_new(0x48);
      if (pFVar10 == (FDS_ViewModelContext *)0x0) {
        pFVar10 = (FDS_ViewModelContext *)0x0;
      }
      else {
        *(undefined8 *)&pFVar10->field_0x1c = 0;
        *(undefined8 *)((longlong)&pFVar10[1]._padding_ + 4) = 0;
        *(undefined8 *)((longlong)&pFVar10[1].DerivedStaticStruct + 4) = 0;
        *(undefined8 *)&pFVar10[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar10[1].field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar10[2]._padding_ + 4) = 0;
        pFVar10->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar10->ViewModelName).ComparisonIndex = 0;
        (pFVar10->ViewModelName).Number = 0;
        pFVar10->ViewModelTemplateKey = None;
        pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_RaidPartyMemberInfo__6B_;
      }
      pTVar15 = ::operator_new(0x20);
      if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar15->SharedReferenceCount = (atomic<int>)0x1;
        pTVar15[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar15->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RaidPartyMemberInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar15->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar15[1].SharedReferenceCount = pFVar10;
      }
      if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar11 = FDS_ViewModelContext_RaidPartyMemberInfo::StaticStruct();
      pFVar10->DerivedStaticStruct = (UStruct *)pUVar11;
      pUVar12 = UDS_ViewModelContextManager::GetInst();
      if (pUVar12 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        TStack_128.Object = pFVar10;
        TStack_128.SharedReferenceCount.ReferenceController = pTVar15;
        UDS_ViewModelContextManager::RegisterContext(pUVar12,&TStack_128);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_128.SharedReferenceCount.ReferenceController);
      }
      pFVar10->ViewModelTemplateKey = RaidPartyMemberInfo;
      *(undefined1 *)&pFVar10[1].DerivedStaticStruct = 0;
      pFVar10[1].ViewModelTemplateKey = EVar17;
      if (pFVar16 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar16->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar16->DerivedStaticStruct + 1);
        UNLOCK();
      }
      TStack_118.Object = pFVar18;
      TStack_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar16;
      UDS_UserObjectListItem::AddContext(this_01,&TStack_118);
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      TStack_108.Object = pFVar10;
      TStack_108.SharedReferenceCount.ReferenceController = pTVar15;
      UDS_UserObjectListItem::AddContext(this_01,&TStack_108);
      pUStack_148 = this_01;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add(&FStack_188,(TObjectPtr<UDS_UserObjectListItem>)&pUStack_148);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar16);
      EVar17 = EVar17 + W_Patcher;
      uStackX_8 = uStackX_8 - 1;
    } while (uStackX_8 != 0);
  }
  this_00 = &this->PartyEntryEventField;
  FDS_EntryBindingEventField::Reset(this_00);
  FVar4.Data = FStack_188.UserObjectList.AllocatorInstance.Data;
  if (this_00 != &FStack_188) {
    iVar5 = FStack_188.UserObjectList.ArrayNum;
    piVar1 = &(this->PartyEntryEventField).UserObjectList.ArrayMax;
    iVar2 = *piVar1;
    (this->PartyEntryEventField).UserObjectList.ArrayNum = FStack_188.UserObjectList.ArrayNum;
    if ((FStack_188.UserObjectList.ArrayNum == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,FStack_188.UserObjectList.ArrayNum,iVar2,(ForAnyElementType *)this_00,
                 FStack_188.UserObjectList.ArrayNum,piVar1);
      ConstructItems<TObjectPtr<UDS_UserObjectListItem>,TObjectPtr<UDS_UserObjectListItem>,int>
                ((this_00->UserObjectList).AllocatorInstance.Data,
                 (TObjectPtr<UDS_UserObjectListItem> *)FVar4.Data,iVar5);
    }
  }
  iStack_160 = FFieldNotificationClassDescriptor::PartyEntryEventField.BitNumber;
  FStack_168 = FFieldNotificationClassDescriptor::PartyEntryEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_168);
  if (FStack_188.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_188.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// OnInvitePartyMember @ 14be99930

void __thiscall UDS_VM_RaidPartyList::OnInvitePartyMember(UDS_VM_RaidPartyList *this,int param_1)

{
  return;
}

// OnSetViewModel @ 14bea54f0

void __thiscall
UDS_VM_RaidPartyList::OnSetViewModel
          (UDS_VM_RaidPartyList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UpdateRaidPartyList(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenMemberSettingPopup @ 14beab370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RaidPartyList::OpenMemberSettingPopup(UDS_VM_RaidPartyList *this,int param_1)

{
  bool bVar1;
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar2;
  UDS_LogManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_WindowManager *this_01;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  FWeakObjectPtr local_1a0;
  UDS_WindowManager *local_198 [2];
  code *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  bool local_178;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar2 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_00,param_1);
  if (0 < pFVar2->PlayerUID) {
    local_198[0] = UDS_WindowManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_198[0] != (UDS_WindowManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_198[0]);
    }
    local_1a0.ObjectIndex = 0;
    local_1a0.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_198[0] != (UDS_WindowManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_198[0]);
    }
    FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)local_198);
    bVar1 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_1a0,(void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_RaidPartyList::OpenMemberSettingPopup",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x8b,L"windowManager is nullptr");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      uStack_180 = 0;
      local_188 = OpenMemberSettingPopupCallback;
      local_1b8 = (undefined1  [8])0x0;
      local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1b0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                 (FWriteAccessScope *)&local_168);
      local_150 = &local_1b0;
      puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
        ;
        *(int *)(puVar4 + 1) = param_1;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidPartyList____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar4[3] = 0;
        local_198[0] = (UDS_WindowManager *)this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_198);
        puVar4[4] = local_188;
        puVar4[5] = CONCAT44(uStack_17c,uStack_180);
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      this_01 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_1a0);
      pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_188,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_1b8);
      UDS_WindowManager::OpenWindow(this_01,RaidPartyMemberSetting,pTVar6);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                 (FWriteAccessScope *)&local_188);
      if ((local_1b0.DelegateSize != 0) &&
         (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_1b0,0,0,0x10);
        local_1b0.DelegateSize = 0;
      }
      if (local_178 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_17c,uStack_180),
                   (FDestructionSentinel *)&local_188);
      }
      if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1b0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1b8);
    }
  }
  return;
}

// OpenMemberSettingPopupCallback @ 14beab660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidPartyList::OpenMemberSettingPopupCallback
          (UDS_VM_RaidPartyList *this,UDS_UserWidget *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  undefined8 *puVar6;
  ulong64 uVar7;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  undefined1 auStackY_1f8 [32];
  FWeakObjectPtr local_1c8 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  UDS_VM_RaidPartyList *local_1a8;
  UDS_UserWidget *local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  FDestructionSentinel local_188;
  FName *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_RaidPartyList::OpenMemberSettingPopupCallback",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_168.Ptr,0x96,L"InWidget is nullptr");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    pFVar4 = ::operator_new(0x40);
    pFVar8 = (FDS_ViewModelContext *)0x0;
    pFVar9 = pFVar8;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0;
      *(undefined4 *)&pFVar4[1].field_0x1c = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_RaidPartyMemberSetting__6B_;
      *(undefined4 *)&pFVar4[1]._padding_ = 0;
      *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
      pFVar4[1].ViewModelName.ComparisonIndex = 0;
      pFVar4[1].ViewModelName.Number = 0;
      pFVar4[1].ViewModelTemplateKey = None;
      pFVar9 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RaidPartyMemberSetting__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar9;
      pFVar8 = pFVar4;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_RaidPartyMemberSetting::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar5;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar8->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_1b8.Object = pFVar9;
      local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_1b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = RaidPartyMemberSetting;
    local_1b8.Object = (FDS_ViewModelContext *)NotifyPartyDropMode;
    *(int *)&pFVar9[1]._padding_ = param_2;
    local_1b8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_198.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar9[1].DerivedStaticStruct,(FWriteAccessScope *)&local_188);
    local_170 = &pFVar9[1].ViewModelName;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_170);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidPartyList____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_RaidPartyList *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_1a8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_RaidPartyList *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_1a8);
      puVar6[4] = local_1b8.Object;
      puVar6[5] = local_1b8.SharedReferenceCount.ReferenceController;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_198.Object = pFVar9;
    local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1c8[0].ObjectIndex = 0;
    local_1c8[0].ObjectSerialNumber = 0;
    local_1a0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_1c8,(FObjectPtr)&local_1a0);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1c8[0],&local_198,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
  }
  return;
}

// SetPartyEntryEventField @ 14beb3b30

void __thiscall
UDS_VM_RaidPartyList::SetPartyEntryEventField
          (UDS_VM_RaidPartyList *this,FDS_EntryBindingEventField *param_1)

{
  int *piVar1;
  FDS_EntryBindingEventField *this_00;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FName local_18;
  int local_10;
  
  this_00 = &this->PartyEntryEventField;
  FDS_EntryBindingEventField::Reset(this_00);
  if (this_00 != param_1) {
    iVar2 = (this->PartyEntryEventField).UserObjectList.ArrayMax;
    piVar1 = &(this->PartyEntryEventField).UserObjectList.ArrayMax;
    iVar3 = (param_1->UserObjectList).ArrayNum;
    pFVar4 = (param_1->UserObjectList).AllocatorInstance.Data;
    (this->PartyEntryEventField).UserObjectList.ArrayNum = iVar3;
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
  local_10 = FFieldNotificationClassDescriptor::PartyEntryEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PartyEntryEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebcb60

void __thiscall UDS_VM_RaidPartyList::UnbindModel(UDS_VM_RaidPartyList *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    return;
  }
  return;
}

// UpdateRaidPartyList @ 14bec0db0

void __thiscall UDS_VM_RaidPartyList::UpdateRaidPartyList(UDS_VM_RaidPartyList *this)

{
  int *piVar1;
  FDS_EntryBindingEventField *this_00;
  int iVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FDS_RaidPartyRepo *pFVar8;
  FDS_DungeonBaseTableRow *pFVar9;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *pUVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  TReferenceControllerBase<1> *pTVar15;
  FDS_ViewModelContext *pFVar16;
  EDS_ViewModelTemplateKey EVar17;
  FDS_ViewModelContext *pFVar18;
  ulonglong local_res8;
  UDS_VM_RaidPartyList *local_res10;
  UDS_VM_RaidPartyList *local_res18;
  UDS_VM_RaidPartyList *local_res20;
  FDS_EntryBindingEventField local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  FName local_168;
  int iStack_160;
  uint uStack_15c;
  UDS_VM_RaidPartyList *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  UDS_UserObjectListItem *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  code *local_138;
  undefined8 uStack_130;
  TSharedPtr<FDS_ViewModelContext,1> local_128;
  TSharedPtr<FDS_ViewModelContext,1> local_118;
  TSharedPtr<FDS_ViewModelContext,1> local_108;
  FDestructionSentinel local_f8;
  FName *local_e0;
  FDestructionSentinel local_d8;
  FName *local_c0;
  FDestructionSentinel local_b8;
  FDS_ViewModelContext *local_a0;
  FDestructionSentinel local_98;
  atomic<int> *local_80;
  code *local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  
  pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar9 = FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar8->RaidPartyInfo).DungeonId,true);
  uVar7 = DS_CommonDataHelper::GetMaxRaidPartyMember((uint)pFVar9->DungeonType);
  local_res8 = (ulonglong)uVar7;
  local_188.UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.UserObjectList.ArrayNum = 0;
  local_188.UserObjectList.ArrayMax = 0;
  FDS_EntryBindingEventField::Reset(&local_188);
  if (0 < (int)uVar7) {
    local_168 = (FName)NotifyPartyDropMode;
    local_148 = (UDS_UserObjectListItem *)OpenMemberSettingPopup;
    uStack_13c = uStack_130._4_4_;
    local_158 = (UDS_VM_RaidPartyList *)OnChangePartySlot;
    uStack_14c = uStack_130._4_4_;
    local_178.Object = (FDS_ViewModelContext *)OnInvitePartyMember;
    EVar17 = W_Patcher;
    iStack_160 = 0;
    uStack_15c = uStack_130._4_4_;
    lStack_70 = (ulonglong)uStack_130._4_4_ << 0x20;
    local_78 = NotifyPartyDropMode;
    uStack_140 = 0;
    lStack_60 = (ulonglong)uStack_130._4_4_ << 0x20;
    local_68 = OpenMemberSettingPopup;
    uStack_150 = 0;
    lStack_50 = (ulonglong)uStack_130._4_4_ << 0x20;
    local_178.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)uStack_130._4_4_ << 0x20);
    local_58 = OnChangePartySlot;
    local_138 = OnInvitePartyMember;
    uStack_130 = (FDS_ViewModelContext *)local_178.SharedReferenceCount.ReferenceController;
    do {
      pFVar16 = (FDS_ViewModelContext *)0x0;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pFVar10 = ::operator_new(0x90);
      pFVar18 = pFVar16;
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar10->ViewModelTemplateKey = 0;
        pFVar10[1]._padding_ = 0;
        *(undefined8 *)&pFVar10[1].field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar10[2]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar10[2].ViewModelTemplateKey = 0;
        pFVar10[3].ViewModelName.ComparisonIndex = 0;
        pFVar10[3].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar10[4].DerivedStaticStruct = 0;
        *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
        (pFVar10->ViewModelName).ComparisonIndex = 0;
        (pFVar10->ViewModelName).Number = 0;
        pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_RaidPartySlot__6B_;
        *(undefined8 *)&pFVar10[1].DerivedStaticStruct = 0;
        pFVar10[1].ViewModelName.ComparisonIndex = 0;
        pFVar10[1].ViewModelName.Number = 0;
        pFVar10[1].ViewModelTemplateKey = None;
        *(undefined8 *)&pFVar10[2].DerivedStaticStruct = 0;
        pFVar10[2].ViewModelName.ComparisonIndex = 0;
        pFVar10[2].ViewModelName.Number = 0;
        pFVar10[3]._padding_ = 0;
        *(undefined8 *)&pFVar10[3].DerivedStaticStruct = 0;
        *(undefined8 *)&pFVar10[3].ViewModelTemplateKey = 0;
        pFVar10[4]._padding_ = 0;
        pFVar18 = pFVar10;
      }
      pFVar10 = ::operator_new(0x20);
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        pFVar10->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RaidPartySlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar18;
        pFVar16 = pFVar10;
      }
      if ((pFVar18 == (FDS_ViewModelContext *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar11 = FDS_ViewModelContext_RaidPartySlot::StaticStruct();
      *(UScriptStruct **)&pFVar18->DerivedStaticStruct = pUVar11;
      pUVar12 = UDS_ViewModelContextManager::GetInst();
      if (pUVar12 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar16->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar16->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_178.Object = pFVar18;
        local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar16;
        UDS_ViewModelContextManager::RegisterContext(pUVar12,&local_178);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178.SharedReferenceCount.ReferenceController);
      }
      pFVar18->ViewModelTemplateKey = W_RaidPartySlot;
      *(EDS_ViewModelTemplateKey *)&pFVar18[1]._padding_ = EVar17;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar18[1].DerivedStaticStruct,(FWriteAccessScope *)&local_f8);
      local_e0 = &pFVar18[1].ViewModelName;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_e0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidPartyList____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        local_res10 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_res10);
        puVar13[4] = local_78;
        puVar13[5] = lStack_70;
      }
      if (local_f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar18[2].DerivedStaticStruct,(FWriteAccessScope *)&local_d8);
      local_c0 = &pFVar18[2].ViewModelName;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidPartyList____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        local_res18 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_res18);
        puVar13[4] = local_68;
        puVar13[5] = lStack_60;
      }
      if (local_d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar18[3].ViewModelTemplateKey,(FWriteAccessScope *)&local_b8);
      local_a0 = pFVar18 + 4;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_a0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidPartyList____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        local_res20 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_res20);
        puVar13[4] = local_58;
        puVar13[5] = lStack_50;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar18 + 3),
                 (FWriteAccessScope *)&local_98);
      local_80 = (atomic<int> *)&pFVar18[3].DerivedStaticStruct;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_80);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidPartyList____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        local_158 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_RaidPartyList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_158);
        puVar13[4] = local_138;
        puVar13[5] = uStack_130;
      }
      if (local_98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
      }
      pFVar10 = ::operator_new(0x48);
      if (pFVar10 == (FDS_ViewModelContext *)0x0) {
        pFVar10 = (FDS_ViewModelContext *)0x0;
      }
      else {
        *(undefined8 *)&pFVar10->field_0x1c = 0;
        *(undefined8 *)((longlong)&pFVar10[1]._padding_ + 4) = 0;
        *(undefined8 *)((longlong)&pFVar10[1].DerivedStaticStruct + 4) = 0;
        *(undefined8 *)&pFVar10[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar10[1].field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar10[2]._padding_ + 4) = 0;
        pFVar10->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar10->ViewModelName).ComparisonIndex = 0;
        (pFVar10->ViewModelName).Number = 0;
        pFVar10->ViewModelTemplateKey = None;
        pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_RaidPartyMemberInfo__6B_;
      }
      pTVar15 = ::operator_new(0x20);
      if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar15->SharedReferenceCount = (atomic<int>)0x1;
        pTVar15[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar15->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RaidPartyMemberInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar15->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar15[1].SharedReferenceCount = pFVar10;
      }
      if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar11 = FDS_ViewModelContext_RaidPartyMemberInfo::StaticStruct();
      pFVar10->DerivedStaticStruct = (UStruct *)pUVar11;
      pUVar12 = UDS_ViewModelContextManager::GetInst();
      if (pUVar12 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_128.Object = pFVar10;
        local_128.SharedReferenceCount.ReferenceController = pTVar15;
        UDS_ViewModelContextManager::RegisterContext(pUVar12,&local_128);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.SharedReferenceCount.ReferenceController);
      }
      pFVar10->ViewModelTemplateKey = RaidPartyMemberInfo;
      *(undefined1 *)&pFVar10[1].DerivedStaticStruct = 0;
      pFVar10[1].ViewModelTemplateKey = EVar17;
      if (pFVar16 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar16->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar16->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_118.Object = pFVar18;
      local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar16;
      UDS_UserObjectListItem::AddContext(this_01,&local_118);
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108.Object = pFVar10;
      local_108.SharedReferenceCount.ReferenceController = pTVar15;
      UDS_UserObjectListItem::AddContext(this_01,&local_108);
      local_148 = this_01;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add(&local_188,(TObjectPtr<UDS_UserObjectListItem>)&local_148);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar16);
      EVar17 = EVar17 + W_Patcher;
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
  }
  this_00 = &this->PartyEntryEventField;
  FDS_EntryBindingEventField::Reset(this_00);
  FVar4.Data = local_188.UserObjectList.AllocatorInstance.Data;
  if (this_00 != &local_188) {
    iVar5 = local_188.UserObjectList.ArrayNum;
    piVar1 = &(this->PartyEntryEventField).UserObjectList.ArrayMax;
    iVar2 = *piVar1;
    (this->PartyEntryEventField).UserObjectList.ArrayNum = local_188.UserObjectList.ArrayNum;
    if ((local_188.UserObjectList.ArrayNum == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_188.UserObjectList.ArrayNum,iVar2,(ForAnyElementType *)this_00,
                 local_188.UserObjectList.ArrayNum,piVar1);
      ConstructItems<TObjectPtr<UDS_UserObjectListItem>,TObjectPtr<UDS_UserObjectListItem>,int>
                ((this_00->UserObjectList).AllocatorInstance.Data,
                 (TObjectPtr<UDS_UserObjectListItem> *)FVar4.Data,iVar5);
    }
  }
  iStack_160 = FFieldNotificationClassDescriptor::PartyEntryEventField.BitNumber;
  local_168 = FFieldNotificationClassDescriptor::PartyEntryEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  if (local_188.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

