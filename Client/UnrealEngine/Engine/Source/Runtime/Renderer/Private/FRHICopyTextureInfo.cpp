// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRHICopyTextureInfo @ 1454779c0

FRHICopyTextureInfo * __thiscall FRHICopyTextureInfo::FRHICopyTextureInfo(FRHICopyTextureInfo *this)

{
  *(undefined8 *)&(this->Size).field0_0x0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->Size).field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->SourcePosition).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->SourcePosition).field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z
  ;
  *(undefined8 *)&(this->DestPosition).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->DestPosition).field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  this->SourceSliceIndex = 0;
  this->DestSliceIndex = 0;
  this->DestMipIndex = 0;
  this->NumSlices = 1;
  this->SourceMipIndex = 0;
  this->NumMips = 1;
  return this;
}

