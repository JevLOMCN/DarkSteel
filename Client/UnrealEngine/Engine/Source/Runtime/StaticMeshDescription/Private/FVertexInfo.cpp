// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 1

// FVertexInfo @ 14436afe0

FVertexInfo * __thiscall FVertexInfo::FVertexInfo(FVertexInfo *this,FVertexInfo *param_1)

{
  ForElementType<FEdgeID> FVar1;
  
  this->TriangleID = param_1->TriangleID;
  this->VertexInstanceID = param_1->VertexInstanceID;
  (this->UVs).field0_0x0 = (param_1->UVs).field0_0x0;
  (this->EdgeIDs).AllocatorInstance.SecondaryData = (ForElementType<FEdgeID>)0x0;
  if ((param_1->EdgeIDs).AllocatorInstance.SecondaryData == (ForElementType<FEdgeID>)0x0) {
    *(undefined8 *)(this->EdgeIDs).AllocatorInstance.InlineData =
         *(undefined8 *)(param_1->EdgeIDs).AllocatorInstance.InlineData;
  }
  FVar1 = (this->EdgeIDs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FEdgeID>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->EdgeIDs).AllocatorInstance.SecondaryData =
       (param_1->EdgeIDs).AllocatorInstance.SecondaryData;
  (param_1->EdgeIDs).AllocatorInstance.SecondaryData = (ForElementType<FEdgeID>)0x0;
  (this->EdgeIDs).ArrayNum = (param_1->EdgeIDs).ArrayNum;
  (this->EdgeIDs).ArrayMax = (param_1->EdgeIDs).ArrayMax;
  (param_1->EdgeIDs).ArrayNum = 0;
  (param_1->EdgeIDs).ArrayMax = 2;
  return this;
}

