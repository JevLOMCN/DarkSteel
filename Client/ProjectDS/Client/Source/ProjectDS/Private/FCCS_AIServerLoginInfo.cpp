// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// ResetLoginInfo @ 14baca120

void __thiscall FCCS_AIServerLoginInfo::ResetLoginInfo(FCCS_AIServerLoginInfo *this)

{
  int *piVar1;
  
  this->SelectedCharID = 0;
  piVar1 = &(this->DeckCharID).ArrayMax;
  (this->DeckCharID).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DeckCharID).AllocatorInstance,0,piVar1);
  }
  this->bIsLeader = false;
  this->GameID = -1;
  this->bIsRequestRaidPartyDungeonStart = false;
  this->bIsDungeonIn = false;
  (this->DungeonInTime).Ticks = 0;
  return;
}

