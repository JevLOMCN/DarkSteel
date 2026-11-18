// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// StaticClass @ 14b70a560

UClass * __cdecl UDS_VM_WorldMap_PartyIcon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_PartyIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_PartyIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_PartyIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_PartyIcon,0x650,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_WorldMap_PartyIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_PartyIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_PartyIcon.InnerSingleton;
}

// UDS_VM_WorldMap_PartyIcon @ 14b712380

UDS_VM_WorldMap_PartyIcon * __thiscall
UDS_VM_WorldMap_PartyIcon::UDS_VM_WorldMap_PartyIcon
          (UDS_VM_WorldMap_PartyIcon *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->SameAreaVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->CurLookIsland = 0;
  this->CurLookIndoorGroupID = 0;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_PartyIcon__6B_;
  (this->PartyMemberInfo).PlayerUID = 0;
  (this->PartyMemberInfo).EntityID = 0;
  (this->PartyMemberInfo).SlotIndex = 0;
  (this->PartyMemberInfo).Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyMemberInfo).Nickname.Data.ArrayNum = 0;
  (this->PartyMemberInfo).Nickname.Data.ArrayMax = 0;
  (this->PartyMemberInfo).Level = 0;
  (this->PartyMemberInfo).CharID = 0;
  (this->PartyMemberInfo).ZoneID = 0;
  (this->PartyMemberInfo).Online = false;
  (this->PartyMemberInfo).Dead = false;
  (this->PartyMemberInfo).Position.field0_0x0._s_0.X = 0.0;
  (this->PartyMemberInfo).Position.field0_0x0._s_0.Y = 0.0;
  (this->PartyMemberInfo).Position.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->PartyMemberInfo).Stats = 0;
  *(undefined8 *)&(this->PartyMemberInfo).Stats.field_0x8 = 0;
  *(undefined8 *)&(this->PartyMemberInfo).Stats.field_0x20 = 0;
  *(undefined4 *)&(this->PartyMemberInfo).Stats.field_0x28 = 0;
  *(undefined4 *)&(this->PartyMemberInfo).Stats.field_0x2c = 0x80;
  *(undefined4 *)&(this->PartyMemberInfo).Stats.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PartyMemberInfo).Stats.field_0x34 = 0;
  *(undefined8 *)&(this->PartyMemberInfo).Stats.field_0x40 = 0;
  *(undefined4 *)&(this->PartyMemberInfo).Stats.field_0x48 = 0;
  (this->PartyMemberInfo).GameServerIndex = 0;
  FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo(&this->RaidPartyMemberInfo);
  local_res8 = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)&local_res8);
  this->IsRaid = false;
  return this;
}

// UDS_VM_WorldMap_PartyIcon @ 14b7124a0

UDS_VM_WorldMap_PartyIcon * __thiscall
UDS_VM_WorldMap_PartyIcon::UDS_VM_WorldMap_PartyIcon
          (UDS_VM_WorldMap_PartyIcon *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->SameAreaVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->CurLookIsland = 0;
  this->CurLookIndoorGroupID = 0;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_PartyIcon__6B_;
  (this->PartyMemberInfo).PlayerUID = 0;
  (this->PartyMemberInfo).EntityID = 0;
  (this->PartyMemberInfo).SlotIndex = 0;
  (this->PartyMemberInfo).Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyMemberInfo).Nickname.Data.ArrayNum = 0;
  (this->PartyMemberInfo).Nickname.Data.ArrayMax = 0;
  (this->PartyMemberInfo).Level = 0;
  (this->PartyMemberInfo).CharID = 0;
  (this->PartyMemberInfo).ZoneID = 0;
  (this->PartyMemberInfo).Online = false;
  (this->PartyMemberInfo).Dead = false;
  (this->PartyMemberInfo).Position.field0_0x0._s_0.X = 0.0;
  (this->PartyMemberInfo).Position.field0_0x0._s_0.Y = 0.0;
  (this->PartyMemberInfo).Position.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->PartyMemberInfo).Stats = 0;
  *(undefined8 *)&(this->PartyMemberInfo).Stats.field_0x8 = 0;
  *(undefined8 *)&(this->PartyMemberInfo).Stats.field_0x20 = 0;
  *(undefined4 *)&(this->PartyMemberInfo).Stats.field_0x28 = 0;
  *(undefined4 *)&(this->PartyMemberInfo).Stats.field_0x2c = 0x80;
  *(undefined4 *)&(this->PartyMemberInfo).Stats.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PartyMemberInfo).Stats.field_0x34 = 0;
  *(undefined8 *)&(this->PartyMemberInfo).Stats.field_0x40 = 0;
  *(undefined4 *)&(this->PartyMemberInfo).Stats.field_0x48 = 0;
  (this->PartyMemberInfo).GameServerIndex = 0;
  FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo(&this->RaidPartyMemberInfo);
  local_res8 = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)&local_res8);
  this->IsRaid = false;
  return this;
}

