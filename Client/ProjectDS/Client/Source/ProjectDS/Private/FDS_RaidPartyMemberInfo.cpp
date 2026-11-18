// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// FDS_RaidPartyMemberInfo @ 14b710060

FDS_RaidPartyMemberInfo * __thiscall
FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo(FDS_RaidPartyMemberInfo *this)

{
  this->SlotIndex = 0;
  this->PlayerUID = 0;
  (this->NickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NickName).Data.ArrayNum = 0;
  (this->NickName).Data.ArrayMax = 0;
  (this->CharInfo).CharId = 0;
  (this->CharInfo).CharLevel = 0;
  (this->CharInfo).CharAscend = 0;
  this->MemberState = None;
  (this->RaidPartyMemberSyncData).PlayerEntityId = 0;
  (this->RaidPartyMemberSyncData).PlayerUID = 0;
  (this->RaidPartyMemberSyncData).CharId = 0;
  (this->RaidPartyMemberSyncData).CharEntityId = 0;
  (this->RaidPartyMemberSyncData).IsDead = false;
  (this->RaidPartyMemberSyncData).ZoneID = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusMaxMap = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x34 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x48 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusCurMap = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x34 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x48 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).BuffMap = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x34 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x48 = 0;
  return this;
}

// FDS_RaidPartyMemberInfo @ 14b8b1c20

FDS_RaidPartyMemberInfo * __thiscall
FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo
          (FDS_RaidPartyMemberInfo *this,FDS_RaidPartyMemberInfo *param_1)

{
  TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
  *pTVar1;
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
  *pTVar2;
  long64 lVar3;
  double dVar4;
  int iVar5;
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *pTVar6;
  
  this->SlotIndex = param_1->SlotIndex;
  lVar3 = param_1->PlayerUID;
  (this->NickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PlayerUID = lVar3;
  (this->NickName).Data.AllocatorInstance.Data = (param_1->NickName).Data.AllocatorInstance.Data;
  (param_1->NickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NickName).Data.ArrayNum = (param_1->NickName).Data.ArrayNum;
  (this->NickName).Data.ArrayMax = (param_1->NickName).Data.ArrayMax;
  (param_1->NickName).Data.ArrayNum = 0;
  (param_1->NickName).Data.ArrayMax = 0;
  iVar5 = (param_1->CharInfo).CharLevel;
  (this->CharInfo).CharId = (param_1->CharInfo).CharId;
  (this->CharInfo).CharLevel = iVar5;
  (this->CharInfo).CharAscend = (param_1->CharInfo).CharAscend;
  this->MemberState = param_1->MemberState;
  (this->RaidPartyMemberSyncData).PlayerEntityId = (param_1->RaidPartyMemberSyncData).PlayerEntityId
  ;
  (this->RaidPartyMemberSyncData).PlayerUID = (param_1->RaidPartyMemberSyncData).PlayerUID;
  (this->RaidPartyMemberSyncData).CharId = (param_1->RaidPartyMemberSyncData).CharId;
  dVar4 = (param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Y;
  (this->RaidPartyMemberSyncData).Position.field0_0x0._s_0.X =
       (param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.X;
  (this->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Y = dVar4;
  (this->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Z =
       (param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Z;
  (this->RaidPartyMemberSyncData).CharEntityId = (param_1->RaidPartyMemberSyncData).CharEntityId;
  (this->RaidPartyMemberSyncData).IsDead = (param_1->RaidPartyMemberSyncData).IsDead;
  (this->RaidPartyMemberSyncData).ZoneID = (param_1->RaidPartyMemberSyncData).ZoneID;
  pTVar6 = &(this->RaidPartyMemberSyncData).StatusMaxMap;
  *(undefined8 *)&pTVar6->field_0x0 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x34 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x48 = 0;
  TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>,FDefaultSetAllocator>
              *)pTVar6,
             (TSet<TTuple<EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>,FDefaultSetAllocator>
              *)&(param_1->RaidPartyMemberSyncData).StatusMaxMap);
  pTVar1 = &(this->RaidPartyMemberSyncData).StatusCurMap;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x34 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x48 = 0;
  TSet<TTuple<enum_EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<enum_EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>,FDefaultSetAllocator>
              *)pTVar1,
             (TSet<TTuple<EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>,FDefaultSetAllocator>
              *)&(param_1->RaidPartyMemberSyncData).StatusCurMap);
  pTVar2 = &(this->RaidPartyMemberSyncData).BuffMap;
  *(undefined8 *)&pTVar2->field_0x0 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x34 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x48 = 0;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
              *)pTVar2,
             (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
              *)&(param_1->RaidPartyMemberSyncData).BuffMap);
  return this;
}

