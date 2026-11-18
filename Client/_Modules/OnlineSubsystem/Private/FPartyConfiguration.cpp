// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 2

// operator== @ 14eb37230

bool __thiscall
FPartyConfiguration::operator==(FPartyConfiguration *this,FPartyConfiguration *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (this->JoinRequestAction != param_1->JoinRequestAction) {
    return false;
  }
  if (this->PresencePermissions != param_1->PresencePermissions) {
    return false;
  }
  if (this->InvitePermissions != param_1->InvitePermissions) {
    return false;
  }
  if (this->bChatEnabled != param_1->bChatEnabled) {
    return false;
  }
  if (this->bIsAcceptingMembers != param_1->bIsAcceptingMembers) {
    return false;
  }
  if (this->NotAcceptingMembersReason != param_1->NotAcceptingMembersReason) {
    return false;
  }
  if (this->MaxMembers != param_1->MaxMembers) {
    return false;
  }
  iVar2 = (this->Nickname).Data.ArrayNum;
  iVar1 = (param_1->Nickname).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Nickname).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Nickname).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_14eb372be;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_14eb372be:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (this->Description).Data.ArrayNum;
  iVar1 = (param_1->Description).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14eb372f1;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Description).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Description).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14eb372f1:
  iVar2 = (this->Password).Data.ArrayNum;
  iVar1 = (param_1->Password).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return true;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Password).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Password).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (bVar3) {
    return true;
  }
  return false;
}

// operator!= @ 14eb37460

bool __thiscall
FPartyConfiguration::operator!=(FPartyConfiguration *this,FPartyConfiguration *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