// ~UDS_VM_WorldMap_PartyIcon @ 14b7139f0

void __thiscall
UDS_VM_WorldMap_PartyIcon::~UDS_VM_WorldMap_PartyIcon(UDS_VM_WorldMap_PartyIcon *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_PartyIcon__6B_;
  FDS_RaidPartyMemberSyncData::~FDS_RaidPartyMemberSyncData
            (&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData);
  pFVar1 = (this->RaidPartyMemberInfo).NickName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PartyMemberInfo).Stats.field_0x48 = 0;
  pvVar2 = *(void **)&(this->PartyMemberInfo).Stats.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PartyMemberInfo).Stats);
  pFVar1 = (this->PartyMemberInfo).Nickname.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UDS_VM_WorldMap_Icon::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_VM_WorldMap_Icon::_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_Icon__6B_;
  UDS_VM_WorldMapIndexBase::~UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716ec0

IClassDescriptor * __thiscall
UDS_VM_WorldMap_PartyIcon::GetFieldNotificationDescriptor(UDS_VM_WorldMap_PartyIcon *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_PartyIcon::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b718250

UClass * __cdecl UDS_VM_WorldMap_PartyIcon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_PartyIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_PartyIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_PartyIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_PartyIcon,0x650,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_WorldMap_PartyIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_PartyIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_PartyIcon.InnerSingleton;
}

// GetTickableTickType @ 14b718800

ETickableTickType __thiscall
UDS_VM_WorldMap_PartyIcon::GetTickableTickType(UDS_VM_WorldMap_PartyIcon *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_PartyIcon @ 14b718af0

void __cdecl UDS_VM_WorldMap_PartyIcon::StaticRegisterNativesUDS_VM_WorldMap_PartyIcon(void)

{
  return;
}

// BindModel @ 14c06cb90

void __thiscall UDS_VM_WorldMap_PartyIcon::BindModel(UDS_VM_WorldMap_PartyIcon *this)

{
  UDS_PartyEvent *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  UDS_DungeonEvent *pUVar3;
  UDS_HudManager *pUVar4;
  
  UDS_VM_WorldMap_Icon::BindModel((UDS_VM_WorldMap_Icon *)this);
  pUVar1 = UDS_PartyEvent::GetEvent();
  if (pUVar1 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PartyIcon>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLeftParty,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_a3d6f343 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftPartyMember,this
              );
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PartyIcon>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLeftPartyMember,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_0bc01dd6 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyLeaderChanged,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PartyIcon>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyLeaderChanged,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_0bc01dd6 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyMemberSync,this
              );
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PartyIcon>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyMemberSync,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_0bc01dd6 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyMemberInfoChanged,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PartyIcon>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyMemberInfoChanged,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_0bc01dd6 *)this);
  }
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnCloseInitDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PartyIcon>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnCloseInitDelegate,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_a3d6f343 *)this);
  }
  pUVar3 = UDS_DungeonEvent::GetEvent();
  if (pUVar3 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLeftRaidParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PartyIcon>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnLeftRaidParty,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_a3d6f343 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLeftRaidPartyMember,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PartyIcon>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnLeftRaidPartyMember,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_0bc01dd6 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnRaidPartyLeaderChanged,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PartyIcon>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnRaidPartyLeaderChanged,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_0bc01dd6 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangedRaidPartyMemberSync,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PartyIcon>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangedRaidPartyMemberSync,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_0bc01dd6 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnRaidPartyMemberInfoChanged,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PartyIcon>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnRaidPartyMemberInfoChanged,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_0bc01dd6 *)this);
  }
  pUVar4 = UDS_HudManager::GetInst();
  if (pUVar4 != (UDS_HudManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_PartyIcon>
              (&pUVar4->OnHudShowDelegate,(UDS_VM_WorldMap_PartyIcon *)&stack0x00000010,
               (pmf_7cf51ce5 *)this);
  }
  return;
}

