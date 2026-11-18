// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// GetTriangleGroup @ 14c980480

int __thiscall UE::Geometry::FPolygroupSet::GetTriangleGroup(FPolygroupSet *this,int param_1)

{
  longlong lVar1;
  FDynamicMesh3 *pFVar2;
  
  if (this->PolygroupAttrib != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    return *(int *)(*(longlong *)
                     (*(longlong *)&this->PolygroupAttrib->field_0x20 +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  }
  pFVar2 = this->Mesh;
  if ((pFVar2->TriangleGroups).bIsSet == false) {
    return -1;
  }
  if ((-1 < param_1) &&
     (param_1 < (int)((pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      return *(int *)(*(longlong *)
                       ((pFVar2->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data + lVar1) +
                     (ulonglong)(param_1 & 0x1ff) * 4);
    }
  }
  return 0;
}

