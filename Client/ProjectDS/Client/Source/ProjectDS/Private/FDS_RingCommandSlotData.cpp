// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// FDS_RingCommandSlotData @ 14ba317f0

FDS_RingCommandSlotData * __thiscall
FDS_RingCommandSlotData::FDS_RingCommandSlotData
          (FDS_RingCommandSlotData *this,int param_1,int param_2)

{
  this->SlotType = None;
  this->SlotData = 0;
  this->DeckNumber = param_1;
  this->SlotNumber = param_2;
  return this;
}

// Init @ 14ba52800

void __thiscall
FDS_RingCommandSlotData::Init
          (FDS_RingCommandSlotData *this,EDS_RingCmdType param_1,int *param_2,int *param_3)

{
  this->SlotType = param_1;
  this->DeckNumber = *param_2;
  this->SlotNumber = *param_3;
  return;
}

// SetSlotData @ 14ba74dc0

void __thiscall
FDS_RingCommandSlotData::SetSlotData
          (FDS_RingCommandSlotData *this,EDS_RingCmdType param_1,long64 *param_2)

{
  this->SlotType = param_1;
  this->SlotData = *param_2;
  return;
}

