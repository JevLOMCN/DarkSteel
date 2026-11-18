// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b676600

UClass * __cdecl UDS_VM_HUD_OtherPartyGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_OtherPartyGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_OtherPartyGroup",
               &Z_Registration_Info_UClass_UDS_VM_HUD_OtherPartyGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_OtherPartyGroup,0xc0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_HUD_OtherPartyGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_OtherPartyGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_OtherPartyGroup.InnerSingleton;
}

// UDS_VM_HUD_OtherPartyGroup @ 14b679830

UDS_VM_HUD_OtherPartyGroup * __thiscall
UDS_VM_HUD_OtherPartyGroup::UDS_VM_HUD_OtherPartyGroup
          (UDS_VM_HUD_OtherPartyGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_Party = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_OtherPartyGroup__6B_;
  (this->VM_GroupSlot1).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyGroupSlot *)0x0;
  (this->VM_GroupSlot2).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyGroupSlot *)0x0;
  this->StartIndex = 0;
  return this;
}

// UDS_VM_HUD_OtherPartyGroup @ 14b679890

UDS_VM_HUD_OtherPartyGroup * __thiscall
UDS_VM_HUD_OtherPartyGroup::UDS_VM_HUD_OtherPartyGroup
          (UDS_VM_HUD_OtherPartyGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_Party = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_OtherPartyGroup__6B_;
  (this->VM_GroupSlot1).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyGroupSlot *)0x0;
  (this->VM_GroupSlot2).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyGroupSlot *)0x0;
  this->StartIndex = 0;
  return this;
}

// ~UDS_VM_HUD_OtherPartyGroup @ 14b67b440

void __thiscall
UDS_VM_HUD_OtherPartyGroup::~UDS_VM_HUD_OtherPartyGroup(UDS_VM_HUD_OtherPartyGroup *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_OtherPartyGroup__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67dc60

IClassDescriptor * __thiscall
UDS_VM_HUD_OtherPartyGroup::GetFieldNotificationDescriptor(UDS_VM_HUD_OtherPartyGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_OtherPartyGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67e530

UClass * __cdecl UDS_VM_HUD_OtherPartyGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_OtherPartyGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_OtherPartyGroup",
               &Z_Registration_Info_UClass_UDS_VM_HUD_OtherPartyGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_OtherPartyGroup,0xc0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_HUD_OtherPartyGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_OtherPartyGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_OtherPartyGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_OtherPartyGroup @ 14b67f1d0

void __cdecl UDS_VM_HUD_OtherPartyGroup::StaticRegisterNativesUDS_VM_HUD_OtherPartyGroup(void)

{
  return;
}

// BindModel @ 14bed7470

void __thiscall UDS_VM_HUD_OtherPartyGroup::BindModel(UDS_VM_HUD_OtherPartyGroup *this)

{
  UDS_DungeonEvent *pUVar1;
  UDS_PartyEvent *pUVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_OtherPartyGroup>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyInfo,(UDS_VM_HUD_OtherPartyGroup *)&stack0x00000010,
               (pmf_993cb348 *)this);
  }
  pUVar2 = UDS_PartyEvent::GetEvent();
  if (pUVar2 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnJoinedParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_OtherPartyGroup>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnJoinedParty,(UDS_VM_HUD_OtherPartyGroup *)&stack0x00000010,
               (pmf_993cb348 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLeftParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_OtherPartyGroup>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnLeftParty,(UDS_VM_HUD_OtherPartyGroup *)&stack0x00000010,
               (pmf_993cb348 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnJoinedPartyMember,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_OtherPartyGroup>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnJoinedPartyMember,(UDS_VM_HUD_OtherPartyGroup *)&stack0x00000010,
               (pmf_70278077 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLeftPartyMember,this
              );
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_OtherPartyGroup>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnLeftPartyMember,(UDS_VM_HUD_OtherPartyGroup *)&stack0x00000010,
               (pmf_70278077 *)this);
  }
  return;
}

// InitPartyGroupSlot_1 @ 14bef2660

void __thiscall
UDS_VM_HUD_OtherPartyGroup::InitPartyGroupSlot_1
          (UDS_VM_HUD_OtherPartyGroup *this,EDS_PartyType param_1,int param_2,int param_3)

{
  UDS_VM_HUD_PartyGroupSlot *this_00;
  code *pcVar1;
  FDS_ViewModelContext_PartyMember *pFVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  MakeContext<FDS_ViewModelContext_PartyMember>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_PartyMember *)0x0) {
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
  *(undefined4 *)&pFVar2->_padding_ = 0x30;
  pFVar2->PartyType = param_1;
  pFVar2->SlotIndex = param_2;
  pFVar2->SlotNumber = param_3;
  this_00 = (this->VM_GroupSlot1).field0_0x0.DebugPtr;
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
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// InitPartyGroupSlot_2 @ 14bef2730

void __thiscall
UDS_VM_HUD_OtherPartyGroup::InitPartyGroupSlot_2
          (UDS_VM_HUD_OtherPartyGroup *this,EDS_PartyType param_1,int param_2,int param_3)

{
  UDS_VM_HUD_PartyGroupSlot *this_00;
  code *pcVar1;
  FDS_ViewModelContext_PartyMember *pFVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  MakeContext<FDS_ViewModelContext_PartyMember>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_PartyMember *)0x0) {
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
  *(undefined4 *)&pFVar2->_padding_ = 0x30;
  pFVar2->PartyType = param_1;
  pFVar2->SlotIndex = param_2;
  pFVar2->SlotNumber = param_3;
  this_00 = (this->VM_GroupSlot2).field0_0x0.DebugPtr;
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
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// InitViewModel @ 14bef2ac0

void __thiscall UDS_VM_HUD_OtherPartyGroup::InitViewModel(UDS_VM_HUD_OtherPartyGroup *this)

{
  UDS_VM_HUD_PartyGroupSlot *pUVar1;
  
  if ((this->VM_GroupSlot1).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyGroupSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_PartyGroupSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_PartyGroupSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_GroupSlot1).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_GroupSlot2).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyGroupSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_PartyGroupSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_PartyGroupSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_GroupSlot2).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnPartyInfoChanged @ 14bf020c0

