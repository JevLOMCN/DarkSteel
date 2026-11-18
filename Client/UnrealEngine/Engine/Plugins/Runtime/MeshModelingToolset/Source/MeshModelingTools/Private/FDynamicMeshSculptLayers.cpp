// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// GetLayer @ 14ccfe4c0

TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::FDynamicMeshSculptLayers::GetLayer(FDynamicMeshSculptLayers *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *pTVar3;
  
  if ((-1 < param_1) && (param_1 < (this->Layers).Array.ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
        return pTVar3;
      }
    }
    return *(TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> **)
            ((this->Layers).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0;
}