// ChangePartyMemeberPos @ 14c06e1d0

void __thiscall
UDS_VM_WorldMap_PartyIcon::ChangePartyMemeberPos
          (UDS_VM_WorldMap_PartyIcon *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  if ((dVar1 != (double)this->_padding_) || (dVar2 != (double)this->_padding_)) {
    this->_padding_ = (longlong)dVar1;
    this->_padding_ = (longlong)dVar2;
    local_18._s_0.X = (double)this->_padding_;
    local_18._s_0.Y = (double)this->_padding_;
    local_28._s_0.X = (double)this->_padding_;
    local_28._s_0.Y = (double)this->_padding_;
    UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
              ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
               (TVector2<double> *)&local_18._s_0,(TVector2<double> *)&local_28._s_0);
  }
  return;
}

// InitViewModel @ 14c08c960

void __thiscall UDS_VM_WorldMap_PartyIcon::InitViewModel(UDS_VM_WorldMap_PartyIcon *this)

{
  return;
}

// IsUpdate @ 14c090330

bool __thiscall UDS_VM_WorldMap_PartyIcon::IsUpdate(UDS_VM_WorldMap_PartyIcon *this)

{
  if ((char)this->_padding_ == '\0') {
    return (bool)(char)this->_padding_;
  }
  return false;
}

// OnCloseInit @ 14c093090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_PartyIcon::OnCloseInit(UDS_VM_WorldMap_PartyIcon *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_GameInstance *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_VM_WorldMap_Icon::OnCloseInit((UDS_VM_WorldMap_Icon *)this);
  local_140 = UDS_GameInstance::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    this->_padding_ = 0;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap_PartyIcon::OnCloseInit",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x82,L"gameinstance is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnHudShowEvent @ 14c0958c0

void __thiscall
UDS_VM_WorldMap_PartyIcon::OnHudShowEvent
          (UDS_VM_WorldMap_PartyIcon *this,EDS_WindowLayerGroupType *param_1)

{
  *(bool *)&this->_padding_ = *param_1 < Hud;
  return;
}

// OnPartyLeaderChange @ 14c098320

void __thiscall
UDS_VM_WorldMap_PartyIcon::OnPartyLeaderChange(UDS_VM_WorldMap_PartyIcon *this,long64 param_1)

{
  EDS_MapIndexType EVar1;
  FDS_MapIndexBaseTableRow *pFVar2;
  FDS_ViewModelConext_WorldMapIconToolTip *pFVar3;
  long64 lVar4;
  FName local_18;
  int local_10;
  
  if (param_1 == (this->PartyMemberInfo).PlayerUID) {
    lVar4 = 3;
  }
  else {
    lVar4 = (longlong)(this->PartyMemberInfo).SlotIndex + 4;
  }
  pFVar2 = FDS_MapIndexBaseTableRow::Get(lVar4,true);
  if (pFVar2 != (FDS_MapIndexBaseTableRow *)0x0) {
    if (this->_padding_ != 0) {
      EVar1 = pFVar2->ID;
      pFVar3 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->
                         ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)&this->_padding_)
      ;
      pFVar3->MapIndexBaseID = (uint)EVar1;
    }
    local_18 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.FieldName;
    if ((int)this->_padding_ != pFVar2->MapIndexIcon) {
      local_10 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.BitNumber;
      *(int *)&this->_padding_ = pFVar2->MapIndexIcon;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnPartyLeave @ 14c0983d0

void __thiscall UDS_VM_WorldMap_PartyIcon::OnPartyLeave(UDS_VM_WorldMap_PartyIcon *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals(&this->Widget,(void *)0x0);
  if (!bVar1) {
    (**(code **)(this->_padding_ + 0x2b0))(this);
    pUVar2 = FWeakObjectPtr::Get(&(this->Widget).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2);
  }
  return;
}

// OnPartyLeft @ 14c098430

void __thiscall
UDS_VM_WorldMap_PartyIcon::OnPartyLeft(UDS_VM_WorldMap_PartyIcon *this,long64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  if ((param_1 == (this->PartyMemberInfo).PlayerUID) &&
     (bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals(&this->Widget,(void *)0x0),
     !bVar1)) {
    (**(code **)(this->_padding_ + 0x2b0))(this);
    pUVar2 = FWeakObjectPtr::Get(&(this->Widget).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2);
  }
  return;
}

// OnPartyMemberChanged @ 14c0984a0

void __thiscall
UDS_VM_WorldMap_PartyIcon::OnPartyMemberChanged(UDS_VM_WorldMap_PartyIcon *this,long64 param_1)

{
  bool bVar1;
  FDS_PartyRepo *pFVar2;
  FDS_PartyMemberInfo *this_00;
  ESlateVisibility EVar3;
  
  pFVar2 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  this_00 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar2->PartyInfo,param_1);
  bVar1 = FDS_PartyMemberInfo::IsValid(this_00);
  if (bVar1) {
    EVar3 = Collapsed;
    if (this_00->Online != false) {
      EVar3 = SelfHitTestInvisible;
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar3);
  }
  return;
}