void __thiscall UDS_VM_HUD_OtherPartyGroup::OnPartyInfoChanged(UDS_VM_HUD_OtherPartyGroup *this)

{
  FDS_PartyInfo *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FDS_RaidPartyRepo *pFVar7;
  FDS_DungeonBaseTableRow *pFVar8;
  FDS_RaidPartyMemberInfo *pFVar9;
  FDS_PartyRepo *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  FName *pFVar13;
  ForAnyElementType FVar14;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  undefined4 uStackX_1c;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  ForAnyElementType local_38;
  uint local_30;
  int local_2c;
  
  pFVar7 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar7);
  if (bVar4) {
    pFVar7 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar8 = FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar7->RaidPartyInfo).DungeonId,true);
    if (pFVar8->DungeonType == Normal) {
      if (this->Vis_Party == Collapsed) {
        return;
      }
      local_98 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
      pFVar13 = &local_98;
      local_90 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
    }
    else {
      pFVar7 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar9 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar7);
      if (pFVar9->MemberState == DungeonInPlay) {
        if (this->Vis_Party != Collapsed) {
          return;
        }
        iVar5 = FDS_RaidPartyService::GetMyRaidPartyNumber(pFVar9->SlotIndex);
        uStackX_1c = 1;
        local_30 = 2;
        local_res18 = 0;
        local_38.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,2,0,&local_38,2,&local_2c);
        uVar11 = local_30;
        *(ulonglong *)local_38.Data = CONCAT44(uStackX_1c,local_res18);
        uVar12 = (ulonglong)(int)local_30;
        pFVar1 = local_38.Data + uVar12 * 4;
        FVar14.Data = local_38.Data;
        while( true ) {
          if ((uint)uVar12 != uVar11) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
            uVar12 = (ulonglong)local_30;
          }
          if (FVar14.Data == pFVar1) break;
          if (iVar5 <= *(int *)FVar14.Data) {
            *(int *)FVar14.Data = *(int *)FVar14.Data + 1;
            uVar12 = (ulonglong)local_30;
          }
          FVar14.Data = FVar14.Data + 4;
        }
        uVar11 = (uint)uVar12;
        if (((int)(uint)uVar12 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar11 = local_30, bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = *(int *)local_38.Data;
        if (((int)uVar11 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        InitPartyGroupSlot_1(this,RaidParty,*(int *)local_38.Data * 4 + 1,iVar5 + 1);
        if (((int)local_30 < 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = *(int *)(local_38.Data + 4);
        if (((int)local_30 < 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        InitPartyGroupSlot_2(this,RaidParty,*(int *)(local_38.Data + 4) * 4 + 1,iVar5 + 1);
        iVar5 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
        if (this->Vis_Party != SelfHitTestInvisible) {
          this->Vis_Party = SelfHitTestInvisible;
          local_80 = iVar5;
          local_88 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
        }
        if (local_38.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_38.Data);
        return;
      }
      if (this->Vis_Party == Collapsed) {
        return;
      }
      local_78 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
      pFVar13 = &local_78;
      local_70 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
    }
LAB_14bf0265f:
    this->Vis_Party = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar13);
    return;
  }
  pFVar10 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  this_00 = &pFVar10->PartyInfo;
  bVar4 = FDS_PartyInfo::IsValid(this_00);
  if ((!bVar4) ||
     ((bVar4 = FDS_PartyInfo::ExistPartyGroup(this_00,2), !bVar4 &&
      (bVar4 = FDS_PartyInfo::ExistPartyGroup(this_00,3), !bVar4)))) {
    if (this->Vis_Party == Collapsed) {
      return;
    }
    local_58 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
    pFVar13 = &local_58;
    local_50 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
    goto LAB_14bf0265f;
  }
  iVar5 = FDS_PartyInfo::GetMyPartyGroupNumber(this_00);
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_3c = 0;
  if (iVar5 == 1) {
LAB_14bf0245b:
    if (local_40 == local_3c) {
      local_40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_48,&local_3c);
    }
    iVar6 = local_40 + 1;
    *(undefined4 *)(local_48.Data + (longlong)local_40 * 4) = 1;
    local_40 = iVar6;
    if (iVar5 == 3) goto LAB_14bf024ba;
  }
  else {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_48,&local_3c);
    local_40 = iVar6 + 1;
    *(undefined4 *)(local_48.Data + (longlong)iVar6 * 4) = 0;
    if (iVar5 != 2) goto LAB_14bf0245b;
  }
  if (local_40 == local_3c) {
    local_40 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_48,&local_3c);
  }
  *(undefined4 *)(local_48.Data + (longlong)local_40 * 4) = 2;
  local_40 = local_40 + 1;
LAB_14bf024ba:
  if ((local_40 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)local_48.Data;
  if ((local_40 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  InitPartyGroupSlot_1(this,Party,*(int *)local_48.Data << 2,iVar5 + 1);
  if ((local_40 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)(local_48.Data + 4);
  if ((local_40 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  InitPartyGroupSlot_2(this,Party,*(int *)(local_48.Data + 4) << 2,iVar5 + 1);
  iVar5 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
  if (this->Vis_Party != SelfHitTestInvisible) {
    this->Vis_Party = SelfHitTestInvisible;
    local_60 = iVar5;
    local_68 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  if (local_48.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_48.Data);
  return;
}

// OnPartyMemberChanged @ 14bf02c50

void __thiscall
UDS_VM_HUD_OtherPartyGroup::OnPartyMemberChanged(UDS_VM_HUD_OtherPartyGroup *this,long64 param_1)

{
  FDS_PartyInfo *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FDS_RaidPartyRepo *pFVar7;
  FDS_DungeonBaseTableRow *pFVar8;
  FDS_RaidPartyMemberInfo *pFVar9;
  FDS_PartyRepo *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  FName *pFVar13;
  ForAnyElementType FVar14;
  undefined1 auStackX_10 [8];
  undefined4 uStackX_18;
  undefined4 uStackX_1c;
  FName FStack_98;
  int iStack_90;
  FName FStack_88;
  int iStack_80;
  FName FStack_78;
  int iStack_70;
  FName FStack_68;
  int iStack_60;
  FName FStack_58;
  int iStack_50;
  ForAnyElementType FStack_48;
  int iStack_40;
  int iStack_3c;
  ForAnyElementType FStack_38;
  uint uStack_30;
  int iStack_2c;
  
  pFVar7 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar7);
  if (bVar4) {
    pFVar7 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar8 = FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar7->RaidPartyInfo).DungeonId,true);
    if (pFVar8->DungeonType == Normal) {
      if (this->Vis_Party == Collapsed) {
        return;
      }
      FStack_98 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
      pFVar13 = &FStack_98;
      iStack_90 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
    }
    else {
      pFVar7 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar9 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar7);
      if (pFVar9->MemberState == DungeonInPlay) {
        if (this->Vis_Party != Collapsed) {
          return;
        }
        iVar5 = FDS_RaidPartyService::GetMyRaidPartyNumber(pFVar9->SlotIndex);
        uStackX_1c = 1;
        uStack_30 = 2;
        uStackX_18 = 0;
        FStack_38.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,2,0,&FStack_38,2,&iStack_2c);
        uVar11 = uStack_30;
        *(ulonglong *)FStack_38.Data = CONCAT44(uStackX_1c,uStackX_18);
        uVar12 = (ulonglong)(int)uStack_30;
        pFVar1 = FStack_38.Data + uVar12 * 4;
        FVar14.Data = FStack_38.Data;
        while( true ) {
          if ((uint)uVar12 != uVar11) {
            auStackX_10[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (auStackX_10);
            uVar12 = (ulonglong)uStack_30;
          }
          if (FVar14.Data == pFVar1) break;
          if (iVar5 <= *(int *)FVar14.Data) {
            *(int *)FVar14.Data = *(int *)FVar14.Data + 1;
            uVar12 = (ulonglong)uStack_30;
          }
          FVar14.Data = FVar14.Data + 4;
        }
        uVar11 = (uint)uVar12;
        if (((int)(uint)uVar12 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar11 = uStack_30, bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = *(int *)FStack_38.Data;
        if (((int)uVar11 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        InitPartyGroupSlot_1(this,RaidParty,*(int *)FStack_38.Data * 4 + 1,iVar5 + 1);
        if (((int)uStack_30 < 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = *(int *)(FStack_38.Data + 4);
        if (((int)uStack_30 < 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        InitPartyGroupSlot_2(this,RaidParty,*(int *)(FStack_38.Data + 4) * 4 + 1,iVar5 + 1);
        iVar5 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
        if (this->Vis_Party != SelfHitTestInvisible) {
          this->Vis_Party = SelfHitTestInvisible;
          iStack_80 = iVar5;
          FStack_88 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_88);
        }
        if (FStack_38.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(FStack_38.Data);
        return;
      }
      if (this->Vis_Party == Collapsed) {
        return;
      }
      FStack_78 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
      pFVar13 = &FStack_78;
      iStack_70 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
    }
LAB_14bf0265f:
    this->Vis_Party = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar13);
    return;
  }
  pFVar10 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  this_00 = &pFVar10->PartyInfo;
  bVar4 = FDS_PartyInfo::IsValid(this_00);
  if ((!bVar4) ||
     ((bVar4 = FDS_PartyInfo::ExistPartyGroup(this_00,2), !bVar4 &&
      (bVar4 = FDS_PartyInfo::ExistPartyGroup(this_00,3), !bVar4)))) {
    if (this->Vis_Party == Collapsed) {
      return;
    }
    FStack_58 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
    pFVar13 = &FStack_58;
    iStack_50 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
    goto LAB_14bf0265f;
  }
  iVar5 = FDS_PartyInfo::GetMyPartyGroupNumber(this_00);
  FStack_48.Data = (FScriptContainerElement *)0x0;
  iStack_40 = 0;
  iStack_3c = 0;
  if (iVar5 == 1) {
LAB_14bf0245b:
    if (iStack_40 == iStack_3c) {
      iStack_40 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&FStack_48,&iStack_3c);
    }
    iVar6 = iStack_40 + 1;
    *(undefined4 *)(FStack_48.Data + (longlong)iStack_40 * 4) = 1;
    iStack_40 = iVar6;
    if (iVar5 == 3) goto LAB_14bf024ba;
  }
  else {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&FStack_48,&iStack_3c);
    iStack_40 = iVar6 + 1;
    *(undefined4 *)(FStack_48.Data + (longlong)iVar6 * 4) = 0;
    if (iVar5 != 2) goto LAB_14bf0245b;
  }
  if (iStack_40 == iStack_3c) {
    iStack_40 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&FStack_48,&iStack_3c);
  }
  *(undefined4 *)(FStack_48.Data + (longlong)iStack_40 * 4) = 2;
  iStack_40 = iStack_40 + 1;
LAB_14bf024ba:
  if ((iStack_40 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)FStack_48.Data;
  if ((iStack_40 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  InitPartyGroupSlot_1(this,Party,*(int *)FStack_48.Data << 2,iVar5 + 1);
  if ((iStack_40 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)(FStack_48.Data + 4);
  if ((iStack_40 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  InitPartyGroupSlot_2(this,Party,*(int *)(FStack_48.Data + 4) << 2,iVar5 + 1);
  iVar5 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
  if (this->Vis_Party != SelfHitTestInvisible) {
    this->Vis_Party = SelfHitTestInvisible;
    iStack_60 = iVar5;
    FStack_68 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_68);
  }
  if (FStack_48.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(FStack_48.Data);
  return;
}

// OnSetViewModel @ 14bf049c0

void __thiscall
UDS_VM_HUD_OtherPartyGroup::OnSetViewModel
          (UDS_VM_HUD_OtherPartyGroup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  OnPartyInfoChanged(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bf1dd40

void __thiscall UDS_VM_HUD_OtherPartyGroup::UnbindModel(UDS_VM_HUD_OtherPartyGroup *this)

{
  UDS_DungeonEvent *pUVar1;
  UDS_PartyEvent *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
  }
  pUVar2 = UDS_PartyEvent::GetEvent();
  if (pUVar2 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnJoinedParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLeftParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnJoinedPartyMember,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLeftPartyMember,this
              );
  }
  return;
}

