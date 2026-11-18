// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// FDS_MountInfo @ 14bbea8b0

FDS_MountInfo * __thiscall FDS_MountInfo::FDS_MountInfo(FDS_MountInfo *this,MountInfo *param_1)

{
  this->MountEntity = (param_1->_impl_).mount_entity_;
  this->SeatIndex = (param_1->_impl_).seat_index_;
  return this;
}

// FDS_MountInfo @ 14bbea8d0

FDS_MountInfo * __thiscall
FDS_MountInfo::FDS_MountInfo(FDS_MountInfo *this,ulong64 *param_1,uint *param_2)

{
  this->MountEntity = *param_1;
  this->SeatIndex = *param_2;
  return this;
}

