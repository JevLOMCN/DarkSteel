// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 1

// FMeshToMeshVertData @ 148c19f80

FMeshToMeshVertData * __thiscall FMeshToMeshVertData::FMeshToMeshVertData(FMeshToMeshVertData *this)

{
  *(undefined8 *)((longlong)&(this->PositionBaryCoordsAndDist).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)&(this->PositionBaryCoordsAndDist).field0_0x0 = 0;
  (this->PositionBaryCoordsAndDist).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->NormalBaryCoordsAndDist).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->TangentBaryCoordsAndDist).field0_0x0 + 4) = 0;
  this->Weight = 0.0;
  *(undefined8 *)((longlong)&(this->NormalBaryCoordsAndDist).field0_0x0 + 0xc) = 0x3f800000;
  (this->TangentBaryCoordsAndDist).field0_0x0._s_0.W = 1.0;
  return this;
}

