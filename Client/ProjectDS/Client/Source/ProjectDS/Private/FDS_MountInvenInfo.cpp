// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_MountInvenInfo @ 14bbea8f0

FDS_MountInvenInfo * __thiscall
FDS_MountInvenInfo::FDS_MountInvenInfo(FDS_MountInvenInfo *this,SqlMountInvenInfoTable *param_1)

{
  this->PlayerUID = (param_1->_impl_).player_uid_;
  this->ExtendedSlotCount = (param_1->_impl_).extended_slot_count_;
  this->SelectedMountUID = (param_1->_impl_).selected_mount_uid_;
  return this;
}

