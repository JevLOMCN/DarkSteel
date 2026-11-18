// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b489500

UClass * __cdecl UDS_DungeonEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonEvent",
               &Z_Registration_Info_UClass_UDS_DungeonEvent.InnerSingleton,
               StaticRegisterNativesUDS_DungeonEvent,0x248,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DungeonEvent>,
               InternalVTableHelperCtorCaller<UDS_DungeonEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonEvent.InnerSingleton;
}

// UDS_DungeonEvent @ 14b48a980

UDS_DungeonEvent * __thiscall
UDS_DungeonEvent::UDS_DungeonEvent(UDS_DungeonEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DungeonEvent__6B_;
  *(undefined8 *)&(this->OnDungeonInOut).Delegate = 0;
  *(undefined8 *)&(this->OnDungeonInOut).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnDungeonInOut).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedDungeonID).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedDungeonID).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedDungeonID).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedDungeonLevel).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedDungeonLevel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedDungeonLevel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyInfo).Delegate = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyInfo).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyInfo).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnJoinedRaidParty).Delegate = 0;
  *(undefined8 *)&(this->OnJoinedRaidParty).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnJoinedRaidParty).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnLeftRaidParty).Delegate = 0;
  *(undefined8 *)&(this->OnLeftRaidParty).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnLeftRaidParty).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnJoinedRaidPartyMember).Delegate = 0;
  *(undefined8 *)&(this->OnJoinedRaidPartyMember).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnJoinedRaidPartyMember).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnLeftRaidPartyMember).Delegate = 0;
  *(undefined8 *)&(this->OnLeftRaidPartyMember).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnLeftRaidPartyMember).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRaidPartyMemberInfoChanged).Delegate = 0;
  *(undefined8 *)&(this->OnRaidPartyMemberInfoChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRaidPartyMemberInfoChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRaidPartyLeaderChanged).Delegate = 0;
  *(undefined8 *)&(this->OnRaidPartyLeaderChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRaidPartyLeaderChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedMyRaidPartyState).Delegate = 0;
  *(undefined8 *)&(this->OnChangedMyRaidPartyState).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMyRaidPartyState).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyVoteData).Delegate = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyVoteData).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyVoteData).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyNotify).Delegate = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyNotify).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyNotify).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyMemberSync).Delegate = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyMemberSync).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyMemberSync).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedDungeonList).Delegate = 0;
  *(undefined8 *)&(this->OnChangedDungeonList).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedDungeonList).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedFinderDungeon).Delegate = 0;
  *(undefined8 *)&(this->OnClickedFinderDungeon).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedFinderDungeon).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedFinderLevel).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedFinderLevel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedFinderLevel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnDungeonInOut).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedDungeonID).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedDungeonLevel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedRaidPartyInfo).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnJoinedRaidParty).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnLeftRaidParty).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnJoinedRaidPartyMember).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnLeftRaidPartyMember).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRaidPartyMemberInfoChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRaidPartyLeaderChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedMyRaidPartyState).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedRaidPartyVoteData).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedRaidPartyNotify).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedRaidPartyMemberSync).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedDungeonList).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickedFinderDungeon).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedFinderLevel).Delegate.field_0x18 = 2;
  return this;
}

// UDS_DungeonEvent @ 14b48abb0

UDS_DungeonEvent * __thiscall
UDS_DungeonEvent::UDS_DungeonEvent(UDS_DungeonEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DungeonEvent__6B_;
  *(undefined8 *)&(this->OnDungeonInOut).Delegate = 0;
  *(undefined8 *)&(this->OnDungeonInOut).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnDungeonInOut).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedDungeonID).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedDungeonID).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedDungeonID).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedDungeonLevel).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedDungeonLevel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedDungeonLevel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyInfo).Delegate = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyInfo).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyInfo).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnJoinedRaidParty).Delegate = 0;
  *(undefined8 *)&(this->OnJoinedRaidParty).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnJoinedRaidParty).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnLeftRaidParty).Delegate = 0;
  *(undefined8 *)&(this->OnLeftRaidParty).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnLeftRaidParty).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnJoinedRaidPartyMember).Delegate = 0;
  *(undefined8 *)&(this->OnJoinedRaidPartyMember).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnJoinedRaidPartyMember).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnLeftRaidPartyMember).Delegate = 0;
  *(undefined8 *)&(this->OnLeftRaidPartyMember).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnLeftRaidPartyMember).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRaidPartyMemberInfoChanged).Delegate = 0;
  *(undefined8 *)&(this->OnRaidPartyMemberInfoChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRaidPartyMemberInfoChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRaidPartyLeaderChanged).Delegate = 0;
  *(undefined8 *)&(this->OnRaidPartyLeaderChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRaidPartyLeaderChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedMyRaidPartyState).Delegate = 0;
  *(undefined8 *)&(this->OnChangedMyRaidPartyState).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMyRaidPartyState).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyVoteData).Delegate = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyVoteData).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyVoteData).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyNotify).Delegate = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyNotify).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyNotify).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyMemberSync).Delegate = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyMemberSync).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedRaidPartyMemberSync).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedDungeonList).Delegate = 0;
  *(undefined8 *)&(this->OnChangedDungeonList).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedDungeonList).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedFinderDungeon).Delegate = 0;
  *(undefined8 *)&(this->OnClickedFinderDungeon).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedFinderDungeon).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedFinderLevel).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedFinderLevel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedFinderLevel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnDungeonInOut).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedDungeonID).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedDungeonLevel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedRaidPartyInfo).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnJoinedRaidParty).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnLeftRaidParty).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnJoinedRaidPartyMember).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnLeftRaidPartyMember).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRaidPartyMemberInfoChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRaidPartyLeaderChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedMyRaidPartyState).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedRaidPartyVoteData).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedRaidPartyNotify).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedRaidPartyMemberSync).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedDungeonList).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickedFinderDungeon).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedFinderLevel).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_DungeonEvent @ 14b48b840

