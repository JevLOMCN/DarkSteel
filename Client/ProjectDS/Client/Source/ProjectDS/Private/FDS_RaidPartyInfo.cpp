// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// FDS_RaidPartyInfo @ 14b8b19a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDS_RaidPartyInfo * __thiscall
FDS_RaidPartyInfo::FDS_RaidPartyInfo(FDS_RaidPartyInfo *this,RaidPartyInfo *param_1)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  FDS_RaidPartyMemberInfo *pFVar6;
  code *pcVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  FDS_RaidPartyMemberInfo *pFVar11;
  FDS_RaidPartyInfo *pFVar12;
  char *pcVar13;
  RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *pRVar14;
  undefined1 auStackY_208 [32];
  FString local_1b8 [2];
  FDS_RaidPartyMemberInfo local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar1 = &this->PartyName;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Members).ArrayMax;
  (this->PartyName).Data.ArrayNum = 0;
  (this->PartyName).Data.ArrayMax = 0;
  this->IsPassword = false;
  (this->Members).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Members).ArrayNum = 0;
  *piVar2 = 0;
  this->RaidPartyUID = 0;
  this->DungeonId = 0;
  this->LeaderUID = 0;
  this->IsPublic = false;
  this->MemberCount = 0;
  this->State = 0;
  this->RaidPartyUID = (param_1->_impl_).raid_party_uid_;
  this->DungeonId = (param_1->_impl_).dungeon_id_;
  pcVar13 = (char *)((ulonglong)(param_1->_impl_).party_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
  ;
  if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
    pcVar13 = *(char **)pcVar13;
  }
  ::FString::FString(local_1b8,pcVar13);
  if (pFVar1 != local_1b8) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_1b8[0].Data.AllocatorInstance.Data;
    (this->PartyName).Data.ArrayNum = local_1b8[0].Data.ArrayNum;
    (this->PartyName).Data.ArrayMax = local_1b8[0].Data.ArrayMax;
    local_1b8[0].Data.ArrayNum = 0;
    local_1b8[0].Data.ArrayMax = 0;
    local_1b8[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_1b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8[0].Data.AllocatorInstance.Data);
  }
  this->IsPassword = (param_1->_impl_).is_password_;
  DestructItems<FDS_RaidPartyMemberInfo,int>
            ((FDS_RaidPartyMemberInfo *)(this->Members).AllocatorInstance.Data,
             (this->Members).ArrayNum);
  (this->Members).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x160,8,0,&(this->Members).AllocatorInstance,0,piVar2);
  }
  uVar5 = *(ulonglong *)&(param_1->_impl_).members_;
  if ((uVar5 & 1) == 0) {
    pRVar14 = &(param_1->_impl_).members_;
  }
  else {
    pRVar14 = (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)(uVar5 + 7);
  }
  iVar3 = *(int *)&(param_1->_impl_).members_.field_0x8;
  puVar8 = (undefined8 *)&pRVar14->field_0x0;
  while( true ) {
    if (pRVar14 == (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)(puVar8 + iVar3)) {
      this->LeaderUID = (param_1->_impl_).leader_uid_;
      this->IsPublic = (param_1->_impl_).is_public_;
      this->MemberCount = (param_1->_impl_).member_count_;
      this->State = (param_1->_impl_).state_;
      return this;
    }
    pFVar11 = FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo
                        (&local_198,*(RaidPartyMemberInfo **)pRVar14);
    pFVar6 = (FDS_RaidPartyMemberInfo *)(this->Members).AllocatorInstance.Data;
    if (((pFVar6 <= pFVar11) && (pFVar11 < pFVar6 + *piVar2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar10 = (this->Members).ArrayNum;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x160,8,&(this->Members).AllocatorInstance,piVar2);
    }
    (this->Members).ArrayNum = iVar10 + 1;
    FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo
              ((FDS_RaidPartyMemberInfo *)
               ((this->Members).AllocatorInstance.Data + (longlong)iVar10 * 0x160),pFVar11);
    FDS_RaidPartyMemberSyncData::~FDS_RaidPartyMemberSyncData(&local_198.RaidPartyMemberSyncData);
    if (local_198.NickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.NickName.Data.AllocatorInstance.Data);
    }
    pRVar14 = (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)&pRVar14->field_0x8;
  }
  pcVar7 = (code *)swi(3);
  pFVar12 = (FDS_RaidPartyInfo *)(*pcVar7)();
  return pFVar12;
}

