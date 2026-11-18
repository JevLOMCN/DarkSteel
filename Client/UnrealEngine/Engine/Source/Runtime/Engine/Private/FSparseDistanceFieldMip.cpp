// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSparseDistanceFieldMip @ 147abc3d0

FSparseDistanceFieldMip * __thiscall
FSparseDistanceFieldMip::FSparseDistanceFieldMip(FSparseDistanceFieldMip *this)

{
  *(undefined8 *)&(this->IndirectionDimensions).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->IndirectionDimensions).field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  this->NumDistanceFieldBricks = 0;
  *(undefined8 *)&(this->VolumeToVirtualUVScale).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->VolumeToVirtualUVScale).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->VolumeToVirtualUVAdd).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->VolumeToVirtualUVAdd).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (this->DistanceFieldToVolumeScaleBias).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->BulkOffset = 0;
  this->BulkSize = 0;
  return this;
}

