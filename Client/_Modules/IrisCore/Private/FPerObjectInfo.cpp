// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// FPerObjectInfo @ 1441f8ba0

FPerObjectInfo * __thiscall
UE::Net::FReplicationStateStorage::FPerObjectInfo::FPerObjectInfo(FPerObjectInfo *this)

{
  this->Protocol = (FReplicationProtocol *)0x0;
  this->StateBuffers[0] = (uchar *)0x0;
  this->StateBuffers[1] = (uchar *)0x0;
  this->AllocationCount = 0;
  return this;
}

// FPerObjectInfo @ 1442298f0

FPerObjectInfo * __thiscall
UNetObjectGridFilter::FPerObjectInfo::FPerObjectInfo(FPerObjectInfo *this)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar1;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CellBox).MinX = 0;
  (this->CellBox).MinY = 0;
  this->ObjectIndex = 0;
  this->FrameCountBeforeCulling = 0;
  this->CullDistance = 0.0;
  this->CullDistanceSq = 0.0;
  (this->CellBox).MaxX = -1;
  (this->CellBox).MaxY = -1;
  return this;
}

