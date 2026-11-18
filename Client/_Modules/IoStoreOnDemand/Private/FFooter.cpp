// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// IsValid @ 1445de1f0

bool __thiscall UE::IoStore::FCasJournal::FFooter::IsValid(FFooter *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)this->Magic - MagicSequence._0_8_;
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(this->Magic + 8) - MagicSequence._8_8_;
  }
  return lVar1 == 0;
}

// IsValid @ 1445de220

bool __thiscall UE::IoStore::FCasSnapshot::FFooter::IsValid(FFooter *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)this->Magic - MagicSequence._0_8_;
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(this->Magic + 8) - MagicSequence._8_8_;
  }
  return lVar1 == 0;
}

