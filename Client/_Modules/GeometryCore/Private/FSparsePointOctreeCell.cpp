// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// FSparsePointOctreeCell @ 1435e4290

FSparsePointOctreeCell * __thiscall
UE::Geometry::FSparsePointOctreeCell::FSparsePointOctreeCell(FSparsePointOctreeCell *this)

{
  this->CellID = 0xffffffff;
  *(undefined8 *)&(this->Index).field0_0x0 = 0;
  (this->Index).field0_0x0._s_0.Z = 0;
  this->Level = '\0';
  (this->Children).Elements[2] = 0xffffffff;
  (this->Children).Elements[3] = 0xffffffff;
  (this->Children).Elements[0] = 0xffffffff;
  (this->Children).Elements[1] = 0xffffffff;
  (this->Children).Elements[6] = 0xffffffff;
  (this->Children).Elements[7] = 0xffffffff;
  (this->Children).Elements[4] = 0xffffffff;
  (this->Children).Elements[5] = 0xffffffff;
  return this;
}

