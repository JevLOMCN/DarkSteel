// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_MountRider @ 14ba90830

FDS_MountRider * __thiscall FDS_MountRider::FDS_MountRider(FDS_MountRider *this,Rider *param_1)

{
  this->EntityID = (param_1->_impl_).entity_id_;
  this->SeatIndex = (param_1->_impl_).seat_index_;
  return this;
}

