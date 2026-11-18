// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// SetGroup @ 14ce73c10

void __thiscall
UE::Geometry::FPolygroupSet::SetGroup
          (FPolygroupSet *this,int param_1,int param_2,FDynamicMesh3 *param_3)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar2;
  int iVar3;
  FDynamicMeshAttributeSet *this_00;
  ulonglong uVar4;
  
  if (((-1 < param_1) &&
      (param_1 < (int)((param_3->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (param_3->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     (uVar4 = (ulonglong)((uint)param_1 >> 9),
     (ushort)(*(short *)(*(longlong *)
                          ((param_3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          uVar4 * 8) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    if (this->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      if ((param_3->TriangleGroups).bIsSet != false) {
        *(int *)(*(longlong *)
                  ((param_3->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data + uVar4 * 8) +
                (ulonglong)(param_1 & 0x1ff) * 4) = param_2;
        iVar3 = param_2 + 1;
        if (param_2 + 1 < param_3->GroupIDCounter) {
          iVar3 = param_3->GroupIDCounter;
        }
        param_3->GroupIDCounter = iVar3;
      }
    }
    else {
      pFVar1 = (param_3->AttributeSet).Ptr;
      this_00 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        this_00 = pFVar1;
      }
      pTVar2 = FDynamicMeshAttributeSet::GetPolygroupLayer(this_00,this->GroupLayerIndex);
      *(int *)(*(longlong *)(*(longlong *)&pTVar2->field_0x20 + uVar4 * 8) +
              (ulonglong)(param_1 & 0x1ff) * 4) = param_2;
    }
  }
  iVar3 = param_2 + 1;
  if (param_2 + 1 < this->MaxGroupID) {
    iVar3 = this->MaxGroupID;
  }
  this->MaxGroupID = iVar3;
  return;
}

