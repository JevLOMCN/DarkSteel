// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_CampSeatInfo @ 14ba907b0

FDS_CampSeatInfo * __thiscall
FDS_CampSeatInfo::FDS_CampSeatInfo(FDS_CampSeatInfo *this,CampSeat *param_1)

{
  Vector *pVVar1;
  undefined8 uVar2;
  Vector *pVVar3;
  
  this->Index = 0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar2;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->OccupantEntityID = 0;
  this->Index = (param_1->_impl_).index_;
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pVVar1 = (param_1->_impl_).position_;
    pVVar3 = &_Vector_default_instance_._instance;
    if (pVVar1 != (Vector *)0x0) {
      pVVar3 = pVVar1;
    }
    DS_Util::SetFVector(&this->Position,pVVar3);
  }
  this->OccupantEntityID = (param_1->_impl_).occupant_entity_id_;
  return this;
}

