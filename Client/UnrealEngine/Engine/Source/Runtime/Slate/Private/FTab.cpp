// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FTab @ 1426fcfe0

FTab * __thiscall FTabManager::FTab::FTab(FTab *this,FTab *param_1)

{
  bool bVar1;
  int iVar2;
  ETabIdFlags EVar3;
  undefined3 uVar4;
  
  iVar2 = (param_1->TabId).InstanceId;
  EVar3 = (param_1->TabId).Flags;
  uVar4 = *(undefined3 *)&(param_1->TabId).field_0xd;
  (this->TabId).TabType = (param_1->TabId).TabType;
  (this->TabId).InstanceId = iVar2;
  (this->TabId).Flags = EVar3;
  *(undefined3 *)&(this->TabId).field_0xd = uVar4;
  this->TabState = param_1->TabState;
  this->SidebarLocation = param_1->SidebarLocation;
  this->SidebarSizeCoefficient = param_1->SidebarSizeCoefficient;
  bVar1 = param_1->bPinnedInSidebar;
  (this->bIsLockedInPlace).bIsSet = false;
  this->bPinnedInSidebar = bVar1;
  bVar1 = (param_1->bIsLockedInPlace).bIsSet;
  (this->bIsLockedInPlace).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->bIsLockedInPlace).TypedValue = (param_1->bIsLockedInPlace).TypedValue;
  }
  return this;
}