// FDS_RaidPartyMemberInfo @ 14b8b1d80

FDS_RaidPartyMemberInfo * __thiscall
FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo
          (FDS_RaidPartyMemberInfo *this,RaidPartyMemberInfo *param_1)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  RaidCharInfo *pRVar5;
  char *pcVar6;
  RaidCharInfo *pRVar7;
  FString local_18;
  
  pFVar1 = &this->NickName;
  this->SlotIndex = 0;
  this->PlayerUID = 0;
  (this->CharInfo).CharId = 0;
  (this->CharInfo).CharLevel = 0;
  (this->CharInfo).CharAscend = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NickName).Data.ArrayNum = 0;
  (this->NickName).Data.ArrayMax = 0;
  this->MemberState = None;
  FDS_RaidPartyMemberSyncData::FDS_RaidPartyMemberSyncData(&this->RaidPartyMemberSyncData);
  this->SlotIndex = (param_1->_impl_).slot_index_;
  this->PlayerUID = (param_1->_impl_).player_uid_;
  pcVar6 = (char *)((ulonglong)(param_1->_impl_).nick_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
    pcVar6 = *(char **)pcVar6;
  }
  ::FString::FString(&local_18,pcVar6);
  if (pFVar1 != &local_18) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->NickName).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->NickName).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->MemberState = (EDS_RaidMemberState)(param_1->_impl_).member_state_;
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pRVar5 = (param_1->_impl_).char_info_;
    pRVar7 = &ds_proto::_RaidCharInfo_default_instance_._instance;
    if (pRVar5 != (RaidCharInfo *)0x0) {
      pRVar7 = pRVar5;
    }
    iVar2 = (pRVar7->_impl_).char_level_;
    iVar3 = (pRVar7->_impl_).char_ascend_;
    (this->CharInfo).CharId = (pRVar7->_impl_).char_id_;
    (this->CharInfo).CharLevel = iVar2;
    (this->CharInfo).CharAscend = iVar3;
  }
  return this;
}

// GetPartyGroupID @ 14b8c7ff0

int __thiscall FDS_RaidPartyMemberInfo::GetPartyGroupID(FDS_RaidPartyMemberInfo *this)

{
  return (this->SlotIndex >> 2) + 1;
}

// IsValidCharInfo @ 14b8d0b30

bool __thiscall FDS_RaidPartyMemberInfo::IsValidCharInfo(FDS_RaidPartyMemberInfo *this)

{
  return 0 < (this->CharInfo).CharId;
}

// ~FDS_RaidPartyMemberInfo @ 14be0f090

