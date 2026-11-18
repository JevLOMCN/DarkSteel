// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// FDS_RaidPartySimpleInfo @ 14baed3f0

FDS_RaidPartySimpleInfo * __thiscall
FDS_RaidPartySimpleInfo::FDS_RaidPartySimpleInfo
          (FDS_RaidPartySimpleInfo *this,FDS_RaidPartySimpleInfo *param_1)

{
  this->RaidPartyUID = param_1->RaidPartyUID;
  this->DungeonId = param_1->DungeonId;
  ::FString::FString(&this->PartyName,&param_1->PartyName);
  this->IsPassword = param_1->IsPassword;
  this->LeaderUID = param_1->LeaderUID;
  ::FString::FString(&this->LeaderNickName,&param_1->LeaderNickName);
  this->IsPublic = param_1->IsPublic;
  this->MemberCount = param_1->MemberCount;
  return this;
}

// FDS_RaidPartySimpleInfo @ 14baed460

FDS_RaidPartySimpleInfo * __thiscall
FDS_RaidPartySimpleInfo::FDS_RaidPartySimpleInfo
          (FDS_RaidPartySimpleInfo *this,RaidPartySimpleInfo *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  char *pcVar4;
  FString local_28;
  FString local_18;
  
  pFVar1 = &this->PartyName;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = &this->LeaderNickName;
  (this->PartyName).Data.ArrayNum = 0;
  (this->PartyName).Data.ArrayMax = 0;
  this->IsPassword = false;
  this->LeaderUID = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeaderNickName).Data.ArrayNum = 0;
  (this->LeaderNickName).Data.ArrayMax = 0;
  this->RaidPartyUID = 0;
  this->DungeonId = 0;
  this->IsPublic = false;
  this->MemberCount = 0;
  this->RaidPartyUID = (param_1->_impl_).raid_party_uid_;
  this->DungeonId = (param_1->_impl_).dungeon_id_;
  pcVar4 = (char *)((ulonglong)(param_1->_impl_).party_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
    pcVar4 = *(char **)pcVar4;
  }
  ::FString::FString(&local_28,pcVar4);
  if (pFVar1 != &local_28) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->PartyName).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->PartyName).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->IsPassword = (param_1->_impl_).is_password_;
  this->LeaderUID = (param_1->_impl_).leader_uid_;
  pcVar4 = (char *)((ulonglong)(param_1->_impl_).leader_nick_name_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
    pcVar4 = *(char **)pcVar4;
  }
  ::FString::FString(&local_18,pcVar4);
  if (pFVar2 != &local_18) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->LeaderNickName).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->LeaderNickName).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->IsPublic = (param_1->_impl_).is_public_;
  this->MemberCount = (param_1->_impl_).member_count_;
  return this;
}

