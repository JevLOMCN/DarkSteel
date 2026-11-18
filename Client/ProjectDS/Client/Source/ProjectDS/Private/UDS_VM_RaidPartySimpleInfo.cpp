// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// SetRaidPartyUID_WrapperImpl @ 14b6d2520

void __cdecl UDS_VM_RaidPartySimpleInfo::SetRaidPartyUID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::RaidPartyUID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::RaidPartyUID.FieldName;
  if (*(longlong *)((longlong)param_1 + 0xa0) != *(longlong *)param_2) {
    *(longlong *)((longlong)param_1 + 0xa0) = *(longlong *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetDungeonID_WrapperImpl @ 14b6d2530

void __cdecl UDS_VM_RaidPartySimpleInfo::SetDungeonID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::DungeonID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::DungeonID.FieldName;
  if (*(int *)((longlong)param_1 + 0xa8) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xa8) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetRaidPartyName_WrapperImpl @ 14b6d2540

void __cdecl UDS_VM_RaidPartySimpleInfo::SetRaidPartyName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RaidPartyName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RaidPartyName.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xb0),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xb0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xb0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xb8) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetLeaderUID_WrapperImpl @ 14b6d2550

void __cdecl UDS_VM_RaidPartySimpleInfo::SetLeaderUID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::LeaderUID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::LeaderUID.FieldName;
  if (*(longlong *)((longlong)param_1 + 0xc0) != *(longlong *)param_2) {
    *(longlong *)((longlong)param_1 + 0xc0) = *(longlong *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetLeaderNickName_WrapperImpl @ 14b6d2560

void __cdecl UDS_VM_RaidPartySimpleInfo::SetLeaderNickName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::LeaderNickName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::LeaderNickName.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 200),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 200);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 200) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xd0) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetbIsPublic_WrapperImpl @ 14b6d2570

