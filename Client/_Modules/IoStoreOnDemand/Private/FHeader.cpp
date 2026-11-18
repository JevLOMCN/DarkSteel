// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// IsValid @ 1445de250

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall UE::IoStore::FCasJournal::FHeader::IsValid(FHeader *this)

{
  if ((*(longlong *)this->Magic == MagicSequence._0_8_) &&
     (*(longlong *)(this->Magic + 8) == MagicSequence._8_8_)) {
    return this->Version < LatestPlusOne;
  }
  return false;
}

// IsValid @ 1445de280

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall UE::IoStore::FCasSnapshot::FHeader::IsValid(FHeader *this)

{
  if ((*(longlong *)this->Magic == MagicSequence._0_8_) &&
     (*(longlong *)(this->Magic + 8) == MagicSequence._8_8_)) {
    return this->Version < LatestPlusOne;
  }
  return false;
}

