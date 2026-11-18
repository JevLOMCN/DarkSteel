// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// CopyFromValid @ 14b9e3f40

void __thiscall FDS_ChatUserInfo::CopyFromValid(FDS_ChatUserInfo *this,FDS_ChatUserInfo *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (1 < (param_1->UserID).Data.ArrayNum) {
    ::FString::operator=(&this->UserID,&param_1->UserID);
  }
  if (param_1->PlayerUID != 0) {
    this->PlayerUID = param_1->PlayerUID;
  }
  iVar2 = (param_1->Nickname).Data.ArrayNum;
  if (1 < iVar2) {
    iVar1 = (param_1->UserID).Data.ArrayNum;
    if (iVar2 == iVar1) {
      iVar2 = wcscmp((wchar_t *)(param_1->Nickname).Data.AllocatorInstance.Data,
                     (wchar_t *)(param_1->UserID).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
    }
    else {
      bVar3 = iVar2 + iVar1 == 1;
    }
    if (!bVar3) {
      ::FString::operator=(&this->Nickname,&param_1->Nickname);
    }
  }
  if (0 < param_1->CharID) {
    this->CharID = param_1->CharID;
  }
  if (0 < param_1->CharLevel) {
    this->CharLevel = param_1->CharLevel;
  }
  return;
}

// IsValidNickname @ 14b9fa490

bool __thiscall FDS_ChatUserInfo::IsValidNickname(FDS_ChatUserInfo *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (this->Nickname).Data.ArrayNum;
  if (iVar2 < 2) {
    return false;
  }
  iVar1 = (this->UserID).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 != 1;
  }
  iVar2 = wcscmp((wchar_t *)(this->Nickname).Data.AllocatorInstance.Data,
                 (wchar_t *)(this->UserID).Data.AllocatorInstance.Data);
  return iVar2 != 0;
}

