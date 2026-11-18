// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// CheckExists @ 14c8c56c0

bool __thiscall
UE::Geometry::FPolygroupLayer::CheckExists(FPolygroupLayer *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  int iVar2;
  
  if (param_1 != (FDynamicMesh3 *)0x0) {
    if (this->bIsDefaultLayer == false) {
      if ((-1 < this->LayerIndex) &&
         (pFVar1 = (param_1->AttributeSet).Ptr, pFVar1 != (FDynamicMeshAttributeSet *)0x0)) {
        iVar2 = (**(code **)(pFVar1->_padding_ + 200))();
        return this->LayerIndex < iVar2;
      }
    }
    else if ((param_1->TriangleGroups).bIsSet != false) {
      return true;
    }
  }
  return false;
}