// OnPartyMemberSync @ 14c098570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_PartyIcon::OnPartyMemberSync(UDS_VM_WorldMap_PartyIcon *this,long64 param_1)

{
  bool bVar1;
  FDS_PartyRepo *pFVar2;
  FDS_PartyMemberInfo *this_00;
  FDS_ZoneBaseTableRow *pFVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TVector<double>_u_0 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1 == (this->PartyMemberInfo).PlayerUID) {
    pFVar2 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    this_00 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar2->PartyInfo,param_1);
    bVar1 = FDS_PartyMemberInfo::IsValid(this_00);
    if ((bVar1) && (this_00->ZoneID != 0)) {
      pFVar3 = FDS_ZoneBaseTableRow::Get((longlong)this_00->ZoneID,true);
      if (pFVar3 == (FDS_ZoneBaseTableRow *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_WorldMap_PartyIcon::OnPartyMemberSync",0x2c,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_138.Ptr,0x1d2,L"FDS_ZoneBaseTableRow nullptr");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        local_158._s_0.X = (this_00->Position).field0_0x0._s_0.X;
        local_158._s_0.Y = (this_00->Position).field0_0x0._s_0.Y;
        local_158._s_0.Z = (this_00->Position).field0_0x0._s_0.Z;
        UpdateMemeberSyncVisibility(this,pFVar3,(TVector<double> *)&local_158._s_0);
      }
    }
  }
  return;
}

// OnRaidPartyLeaderChange @ 14c098b70

void __thiscall
UDS_VM_WorldMap_PartyIcon::OnRaidPartyLeaderChange(UDS_VM_WorldMap_PartyIcon *this,long64 param_1)

{
  EDS_MapIndexType EVar1;
  FDS_MapIndexBaseTableRow *pFVar2;
  FDS_ViewModelConext_WorldMapIconToolTip *pFVar3;
  long64 lVar4;
  FName local_18;
  int local_10;
  
  if (param_1 == (this->RaidPartyMemberInfo).PlayerUID) {
    lVar4 = 0x30;
  }
  else {
    lVar4 = (long64)(int)((this->RaidPartyMemberInfo).SlotIndex + 0x30);
  }
  pFVar2 = FDS_MapIndexBaseTableRow::Get(lVar4,true);
  if (pFVar2 != (FDS_MapIndexBaseTableRow *)0x0) {
    if (this->_padding_ != 0) {
      EVar1 = pFVar2->ID;
      pFVar3 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->
                         ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)&this->_padding_)
      ;
      pFVar3->MapIndexBaseID = (uint)EVar1;
    }
    local_18 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.FieldName;
    if ((int)this->_padding_ != pFVar2->MapIndexIcon) {
      local_10 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.BitNumber;
      *(int *)&this->_padding_ = pFVar2->MapIndexIcon;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnRaidPartyLeave @ 14c098c20

void __thiscall UDS_VM_WorldMap_PartyIcon::OnRaidPartyLeave(UDS_VM_WorldMap_PartyIcon *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals(&this->Widget,(void *)0x0);
  if (!bVar1) {
    (**(code **)(this->_padding_ + 0x2b0))(this);
    pUVar2 = FWeakObjectPtr::Get(&(this->Widget).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2);
  }
  return;
}

// OnRaidPartyLeft @ 14c098c80

void __thiscall
UDS_VM_WorldMap_PartyIcon::OnRaidPartyLeft(UDS_VM_WorldMap_PartyIcon *this,long64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  if ((param_1 == (this->RaidPartyMemberInfo).PlayerUID) &&
     (bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals(&this->Widget,(void *)0x0),
     !bVar1)) {
    (**(code **)(this->_padding_ + 0x2b0))(this);
    pUVar2 = FWeakObjectPtr::Get(&(this->Widget).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2);
  }
  return;
}

// OnRaidPartyMemberChanged @ 14c098cf0

void __thiscall
UDS_VM_WorldMap_PartyIcon::OnRaidPartyMemberChanged(UDS_VM_WorldMap_PartyIcon *this,long64 param_1)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  ESlateVisibility EVar2;
  
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar1 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(this_00,param_1);
  EVar2 = Collapsed;
  if (pFVar1->MemberState == DungeonInPlay) {
    EVar2 = SelfHitTestInvisible;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar2);
  return;
}

