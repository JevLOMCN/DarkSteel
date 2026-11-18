// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// Clear @ 14b9e2c50

void __thiscall FDS_ChatBookmarkData::Clear(FDS_ChatBookmarkData *this)

{
  this->ChattingTabType = None;
  this->SubTabIndex = -1;
  return;
}

// IsValidData @ 14b9fa410

bool __thiscall FDS_ChatBookmarkData::IsValidData(FDS_ChatBookmarkData *this)

{
  int iVar1;
  
  if (((this->ChattingTabType != None) && (-1 < this->BookmarkIndex)) && (-1 < this->SubTabIndex)) {
    iVar1 = DS_CommonDataHelper::ChattingMaxFavoriteCount();
    return this->BookmarkIndex < iVar1;
  }
  return false;
}