void __thiscall FDS_RaidPartyMemberInfo::~FDS_RaidPartyMemberInfo(FDS_RaidPartyMemberInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->RaidPartyMemberSyncData).BuffMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RaidPartyMemberSyncData).BuffMap);
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RaidPartyMemberSyncData).StatusCurMap);
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RaidPartyMemberSyncData).StatusMaxMap);
  pFVar2 = (this->NickName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// FDS_RaidPartyMemberInfo @ 14be72d10

FDS_RaidPartyMemberInfo * __thiscall
FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo
          (FDS_RaidPartyMemberInfo *this,FDS_RaidPartyMemberInfo *param_1)

{
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *this_00;
  TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
  *this_01;
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
  *this_02;
  double dVar1;
  int iVar2;
  
  this->SlotIndex = param_1->SlotIndex;
  this->PlayerUID = param_1->PlayerUID;
  ::FString::FString(&this->NickName,&param_1->NickName);
  iVar2 = (param_1->CharInfo).CharLevel;
  this_00 = &(this->RaidPartyMemberSyncData).StatusMaxMap;
  (this->CharInfo).CharId = (param_1->CharInfo).CharId;
  (this->CharInfo).CharLevel = iVar2;
  (this->CharInfo).CharAscend = (param_1->CharInfo).CharAscend;
  this->MemberState = param_1->MemberState;
  (this->RaidPartyMemberSyncData).PlayerEntityId = (param_1->RaidPartyMemberSyncData).PlayerEntityId
  ;
  (this->RaidPartyMemberSyncData).PlayerUID = (param_1->RaidPartyMemberSyncData).PlayerUID;
  (this->RaidPartyMemberSyncData).CharId = (param_1->RaidPartyMemberSyncData).CharId;
  dVar1 = (param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Y;
  (this->RaidPartyMemberSyncData).Position.field0_0x0._s_0.X =
       (param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.X;
  (this->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Y = dVar1;
  (this->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Z =
       (param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Z;
  (this->RaidPartyMemberSyncData).CharEntityId = (param_1->RaidPartyMemberSyncData).CharEntityId;
  (this->RaidPartyMemberSyncData).IsDead = (param_1->RaidPartyMemberSyncData).IsDead;
  (this->RaidPartyMemberSyncData).ZoneID = (param_1->RaidPartyMemberSyncData).ZoneID;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x34 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusMaxMap.field_0x48 = 0;
  TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
  ::operator=(this_00,(TSet<TTuple<EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>,FDefaultSetAllocator>
                       *)&(param_1->RaidPartyMemberSyncData).StatusMaxMap);
  this_01 = &(this->RaidPartyMemberSyncData).StatusCurMap;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x34 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).StatusCurMap.field_0x48 = 0;
  TSet<TTuple<enum_EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>,FDefaultSetAllocator>
  ::operator=(this_01,(TSet<TTuple<EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>,FDefaultSetAllocator>
                       *)&(param_1->RaidPartyMemberSyncData).StatusCurMap);
  this_02 = &(this->RaidPartyMemberSyncData).BuffMap;
  *(undefined8 *)&this_02->field_0x0 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x34 = 0;
  *(undefined8 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyMemberSyncData).BuffMap.field_0x48 = 0;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
               *)this_02,
              (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
               *)&(param_1->RaidPartyMemberSyncData).BuffMap);
  return this;
}

// operator= @ 14c068960

FDS_RaidPartyMemberInfo * __thiscall
FDS_RaidPartyMemberInfo::operator=(FDS_RaidPartyMemberInfo *this,FDS_RaidPartyMemberInfo *param_1)

{
  double dVar1;
  int iVar2;
  
  this->SlotIndex = param_1->SlotIndex;
  this->PlayerUID = param_1->PlayerUID;
  ::FString::operator=(&this->NickName,&param_1->NickName);
  iVar2 = (param_1->CharInfo).CharLevel;
  (this->CharInfo).CharId = (param_1->CharInfo).CharId;
  (this->CharInfo).CharLevel = iVar2;
  (this->CharInfo).CharAscend = (param_1->CharInfo).CharAscend;
  this->MemberState = param_1->MemberState;
  (this->RaidPartyMemberSyncData).PlayerEntityId = (param_1->RaidPartyMemberSyncData).PlayerEntityId
  ;
  (this->RaidPartyMemberSyncData).PlayerUID = (param_1->RaidPartyMemberSyncData).PlayerUID;
  (this->RaidPartyMemberSyncData).CharId = (param_1->RaidPartyMemberSyncData).CharId;
  dVar1 = (param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Y;
  (this->RaidPartyMemberSyncData).Position.field0_0x0._s_0.X =
       (param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.X;
  (this->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Y = dVar1;
  (this->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Z =
       (param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Z;
  (this->RaidPartyMemberSyncData).CharEntityId = (param_1->RaidPartyMemberSyncData).CharEntityId;
  (this->RaidPartyMemberSyncData).IsDead = (param_1->RaidPartyMemberSyncData).IsDead;
  (this->RaidPartyMemberSyncData).ZoneID = (param_1->RaidPartyMemberSyncData).ZoneID;
  TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
  ::operator=(&(this->RaidPartyMemberSyncData).StatusMaxMap,
              (TSet<TTuple<EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>,FDefaultSetAllocator>
               *)&(param_1->RaidPartyMemberSyncData).StatusMaxMap);
  TSet<TTuple<enum_EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>,FDefaultSetAllocator>
  ::operator=(&(this->RaidPartyMemberSyncData).StatusCurMap,
              (TSet<TTuple<EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>,FDefaultSetAllocator>
               *)&(param_1->RaidPartyMemberSyncData).StatusCurMap);
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
               *)&(this->RaidPartyMemberSyncData).BuffMap,
              (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
               *)&(param_1->RaidPartyMemberSyncData).BuffMap);
  return this;
}

