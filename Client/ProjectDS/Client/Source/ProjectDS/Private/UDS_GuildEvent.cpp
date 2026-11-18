// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4a42f0

UClass * __cdecl UDS_GuildEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildEvent",
               &Z_Registration_Info_UClass_UDS_GuildEvent.InnerSingleton,
               StaticRegisterNativesUDS_GuildEvent,0x148,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_GuildEvent>,InternalVTableHelperCtorCaller<UDS_GuildEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildEvent.InnerSingleton;
}

// UDS_GuildEvent @ 14b4a73a0

UDS_GuildEvent * __thiscall
UDS_GuildEvent::UDS_GuildEvent(UDS_GuildEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_GuildEvent__6B_;
  *(undefined8 *)&(this->SelectedGuildMarkSlotDelegate).Delegate = 0;
  *(undefined8 *)&(this->SelectedGuildMarkSlotDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedGuildMarkSlotDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->SelectedGuildMarkColorSlotDelegate).Delegate = 0;
  *(undefined8 *)&(this->SelectedGuildMarkColorSlotDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedGuildMarkColorSlotDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->GuildListUpdateDelegate).Delegate = 0;
  *(undefined8 *)&(this->GuildListUpdateDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->GuildListUpdateDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->PendingListUpdateDelegate).Delegate = 0;
  *(undefined8 *)&(this->PendingListUpdateDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->PendingListUpdateDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->PendingListRemoveDelegate).Delegate = 0;
  *(undefined8 *)&(this->PendingListRemoveDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->PendingListRemoveDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->GuildMemberListRemoveDelegate).Delegate = 0;
  *(undefined8 *)&(this->GuildMemberListRemoveDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->GuildMemberListRemoveDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->GuildMarkUpdateCompleteDelegate).Delegate = 0;
  *(undefined8 *)&(this->GuildMarkUpdateCompleteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->GuildMarkUpdateCompleteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->GuildSettingUpdateCompleteDelegate).Delegate = 0;
  *(undefined8 *)&(this->GuildSettingUpdateCompleteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->GuildSettingUpdateCompleteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CheckGuildNameDuplicationDelegate).Delegate = 0;
  *(undefined8 *)&(this->CheckGuildNameDuplicationDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->CheckGuildNameDuplicationDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->SelectedGuildMarkSlotDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->SelectedGuildMarkColorSlotDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->GuildListUpdateDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->PendingListUpdateDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->PendingListRemoveDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->GuildMemberListRemoveDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->GuildMarkUpdateCompleteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->GuildSettingUpdateCompleteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->CheckGuildNameDuplicationDelegate).Delegate.field_0x18 = 2;
  return this;
}

// UDS_GuildEvent @ 14b4a74d0

UDS_GuildEvent * __thiscall
UDS_GuildEvent::UDS_GuildEvent(UDS_GuildEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_GuildEvent__6B_;
  *(undefined8 *)&(this->SelectedGuildMarkSlotDelegate).Delegate = 0;
  *(undefined8 *)&(this->SelectedGuildMarkSlotDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedGuildMarkSlotDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->SelectedGuildMarkColorSlotDelegate).Delegate = 0;
  *(undefined8 *)&(this->SelectedGuildMarkColorSlotDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedGuildMarkColorSlotDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->GuildListUpdateDelegate).Delegate = 0;
  *(undefined8 *)&(this->GuildListUpdateDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->GuildListUpdateDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->PendingListUpdateDelegate).Delegate = 0;
  *(undefined8 *)&(this->PendingListUpdateDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->PendingListUpdateDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->PendingListRemoveDelegate).Delegate = 0;
  *(undefined8 *)&(this->PendingListRemoveDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->PendingListRemoveDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->GuildMemberListRemoveDelegate).Delegate = 0;
  *(undefined8 *)&(this->GuildMemberListRemoveDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->GuildMemberListRemoveDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->GuildMarkUpdateCompleteDelegate).Delegate = 0;
  *(undefined8 *)&(this->GuildMarkUpdateCompleteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->GuildMarkUpdateCompleteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->GuildSettingUpdateCompleteDelegate).Delegate = 0;
  *(undefined8 *)&(this->GuildSettingUpdateCompleteDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->GuildSettingUpdateCompleteDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CheckGuildNameDuplicationDelegate).Delegate = 0;
  *(undefined8 *)&(this->CheckGuildNameDuplicationDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->CheckGuildNameDuplicationDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->SelectedGuildMarkSlotDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->SelectedGuildMarkColorSlotDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->GuildListUpdateDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->PendingListUpdateDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->PendingListRemoveDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->GuildMemberListRemoveDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->GuildMarkUpdateCompleteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->GuildSettingUpdateCompleteDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->CheckGuildNameDuplicationDelegate).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_GuildEvent @ 14b4a79f0

void __thiscall UDS_GuildEvent::~UDS_GuildEvent(UDS_GuildEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_GuildEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CheckGuildNameDuplicationDelegate).Delegate.field_0x8,
             *(int *)&(this->CheckGuildNameDuplicationDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->CheckGuildNameDuplicationDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CheckGuildNameDuplicationDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GuildSettingUpdateCompleteDelegate).Delegate.field_0x8,
             *(int *)&(this->GuildSettingUpdateCompleteDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->GuildSettingUpdateCompleteDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GuildSettingUpdateCompleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GuildMarkUpdateCompleteDelegate).Delegate.field_0x8,
             *(int *)&(this->GuildMarkUpdateCompleteDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->GuildMarkUpdateCompleteDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GuildMarkUpdateCompleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GuildMemberListRemoveDelegate).Delegate.field_0x8,
             *(int *)&(this->GuildMemberListRemoveDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->GuildMemberListRemoveDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GuildMemberListRemoveDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PendingListRemoveDelegate).Delegate.field_0x8,
             *(int *)&(this->PendingListRemoveDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->PendingListRemoveDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PendingListRemoveDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PendingListUpdateDelegate).Delegate.field_0x8,
             *(int *)&(this->PendingListUpdateDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->PendingListUpdateDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PendingListUpdateDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GuildListUpdateDelegate).Delegate.field_0x8,
             *(int *)&(this->GuildListUpdateDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->GuildListUpdateDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GuildListUpdateDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SelectedGuildMarkColorSlotDelegate).Delegate.field_0x8,
             *(int *)&(this->SelectedGuildMarkColorSlotDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->SelectedGuildMarkColorSlotDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SelectedGuildMarkColorSlotDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SelectedGuildMarkSlotDelegate).Delegate.field_0x8,
             *(int *)&(this->SelectedGuildMarkSlotDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->SelectedGuildMarkSlotDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SelectedGuildMarkSlotDelegate);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a9070

UClass * __cdecl UDS_GuildEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildEvent",
               &Z_Registration_Info_UClass_UDS_GuildEvent.InnerSingleton,
               StaticRegisterNativesUDS_GuildEvent,0x148,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_GuildEvent>,InternalVTableHelperCtorCaller<UDS_GuildEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_GuildEvent @ 14b4a95f0

void __cdecl UDS_GuildEvent::StaticRegisterNativesUDS_GuildEvent(void)

{
  return;
}

// __VTableCtorCaller @ 14b4aa9f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_GuildEvent::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UDS_EventBase::UDS_EventBase((UDS_EventBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDS_GuildEvent__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 2;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 2;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 2;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 2;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 2;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 2;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 2;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// GetEvent @ 14bb0a820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_GuildEvent * __cdecl UDS_GuildEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_GuildEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_GuildEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_GuildEvent *)0x0;
}