// OnRaidPartyMemberSync @ 14c098da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_PartyIcon::OnRaidPartyMemberSync(UDS_VM_WorldMap_PartyIcon *this,long64 param_1)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  FDS_ZoneBaseTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  TVector<double>_u_0 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1 == (this->RaidPartyMemberInfo).PlayerUID) {
    this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar1 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(this_00,param_1);
    if (pFVar1->MemberState == DungeonInPlay) {
      pFVar2 = FDS_ZoneBaseTableRow::Get((ulonglong)(pFVar1->RaidPartyMemberSyncData).ZoneID,true);
      if (pFVar2 == (FDS_ZoneBaseTableRow *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_WorldMap_PartyIcon::OnRaidPartyMemberSync",0x30,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x134,L"FDS_ZoneBaseTableRow nullptr");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        local_158._s_0.X = (pFVar1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.X;
        local_158._s_0.Y = (pFVar1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Y;
        local_158._s_0.Z = (pFVar1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Z;
        UpdateMemeberSyncVisibility(this,pFVar2,(TVector<double> *)&local_158._s_0);
      }
    }
    else {
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    }
  }
  return;
}

// OnSetViewModel @ 14c09a610

void __thiscall
UDS_VM_WorldMap_PartyIcon::OnSetViewModel
          (UDS_VM_WorldMap_PartyIcon *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  longlong lVar7;
  bool bVar8;
  ESlateVisibility EVar9;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *pTVar10;
  UObject *pUVar11;
  undefined8 *puVar12;
  int iVar13;
  FString *pFVar14;
  double dVar15;
  undefined4 uVar16;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [16];
  FName local_c8;
  int local_c0;
  TSharedPtr<FDS_ViewModelContext_WorldMapPartyIconInfo,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TVector2<double>_u_0 local_88;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> local_78;
  TVector2<double>_u_0 local_68 [3];
  
  local_a8.Object = param_1->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_WorldMap_Icon::OnSetViewModel((UDS_VM_WorldMap_Icon *)this,&local_a8);
  local_98.Object = param_1->Object;
  local_98.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldMapPartyIconInfo>(&local_b8,&local_98);
  if (local_b8.Object != (FDS_ViewModelContext_WorldMapPartyIconInfo *)0x0) {
    this->_padding_ = (local_b8.Object)->_padding_;
    lVar7 = (local_b8.Object)->_padding_;
    this->_padding_ = (local_b8.Object)->_padding_;
    this->_padding_ = lVar7;
    *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&(local_b8.Object)->_padding_ + 4);
    lVar7 = (local_b8.Object)->_padding_;
    this->_padding_ = (local_b8.Object)->_padding_;
    this->_padding_ = lVar7;
    lVar7 = (local_b8.Object)->_padding_;
    this->_padding_ = (local_b8.Object)->_padding_;
    this->_padding_ = lVar7;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)&(local_b8.Object)->_padding_);
    FDS_PartyMemberInfo::operator=(&this->PartyMemberInfo,&(local_b8.Object)->PartyMemberInfo);
    FDS_RaidPartyMemberInfo::operator=
              (&this->RaidPartyMemberInfo,&(local_b8.Object)->RaidPartyMemberInfo);
    *(int *)&this->_padding_ = (int)(local_b8.Object)->_padding_;
    (this->Widget).WeakPtr = (FWeakObjectPtr)(local_b8.Object)->_padding_;
    this->IsRaid = (local_b8.Object)->IsRaid;
    this->CurLookIsland = (local_b8.Object)->CurIslandID;
    this->CurLookIndoorGroupID = (local_b8.Object)->CurIndoorGroupID;
    pTVar10 = MakeContext<FDS_ViewModelConext_WorldMapIconToolTip>(&local_78);
    plVar1 = &this->_padding_;
    if ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)plVar1 != pTVar10) {
      *plVar1 = (longlong)pTVar10->Object;
      pTVar10->Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&pTVar10->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if (*plVar1 != 0) {
      *(undefined4 *)(*plVar1 + 0x18) = 0x1b1;
      lVar7 = this->_padding_;
      if (*plVar1 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(int *)(*plVar1 + 0x20) = (int)lVar7;
      pFVar14 = &(this->RaidPartyMemberInfo).NickName;
      if (this->IsRaid != true) {
        pFVar14 = &(this->PartyMemberInfo).Nickname;
      }
      if (*plVar1 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar2 = (pFVar14->Data).ArrayNum;
      iVar13 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar13 = 0;
      }
      ::FString::AssignRange
                ((FString *)(*plVar1 + 0x30),(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,
                 iVar13);
    }
    if ((char)this->_padding_ == '\0') {
      *(undefined1 *)&this->_padding_ = 1;
    }
    ADS_MainCharacter::GetMainPlayer();
    bVar8 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res10,(void *)0x0)
    ;
    if (!bVar8) {
      pUVar11 = FWeakObjectPtr::Get(&local_res10);
      puVar12 = (undefined8 *)
                (**(code **)(*(longlong *)&pUVar11[0x29].field_0x10 + 0x78))
                          (&pUVar11[0x29].field_0x10,local_res18);
      *(undefined8 *)((longlong)&this->_padding_ + 4) = *puVar12;
    }
    dVar15 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    dVar6 = ((double)this->_padding_ - (double)this->_padding_) * dVar15 *
            (double)*(float *)&this->_padding_;
    dVar15 = ((double)this->_padding_ - (double)this->_padding_) * dVar15 *
             (double)*(float *)&this->_padding_;
    uVar16 = (undefined4)((ulonglong)dVar15 >> 0x20);
    auVar4._8_4_ = SUB84(dVar15,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = uVar16;
    this->_padding_ = (longlong)dVar6;
    this->_padding_ = auVar4._8_8_;
    auVar5._8_4_ = SUB84(dVar15,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = uVar16;
    this->_padding_ = (longlong)dVar6;
    this->_padding_ = auVar5._8_8_;
    UDS_VM_WorldMapIndexBase::SetIsZoomStepActivate((UDS_VM_WorldMapIndexBase *)this,LEVEL3);
    UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
    local_68[0] = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_88._0_8_ = dVar6;
    local_88._s_0.Y = dVar15;
    UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
              ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
               (TVector2<double> *)&local_68[0]._s_0,(TVector2<double> *)&local_88._s_0);
    EVar9 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this);
    if (EVar9 != Collapsed) {
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    }
    local_c0 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_c8 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c09c8a0

void __thiscall UDS_VM_WorldMap_PartyIcon::OnUpdate(UDS_VM_WorldMap_PartyIcon *this,float param_1)

{
  bool bVar1;
  UDS_MovementCore *this_00;
  double dVar2;
  TVector2<double>_u_0 local_48;
  TVector2<double>_u_0 local_38;
  TVector<double>_u_0 local_28;
  
  UDS_VM_WorldMap_Icon::OnUpdate((UDS_VM_WorldMap_Icon *)this,param_1);
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                     ((longlong)&this->_padding_ + 4),(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_MovementCore *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_28._s_0);
    dVar2 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    this->_padding_ = (longlong)local_28._s_0.X;
    this->_padding_ = (longlong)local_28._s_0.Y;
    local_48._s_0.X =
         (local_28._s_0.X - (double)this->_padding_) * dVar2 * (double)*(float *)&this->_padding_;
    local_38 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_48._s_0.Y =
         (local_28._s_0.Y - (double)this->_padding_) * dVar2 * (double)*(float *)&this->_padding_;
    UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
              ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
               (TVector2<double> *)&local_38._s_0,(TVector2<double> *)&local_48._s_0);
  }
  return;
}