void __cdecl UDS_VM_RaidPartySimpleInfo::SetbIsPublic_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsPublic.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsPublic.FieldName;
  if (*(char *)((longlong)param_1 + 0xd8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xd8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetbIsPassword_WrapperImpl @ 14b6d2580

void __cdecl UDS_VM_RaidPartySimpleInfo::SetbIsPassword_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsPassword.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsPassword.FieldName;
  if (*(char *)((longlong)param_1 + 0xd9) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xd9) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMemberCount_WrapperImpl @ 14b6d2590

void __cdecl UDS_VM_RaidPartySimpleInfo::SetMemberCount_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MemberCount.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MemberCount.FieldName;
  if (*(int *)((longlong)param_1 + 0xdc) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xdc) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6d25a0

UClass * __cdecl UDS_VM_RaidPartySimpleInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartySimpleInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartySimpleInfo",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartySimpleInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartySimpleInfo,0xe0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_RaidPartySimpleInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartySimpleInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartySimpleInfo.InnerSingleton;
}

// UDS_VM_RaidPartySimpleInfo @ 14b6d7b40

UDS_VM_RaidPartySimpleInfo * __thiscall
UDS_VM_RaidPartySimpleInfo::UDS_VM_RaidPartySimpleInfo
          (UDS_VM_RaidPartySimpleInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->RaidPartyUID = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartySimpleInfo__6B_;
  this->DungeonID = 0;
  FText::FText(&this->RaidPartyName);
  this->LeaderUID = 0;
  FText::FText(&this->LeaderNickName);
  this->bIsPublic = false;
  this->bIsPassword = false;
  this->MemberCount = 0;
  return this;
}

// UDS_VM_RaidPartySimpleInfo @ 14b6d7bd0

UDS_VM_RaidPartySimpleInfo * __thiscall
UDS_VM_RaidPartySimpleInfo::UDS_VM_RaidPartySimpleInfo
          (UDS_VM_RaidPartySimpleInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->RaidPartyUID = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartySimpleInfo__6B_;
  this->DungeonID = 0;
  FText::FText(&this->RaidPartyName);
  this->LeaderUID = 0;
  FText::FText(&this->LeaderNickName);
  this->bIsPublic = false;
  this->bIsPassword = false;
  this->MemberCount = 0;
  return this;
}

// ~UDS_VM_RaidPartySimpleInfo @ 14b6d9f70

void __thiscall
UDS_VM_RaidPartySimpleInfo::~UDS_VM_RaidPartySimpleInfo(UDS_VM_RaidPartySimpleInfo *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartySimpleInfo__6B_;
  pIVar1 = (this->LeaderNickName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->RaidPartyName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dcb40

IClassDescriptor * __thiscall
UDS_VM_RaidPartySimpleInfo::GetFieldNotificationDescriptor(UDS_VM_RaidPartySimpleInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RaidPartySimpleInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd500

UClass * __cdecl UDS_VM_RaidPartySimpleInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartySimpleInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartySimpleInfo",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartySimpleInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartySimpleInfo,0xe0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_RaidPartySimpleInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartySimpleInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartySimpleInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RaidPartySimpleInfo @ 14b6dded0

void __cdecl UDS_VM_RaidPartySimpleInfo::StaticRegisterNativesUDS_VM_RaidPartySimpleInfo(void)

{
  return;
}

// OnSetViewModel @ 14be3dd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidPartySimpleInfo::OnSetViewModel
          (UDS_VM_RaidPartySimpleInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_DungeonManager *this_00;
  undefined1 auStackY_438 [32];
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_408;
  TSharedPtr<FDS_ViewModelContext,1> local_3f8;
  FDS_RaidPartySimpleInfo local_3e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_438;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  local_3f8.Object = param_1->Object;
  local_3f8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_3f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_RaidPartyInfo>(&local_408,&local_3f8);
  if (local_408.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_VM_RaidPartySimpleInfo::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_398.Ptr,0x13,L"raidPartyInfoContext.IsValid() == false");
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_408.SharedReferenceCount.ReferenceController);
    goto LAB_14be3dfed;
  }
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 == (UDS_DungeonManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_278._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_RaidPartySimpleInfo::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_278.Ptr,0x1a,L"dungeonManager is nullptr");
      local_3e8.PartyName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_278._padding_;
      goto LAB_14be3dfd1;
    }
  }
  else {
    if ((local_408.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UDS_DungeonManager::GetRaidPartySimpleInfo(this_00,&local_3e8,(local_408.Object)->RaidPartyUID);
    if (local_3e8.RaidPartyUID == 0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_RaidPartySimpleInfo::OnSetViewModel",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_158.Ptr,0x23,L"raidPartySimpleInfo is invalid.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      SetRaidPartySimpleInfo(this,&local_3e8);
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    }
    if (local_3e8.LeaderNickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.LeaderNickName.Data.AllocatorInstance.Data);
    }
LAB_14be3dfd1:
    if ((UDS_DungeonManager *)local_3e8.PartyName.Data.AllocatorInstance.Data !=
        (UDS_DungeonManager *)0x0) {
      FMemory::Free(local_3e8.PartyName.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_408.SharedReferenceCount.ReferenceController);
LAB_14be3dfed:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDungeonID @ 14be4adb0

void __thiscall
UDS_VM_RaidPartySimpleInfo::SetDungeonID(UDS_VM_RaidPartySimpleInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DungeonID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DungeonID.FieldName;
  if (this->DungeonID != *param_1) {
    this->DungeonID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsPassword @ 14be4c2c0

void __thiscall
UDS_VM_RaidPartySimpleInfo::SetIsPassword(UDS_VM_RaidPartySimpleInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsPassword.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsPassword.FieldName;
  if (this->bIsPassword != *param_1) {
    this->bIsPassword = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsPublic @ 14be4c4c0

void __thiscall
UDS_VM_RaidPartySimpleInfo::SetIsPublic(UDS_VM_RaidPartySimpleInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsPublic.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsPublic.FieldName;
  if (this->bIsPublic != *param_1) {
    this->bIsPublic = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetLeaderNickName @ 14be4d480

void __thiscall
UDS_VM_RaidPartySimpleInfo::SetLeaderNickName(UDS_VM_RaidPartySimpleInfo *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::LeaderNickName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::LeaderNickName.FieldName;
  bVar5 = FText::IdenticalTo(&this->LeaderNickName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->LeaderNickName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->LeaderNickName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->LeaderNickName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetLeaderUID @ 14be4d590

void __thiscall
UDS_VM_RaidPartySimpleInfo::SetLeaderUID(UDS_VM_RaidPartySimpleInfo *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::LeaderUID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LeaderUID.FieldName;
  if (this->LeaderUID != *param_1) {
    this->LeaderUID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMemberCount @ 14be4de20

void __thiscall
UDS_VM_RaidPartySimpleInfo::SetMemberCount(UDS_VM_RaidPartySimpleInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MemberCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MemberCount.FieldName;
  if (this->MemberCount != *param_1) {
    this->MemberCount = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetRaidPartyName @ 14be4f960

void __thiscall
UDS_VM_RaidPartySimpleInfo::SetRaidPartyName(UDS_VM_RaidPartySimpleInfo *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RaidPartyName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RaidPartyName.FieldName;
  bVar5 = FText::IdenticalTo(&this->RaidPartyName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->RaidPartyName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->RaidPartyName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->RaidPartyName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetRaidPartySimpleInfo @ 14be4fae0

void __thiscall
UDS_VM_RaidPartySimpleInfo::SetRaidPartySimpleInfo
          (UDS_VM_RaidPartySimpleInfo *this,FDS_RaidPartySimpleInfo *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  FName local_58;
  int local_50;
  FText local_48;
  
  iVar4 = FFieldNotificationClassDescriptor::RaidPartyUID.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RaidPartyUID.FieldName;
  if (this->RaidPartyUID != param_1->RaidPartyUID) {
    this->RaidPartyUID = param_1->RaidPartyUID;
    local_50 = iVar4;
    local_58 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  iVar4 = FFieldNotificationClassDescriptor::DungeonID.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::DungeonID.FieldName;
  if (this->DungeonID != param_1->DungeonId) {
    this->DungeonID = param_1->DungeonId;
    local_50 = iVar4;
    local_58 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  pFVar6 = FText::FromString(&local_48,&param_1->PartyName);
  iVar4 = FFieldNotificationClassDescriptor::RaidPartyName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RaidPartyName.FieldName;
  bVar5 = FText::IdenticalTo(&this->RaidPartyName,pFVar6,None);
  if (!bVar5) {
    pIVar1 = (pFVar6->TextData).Reference;
    pIVar2 = (this->RaidPartyName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->RaidPartyName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->RaidPartyName).Flags = pFVar6->Flags;
    local_58 = FVar3;
    local_50 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  iVar4 = FFieldNotificationClassDescriptor::LeaderUID.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::LeaderUID.FieldName;
  if (this->LeaderUID != param_1->LeaderUID) {
    this->LeaderUID = param_1->LeaderUID;
    local_50 = iVar4;
    local_58 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  pFVar6 = FText::FromString(&local_48,&param_1->LeaderNickName);
  iVar4 = FFieldNotificationClassDescriptor::LeaderNickName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::LeaderNickName.FieldName;
  bVar5 = FText::IdenticalTo(&this->LeaderNickName,pFVar6,None);
  if (!bVar5) {
    pIVar1 = (pFVar6->TextData).Reference;
    pIVar2 = (this->LeaderNickName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->LeaderNickName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->LeaderNickName).Flags = pFVar6->Flags;
    local_58 = FVar3;
    local_50 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  local_50 = FFieldNotificationClassDescriptor::bIsPublic.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::bIsPublic.FieldName;
  if (this->bIsPublic != param_1->IsPublic) {
    this->bIsPublic = param_1->IsPublic;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  local_50 = FFieldNotificationClassDescriptor::bIsPassword.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::bIsPassword.FieldName;
  if (this->bIsPassword != param_1->IsPassword) {
    this->bIsPassword = param_1->IsPassword;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  local_50 = FFieldNotificationClassDescriptor::MemberCount.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::MemberCount.FieldName;
  if (this->MemberCount != param_1->MemberCount) {
    this->MemberCount = param_1->MemberCount;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  return;
}

// SetRaidPartyUID @ 14be4fe20

void __thiscall
UDS_VM_RaidPartySimpleInfo::SetRaidPartyUID(UDS_VM_RaidPartySimpleInfo *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::RaidPartyUID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RaidPartyUID.FieldName;
  if (this->RaidPartyUID != *param_1) {
    this->RaidPartyUID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

