// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b643150

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList.
                InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList,0xb8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList.InnerSingleton
  ;
}

// UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList @ 14b646e20

UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList
          (UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList__6B_;
  (this->MemberSlotEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemberSlotEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->MemberSlotEntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList @ 14b646e70

UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList
          (UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList__6B_;
  (this->MemberSlotEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemberSlotEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->MemberSlotEntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList @ 14b648d60

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::
~UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList
          (UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList__6B_;
  pFVar1 = (this->MemberSlotEntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b64ad70

IClassDescriptor * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::GetFieldNotificationDescriptor
          (UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64b390

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList.
                InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList,0xb8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList.InnerSingleton
  ;
}

// StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList @ 14b64be10

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::
StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList(void)

{
  return;
}

// OnSetViewModel @ 14be342a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::OnSetViewModel
          (UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList *this,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_RaidPartyInfo>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::OnSetViewModel",0x41
                 ,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x11,L"raidPartyInfoContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->RaidPartyUID = (local_158.Object)->RaidPartyUID;
    UpdateMemberList(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateMemberList @ 14be583f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::UpdateMemberList
          (UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList *this)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  FDS_ViewModelContext_RaidPartyMemberInfo *pFVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  UDS_DungeonManager *this_00;
  UDS_LogManager *pUVar7;
  UDS_UserObjectListItem *this_01;
  RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *pRVar8;
  RaidCharInfo *pRVar9;
  undefined1 auStackY_388 [32];
  UDS_UserObjectListItem *local_358 [2];
  FName local_348;
  int local_340;
  TSharedPtr<FDS_ViewModelContext_RaidPartyMemberInfo,1> local_338;
  TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  local_328;
  RaidCharInfo local_310;
  TSharedPtr<FDS_ViewModelContext,1> local_2e8;
  RaidPartyInfo local_2d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 == (UDS_DungeonManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::UpdateMemberList",
                 0x43,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_278.Ptr,0x1f,L"dungeonManager is nullptr");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    local_328._0_8_ = 0;
    local_328._8_8_ = 0;
    local_328._16_4_ = 0;
    UDS_DungeonManager::GetRaidPartyListDetailInfo(this_00,&local_2d8,this->RaidPartyUID,&local_328)
    ;
    if (local_2d8._impl_.raid_party_uid_ == this->RaidPartyUID) {
      FDS_EntryBindingEventField::Reset(&this->MemberSlotEntryBindingEventField);
      if ((local_2d8._impl_.members_._0_8_ & 1) == 0) {
        pRVar8 = &local_2d8._impl_.members_;
      }
      else {
        pRVar8 = (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)
                 (local_2d8._impl_.members_._0_8_ + 7);
      }
      plVar3 = (longlong *)&pRVar8->field_0x0;
      for (; pRVar8 != (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)
                       (plVar3 + (int)local_2d8._impl_.members_._8_4_);
          pRVar8 = (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)&pRVar8->field_0x8) {
        lVar1 = *(longlong *)pRVar8;
        if ((*(byte *)(lVar1 + 0x10) & 2) != 0) {
          pRVar9 = &ds_proto::_RaidCharInfo_default_instance_._instance;
          if (*(RaidCharInfo **)(lVar1 + 0x20) != (RaidCharInfo *)0x0) {
            pRVar9 = *(RaidCharInfo **)(lVar1 + 0x20);
          }
          ds_proto::RaidCharInfo::RaidCharInfo(&local_310,(Arena *)0x0,pRVar9);
          local_310._padding_ = (longlong)&___7RaidCharInfo_ds_proto__6B_;
          this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          MakeContext<FDS_ViewModelContext_RaidPartyMemberInfo>(&local_338);
          pFVar4 = local_338.Object;
          if ((local_338.Object == (FDS_ViewModelContext_RaidPartyMemberInfo *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar5.ReferenceController = local_338.SharedReferenceCount.ReferenceController;
          *(undefined4 *)&pFVar4->_padding_ = 0xf7;
          pFVar4->RaidPartyUID = this->RaidPartyUID;
          pFVar4->bUsePartyMemberUID = true;
          pFVar4->PartyMemberUID = *(long64 *)(lVar1 + 0x28);
          pFVar4->CharID = local_310._impl_.char_id_;
          pFVar4->CharLevel = local_310._impl_.char_level_;
          local_2e8.Object = (FDS_ViewModelContext *)local_338.Object;
          local_2e8.SharedReferenceCount.ReferenceController =
               local_338.SharedReferenceCount.ReferenceController;
          pFVar4->CharAscend = local_310._impl_.char_ascend_;
          if (local_338.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_01,&local_2e8);
          local_358[0] = this_01;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FDS_EntryBindingEventField::Add
                    (&this->MemberSlotEntryBindingEventField,
                     (TObjectPtr<UDS_UserObjectListItem>)local_358);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
          ds_proto::RaidCharInfo::~RaidCharInfo(&local_310);
        }
      }
      local_348 = FFieldNotificationClassDescriptor::MemberSlotEntryBindingEventField.FieldName;
      local_340 = FFieldNotificationClassDescriptor::MemberSlotEntryBindingEventField.BitNumber;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_348);
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_Dungeon_RaidPartyFinder_Tooltip_MemberList::UpdateMemberList",
                   0x43,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x27,L"raid_party_uid is not valid")
        ;
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    ds_proto::RaidPartyInfo::~RaidPartyInfo(&local_2d8);
  }
  return;
}

