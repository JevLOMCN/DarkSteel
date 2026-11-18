// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSplitInfo @ 148250be0

FSplitInfo * __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::FSplitInfo::FSplitInfo(FSplitInfo *this)

{
  *(undefined8 *)&(this->RealBounds).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->RealBounds).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->RealBounds).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->RealBounds).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->RealBounds).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->RealBounds).MMax.field_0x10 = 0xffefffffffffffff;
  return this;
}