// UnbindModel @ 14c0ade20

void __thiscall UDS_VM_WorldMap_PartyIcon::UnbindModel(UDS_VM_WorldMap_PartyIcon *this)

{
  UDS_PartyEvent *pUVar1;
  UDS_HudManager *pUVar2;
  UDS_WorldMapEvent *pUVar3;
  
  UDS_VM_WorldMap_Icon::UnbindModel((UDS_VM_WorldMap_Icon *)this);
  pUVar1 = UDS_PartyEvent::GetEvent();
  if (pUVar1 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftPartyMember,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyLeaderChanged,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyMemberSync,this
              );
  }
  pUVar2 = UDS_HudManager::GetInst();
  if (pUVar2 != (UDS_HudManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnHudShowDelegate,this
              );
  }
  pUVar3 = UDS_WorldMapEvent::GetEvent();
  if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnCloseInitDelegate,
               this);
  }
  return;
}

// UpdateMemeberSyncVisibility @ 14c0af8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_PartyIcon::UpdateMemeberSyncVisibility
          (UDS_VM_WorldMap_PartyIcon *this,FDS_ZoneBaseTableRow *param_1,TVector<double> *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  ESlateVisibility EVar4;
  int iVar5;
  UDS_WorldMapManager *this_00;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_1a8 [32];
  TVector2<double>_u_0 local_178;
  TVector2<double>_u_0 local_168;
  double local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = UDS_WorldMapManager::GetInst();
  if (this_00 == (UDS_WorldMapManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_WorldMap_PartyIcon::UpdateMemeberSyncVisibility",0x36,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x194,L"worldMapMgr is nullptr");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  iVar1 = this->CurLookIsland;
  if (iVar1 == 0) {
    if (param_1->ID_MapIndoorGroup != this->CurLookIndoorGroupID) {
LAB_14c0afacc:
      EVar4 = Collapsed;
      goto LAB_14c0aface;
    }
    dVar2 = (param_2->field0_0x0)._s_0.X;
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    local_158 = (param_2->field0_0x0)._s_0.Z;
    if ((dVar2 != (double)this->_padding_) || (dVar3 != (double)this->_padding_)) {
      local_168._s_0.X = (double)this->_padding_;
      local_168._s_0.Y = (double)this->_padding_;
      this->_padding_ = (longlong)dVar2;
      this->_padding_ = (longlong)dVar3;
      local_178._s_0.X = (double)this->_padding_;
      local_178._s_0.Y = (double)this->_padding_;
      UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
                ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
                 (TVector2<double> *)&local_168._s_0,(TVector2<double> *)&local_178._s_0);
    }
    UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
    EVar4 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this);
  }
  else {
    iVar5 = UDS_WorldMapManager::GetIslandIDByZoneID(this_00,(int)param_1->_padding_);
    if (iVar5 != iVar1) goto LAB_14c0afacc;
    dVar2 = (param_2->field0_0x0)._s_0.X;
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    local_158 = (param_2->field0_0x0)._s_0.Z;
    if ((dVar2 != (double)this->_padding_) || (dVar3 != (double)this->_padding_)) {
      local_178._s_0.X = (double)this->_padding_;
      local_178._s_0.Y = (double)this->_padding_;
      this->_padding_ = (longlong)dVar2;
      this->_padding_ = (longlong)dVar3;
      local_168._s_0.X = (double)this->_padding_;
      local_168._s_0.Y = (double)this->_padding_;
      UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
                ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
                 (TVector2<double> *)&local_178._s_0,(TVector2<double> *)&local_168._s_0);
    }
    UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
    EVar4 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this);
  }
  if (EVar4 == Collapsed) {
    return;
  }
  EVar4 = SelfHitTestInvisible;
LAB_14c0aface:
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar4);
  return;
}