// operator= @ 14b8b3940

FDS_RaidPartyInfo * __thiscall
FDS_RaidPartyInfo::operator=(FDS_RaidPartyInfo *this,FDS_RaidPartyInfo *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<FDS_RaidPartyMemberInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FDS_RaidPartyMemberInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = &param_1->PartyName;
  pFVar2 = &this->PartyName;
  this->RaidPartyUID = param_1->RaidPartyUID;
  this->DungeonId = param_1->DungeonId;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PartyName).Data.ArrayNum = (param_1->PartyName).Data.ArrayNum;
    (this->PartyName).Data.ArrayMax = (param_1->PartyName).Data.ArrayMax;
    (param_1->PartyName).Data.ArrayNum = 0;
    (param_1->PartyName).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->Members;
  pTVar4 = &this->Members;
  this->IsPassword = param_1->IsPassword;
  if (pTVar4 != pTVar3) {
    DestructItems<FDS_RaidPartyMemberInfo,int>
              ((FDS_RaidPartyMemberInfo *)(pTVar4->AllocatorInstance).Data,(this->Members).ArrayNum)
    ;
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Members).ArrayNum = (param_1->Members).ArrayNum;
    (this->Members).ArrayMax = (param_1->Members).ArrayMax;
    (param_1->Members).ArrayNum = 0;
    (param_1->Members).ArrayMax = 0;
  }
  this->LeaderUID = param_1->LeaderUID;
  this->IsPublic = param_1->IsPublic;
  this->MemberCount = param_1->MemberCount;
  this->State = param_1->State;
  return this;
}

// Clear @ 14b8b8810

void __thiscall FDS_RaidPartyInfo::Clear(FDS_RaidPartyInfo *this)

{
  int *piVar1;
  
  this->RaidPartyUID = 0;
  this->DungeonId = 0;
  ::FString::Empty(&this->PartyName);
  this->IsPassword = false;
  DestructItems<FDS_RaidPartyMemberInfo,int>
            ((FDS_RaidPartyMemberInfo *)(this->Members).AllocatorInstance.Data,
             (this->Members).ArrayNum);
  piVar1 = &(this->Members).ArrayMax;
  (this->Members).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x160,8,0,&(this->Members).AllocatorInstance,0,piVar1);
  }
  this->LeaderUID = 0;
  this->IsPublic = false;
  this->MemberCount = 0;
  this->State = 0;
  return;
}

// GetMemberInfoByPlayerUID @ 14b8c7950

FDS_RaidPartyMemberInfo * __thiscall
FDS_RaidPartyInfo::GetMemberInfoByPlayerUID(FDS_RaidPartyInfo *this,long64 param_1)

{
  int iVar1;
  FDS_RaidPartyMemberInfo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Members).ArrayNum;
  pFVar2 = (FDS_RaidPartyMemberInfo *)(this->Members).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->Members).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_RaidPartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->PlayerUID == param_1) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return &DefaultMemberInfo;
}

// GetMemberInfoBySlotIndex @ 14b8c79d0

FDS_RaidPartyMemberInfo * __thiscall
FDS_RaidPartyInfo::GetMemberInfoBySlotIndex(FDS_RaidPartyInfo *this,int param_1)

{
  int iVar1;
  FDS_RaidPartyMemberInfo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Members).ArrayNum;
  pFVar2 = (FDS_RaidPartyMemberInfo *)(this->Members).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->Members).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_RaidPartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->SlotIndex == param_1) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return &DefaultMemberInfo;
}

// GetPartyGroupID @ 14b8c7fd0

int __thiscall FDS_RaidPartyInfo::GetPartyGroupID(FDS_RaidPartyInfo *this,ulong64 param_1)

{
  FDS_RaidPartyMemberInfo *pFVar1;
  
  pFVar1 = GetMemberInfoByPlayerUID(this,param_1);
  return (pFVar1->SlotIndex >> 2) + 1;
}

// GetRaidPartyState @ 14b8c85d0

EDS_RaidPartyState __thiscall FDS_RaidPartyInfo::GetRaidPartyState(FDS_RaidPartyInfo *this)

{
  char cVar1;
  
  cVar1 = (char)this->State;
  if (cVar1 == '\0') {
    return Waiting;
  }
  if (cVar1 == '\x01') {
    return Starting;
  }
  if (cVar1 == '\x02') {
    return Raiding;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return Max;
    }
    return End;
  }
  return Rewarding;
}

