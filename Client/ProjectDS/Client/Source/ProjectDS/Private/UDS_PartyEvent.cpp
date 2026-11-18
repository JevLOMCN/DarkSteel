// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b558340

UClass * __cdecl UDS_PartyEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PartyEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PartyEvent",
               &Z_Registration_Info_UClass_UDS_PartyEvent.InnerSingleton,
               StaticRegisterNativesUDS_PartyEvent,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PartyEvent>,InternalVTableHelperCtorCaller<UDS_PartyEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PartyEvent.InnerSingleton;
}

// UDS_PartyEvent @ 14b55a320

UDS_PartyEvent * __thiscall
UDS_PartyEvent::UDS_PartyEvent(UDS_PartyEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PartyEvent__6B_;
  *(undefined8 *)&(this->OnJoinedParty).Delegate = 0;
  *(undefined8 *)&(this->OnJoinedParty).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnJoinedParty).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnLeftParty).Delegate = 0;
  *(undefined8 *)&(this->OnLeftParty).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnLeftParty).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnJoinedPartyMember).Delegate = 0;
  *(undefined8 *)&(this->OnJoinedPartyMember).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnJoinedPartyMember).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnLeftPartyMember).Delegate = 0;
  *(undefined8 *)&(this->OnLeftPartyMember).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnLeftPartyMember).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnPartyMemberInfoChanged).Delegate = 0;
  *(undefined8 *)&(this->OnPartyMemberInfoChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnPartyMemberInfoChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnPartyLeaderChanged).Delegate = 0;
  *(undefined8 *)&(this->OnPartyLeaderChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnPartyLeaderChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnPartyMemberSync).Delegate = 0;
  *(undefined8 *)&(this->OnPartyMemberSync).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnPartyMemberSync).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnPartyInvitePlayer).Delegate = 0;
  *(undefined8 *)&(this->OnPartyInvitePlayer).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnPartyInvitePlayer).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnJoinedParty).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnLeftParty).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnJoinedPartyMember).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnLeftPartyMember).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnPartyMemberInfoChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnPartyLeaderChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnPartyMemberSync).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnPartyInvitePlayer).Delegate.field_0x18 = 2;
  return this;
}

// UDS_PartyEvent @ 14b55a430

UDS_PartyEvent * __thiscall
UDS_PartyEvent::UDS_PartyEvent(UDS_PartyEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PartyEvent__6B_;
  *(undefined8 *)&(this->OnJoinedParty).Delegate = 0;
  *(undefined8 *)&(this->OnJoinedParty).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnJoinedParty).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnLeftParty).Delegate = 0;
  *(undefined8 *)&(this->OnLeftParty).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnLeftParty).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnJoinedPartyMember).Delegate = 0;
  *(undefined8 *)&(this->OnJoinedPartyMember).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnJoinedPartyMember).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnLeftPartyMember).Delegate = 0;
  *(undefined8 *)&(this->OnLeftPartyMember).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnLeftPartyMember).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnPartyMemberInfoChanged).Delegate = 0;
  *(undefined8 *)&(this->OnPartyMemberInfoChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnPartyMemberInfoChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnPartyLeaderChanged).Delegate = 0;
  *(undefined8 *)&(this->OnPartyLeaderChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnPartyLeaderChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnPartyMemberSync).Delegate = 0;
  *(undefined8 *)&(this->OnPartyMemberSync).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnPartyMemberSync).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnPartyInvitePlayer).Delegate = 0;
  *(undefined8 *)&(this->OnPartyInvitePlayer).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnPartyInvitePlayer).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnJoinedParty).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnLeftParty).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnJoinedPartyMember).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnLeftPartyMember).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnPartyMemberInfoChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnPartyLeaderChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnPartyMemberSync).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnPartyInvitePlayer).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_PartyEvent @ 14b55b5e0

void __thiscall UDS_PartyEvent::~UDS_PartyEvent(UDS_PartyEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_PartyEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPartyInvitePlayer).Delegate.field_0x8,
             *(int *)&(this->OnPartyInvitePlayer).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnPartyInvitePlayer).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPartyInvitePlayer);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPartyMemberSync).Delegate.field_0x8,
             *(int *)&(this->OnPartyMemberSync).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnPartyMemberSync).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPartyMemberSync);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPartyLeaderChanged).Delegate.field_0x8,
             *(int *)&(this->OnPartyLeaderChanged).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnPartyLeaderChanged).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPartyLeaderChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPartyMemberInfoChanged).Delegate.field_0x8,
             *(int *)&(this->OnPartyMemberInfoChanged).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnPartyMemberInfoChanged).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPartyMemberInfoChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLeftPartyMember).Delegate.field_0x8,
             *(int *)&(this->OnLeftPartyMember).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnLeftPartyMember).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLeftPartyMember);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnJoinedPartyMember).Delegate.field_0x8,
             *(int *)&(this->OnJoinedPartyMember).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnJoinedPartyMember).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnJoinedPartyMember);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLeftParty).Delegate.field_0x8,
             *(int *)&(this->OnLeftParty).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnLeftParty).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLeftParty);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnJoinedParty).Delegate.field_0x8,
             *(int *)&(this->OnJoinedParty).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnJoinedParty).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnJoinedParty);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b55cee0

UClass * __cdecl UDS_PartyEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PartyEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PartyEvent",
               &Z_Registration_Info_UClass_UDS_PartyEvent.InnerSingleton,
               StaticRegisterNativesUDS_PartyEvent,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PartyEvent>,InternalVTableHelperCtorCaller<UDS_PartyEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PartyEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_PartyEvent @ 14b55d360

void __cdecl UDS_PartyEvent::StaticRegisterNativesUDS_PartyEvent(void)

{
  return;
}

// GetEvent @ 14b8c4f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_PartyEvent * __cdecl UDS_PartyEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_PartyEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_PartyEvent>(this);
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
  return (UDS_PartyEvent *)0x0;
}

