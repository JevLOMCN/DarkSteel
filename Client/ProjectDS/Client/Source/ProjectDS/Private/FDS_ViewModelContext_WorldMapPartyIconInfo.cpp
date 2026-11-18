// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b5f2700

UScriptStruct * __cdecl FDS_ViewModelContext_WorldMapPartyIconInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapPartyIconInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapPartyIconInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_WorldMapPartyIconInfo,
                         (UObject *)pUVar1,L"DS_ViewModelContext_WorldMapPartyIconInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapPartyIconInfo.OuterSingleton
  ;
}

// FDS_ViewModelContext_WorldMapPartyIconInfo @ 14b5f73c0

FDS_ViewModelContext_WorldMapPartyIconInfo * __thiscall
FDS_ViewModelContext_WorldMapPartyIconInfo::FDS_ViewModelContext_WorldMapPartyIconInfo
          (FDS_ViewModelContext_WorldMapPartyIconInfo *this)

{
  FDS_ViewModelContext_WorldMapIconInfo::FDS_ViewModelContext_WorldMapIconInfo
            ((FDS_ViewModelContext_WorldMapIconInfo *)this);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapPartyIconInfo__6B_;
  this->CurIslandID = 0;
  this->CurIndoorGroupID = 0;
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
  (this->RaidPartyMemberInfo).MemberState = None;
  (this->RaidPartyMemberInfo).RaidPartyMemberSyncData.IsDead = false;
  (this->RaidPartyMemberInfo).SlotIndex = 0;
  (this->RaidPartyMemberInfo).PlayerUID = 0;
  (this->RaidPartyMemberInfo).NickName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RaidPartyMemberInfo).NickName.Data.ArrayNum = 0;
  (this->RaidPartyMemberInfo).NickName.Data.ArrayMax = 0;
  (this->RaidPartyMemberInfo).CharInfo.CharId = 0;
  (this->RaidPartyMemberInfo).CharInfo.CharLevel = 0;
  (this->RaidPartyMemberInfo).CharInfo.CharAscend = 0;
  (this->RaidPartyMemberInfo).RaidPartyMemberSyncData.PlayerEntityId = 0;
  (this->RaidPartyMemberInfo).RaidPartyMemberSyncData.PlayerUID = 0;
  (this->RaidPartyMemberInfo).RaidPartyMemberSyncData.CharId = 0;
  (this->RaidPartyMemberInfo).RaidPartyMemberSyncData.CharEntityId = 0;
  (this->RaidPartyMemberInfo).RaidPartyMemberSyncData.ZoneID = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusMaxMap = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusMaxMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusMaxMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusMaxMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusMaxMap.field_0x2c = 0x80
  ;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusMaxMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusMaxMap.field_0x34 = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusMaxMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusMaxMap.field_0x48 = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusCurMap = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusCurMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusCurMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusCurMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusCurMap.field_0x2c = 0x80
  ;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusCurMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusCurMap.field_0x34 = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusCurMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.StatusCurMap.field_0x48 = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.BuffMap = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.BuffMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.BuffMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.BuffMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.BuffMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.BuffMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.BuffMap.field_0x34 = 0;
  *(undefined8 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.BuffMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberInfo).RaidPartyMemberSyncData.BuffMap.field_0x48 = 0;
  this->IsRaid = false;
  return this;
}

// ~FDS_ViewModelContext_WorldMapPartyIconInfo @ 14b5f7bc0

void __thiscall
FDS_ViewModelContext_WorldMapPartyIconInfo::~FDS_ViewModelContext_WorldMapPartyIconInfo
          (FDS_ViewModelContext_WorldMapPartyIconInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
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
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