void __thiscall UDS_DungeonEvent::~UDS_DungeonEvent(UDS_DungeonEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_DungeonEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedFinderLevel).Delegate.field_0x8,
             *(int *)&(this->OnSelectedFinderLevel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedFinderLevel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedFinderLevel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClickedFinderDungeon).Delegate.field_0x8,
             *(int *)&(this->OnClickedFinderDungeon).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClickedFinderDungeon).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickedFinderDungeon);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedDungeonList).Delegate.field_0x8,
             *(int *)&(this->OnChangedDungeonList).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedDungeonList).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedDungeonList);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedRaidPartyMemberSync).Delegate.field_0x8,
             *(int *)&(this->OnChangedRaidPartyMemberSync).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedRaidPartyMemberSync).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedRaidPartyMemberSync);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedRaidPartyNotify).Delegate.field_0x8,
             *(int *)&(this->OnChangedRaidPartyNotify).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedRaidPartyNotify).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedRaidPartyNotify);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedRaidPartyVoteData).Delegate.field_0x8,
             *(int *)&(this->OnChangedRaidPartyVoteData).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedRaidPartyVoteData).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedRaidPartyVoteData);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedMyRaidPartyState).Delegate.field_0x8,
             *(int *)&(this->OnChangedMyRaidPartyState).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedMyRaidPartyState).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedMyRaidPartyState);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRaidPartyLeaderChanged).Delegate.field_0x8,
             *(int *)&(this->OnRaidPartyLeaderChanged).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRaidPartyLeaderChanged).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRaidPartyLeaderChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRaidPartyMemberInfoChanged).Delegate.field_0x8,
             *(int *)&(this->OnRaidPartyMemberInfoChanged).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRaidPartyMemberInfoChanged).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRaidPartyMemberInfoChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLeftRaidPartyMember).Delegate.field_0x8,
             *(int *)&(this->OnLeftRaidPartyMember).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnLeftRaidPartyMember).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLeftRaidPartyMember);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnJoinedRaidPartyMember).Delegate.field_0x8,
             *(int *)&(this->OnJoinedRaidPartyMember).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnJoinedRaidPartyMember).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnJoinedRaidPartyMember);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLeftRaidParty).Delegate.field_0x8,
             *(int *)&(this->OnLeftRaidParty).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnLeftRaidParty).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLeftRaidParty);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnJoinedRaidParty).Delegate.field_0x8,
             *(int *)&(this->OnJoinedRaidParty).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnJoinedRaidParty).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnJoinedRaidParty);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedRaidPartyInfo).Delegate.field_0x8,
             *(int *)&(this->OnChangedRaidPartyInfo).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedRaidPartyInfo).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedRaidPartyInfo);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedDungeonLevel).Delegate.field_0x8,
             *(int *)&(this->OnSelectedDungeonLevel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedDungeonLevel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedDungeonLevel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedDungeonID).Delegate.field_0x8,
             *(int *)&(this->OnSelectedDungeonID).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedDungeonID).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedDungeonID);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDungeonInOut).Delegate.field_0x8,
             *(int *)&(this->OnDungeonInOut).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnDungeonInOut).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDungeonInOut);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b48cea0

UClass * __cdecl UDS_DungeonEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonEvent",
               &Z_Registration_Info_UClass_UDS_DungeonEvent.InnerSingleton,
               StaticRegisterNativesUDS_DungeonEvent,0x248,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DungeonEvent>,
               InternalVTableHelperCtorCaller<UDS_DungeonEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_DungeonEvent @ 14b48d7a0

void __cdecl UDS_DungeonEvent::StaticRegisterNativesUDS_DungeonEvent(void)

{
  return;
}

// GetEvent @ 14b8c4df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_DungeonEvent * __cdecl UDS_DungeonEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_DungeonEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_DungeonEvent>(this);
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
  return (UDS_DungeonEvent *)0x0;
}

