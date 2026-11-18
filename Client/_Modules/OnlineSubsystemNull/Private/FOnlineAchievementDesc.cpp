// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 1

// FOnlineAchievementDesc @ 14ed10de0

FOnlineAchievementDesc * __thiscall
FOnlineAchievementDesc::FOnlineAchievementDesc
          (FOnlineAchievementDesc *this,FOnlineAchievementDesc *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (this->Title).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->Title).TextData.Reference;
  (this->Title).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Title).Flags = (param_1->Title).Flags;
  (this->LockedDesc).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->LockedDesc).TextData.Reference;
  (this->LockedDesc).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->LockedDesc).Flags = (param_1->LockedDesc).Flags;
  (this->UnlockedDesc).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->UnlockedDesc).TextData.Reference;
  (this->UnlockedDesc).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->UnlockedDesc).Flags = (param_1->UnlockedDesc).Flags;
  this->bIsHidden = param_1->bIsHidden;
  (this->UnlockTime).Ticks = (param_1->UnlockTime).Ticks;
  return this;
}

