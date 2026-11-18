// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// OnQuestObjectiveRemoved @ 14bb20c90

void __thiscall
FDS_QuestObjectivePhasingInfo::OnQuestObjectiveRemoved(FDS_QuestObjectivePhasingInfo *this)

{
  UDS_PhasingManager *this_00;
  
  this_00 = UDS_PhasingManager::GetInst();
  if (this_00 != (UDS_PhasingManager *)0x0) {
    UDS_PhasingManager::DestroyPhasingVolumeActor(this_00,this->PhasingID);
    return;
  }
  return;
}

