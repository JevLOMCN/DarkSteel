// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// MakeMeshAdapter @ 14cb23760

TUniquePtr<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>_>
 __thiscall
UE::Geometry::FStaticMeshRenderDataSpatialWrapper::MakeMeshAdapter
          (FStaticMeshRenderDataSpatialWrapper *this,FMeshSceneAdapterBuildOptions *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FStaticMeshRenderData *this_00;
  TUniquePtr<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>_>
  TVar4;
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar5;
  uint uVar6;
  FStaticMeshLODResources *pFVar7;
  longlong in_R8;
  
  this_00 = UStaticMesh::GetRenderData(*(UStaticMesh **)&this->field_0x18);
  uVar6 = 0;
  if (this_00->CurrentFirstLODIdx != 0) {
    uVar6 = (uint)this_00->CurrentFirstLODIdx;
  }
  iVar3 = FStaticMeshRenderData::GetFirstValidLODIdx(this_00,uVar6);
  if ((iVar3 < 0) || ((this_00->LODResources).Array.ArrayNum <= iVar3)) {
    pFVar7 = (FStaticMeshLODResources *)0x0;
  }
  else {
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (FStaticMeshLODResourcesMeshSurfaceAdapter *)(*pcVar1)();
        return (TUniquePtr<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>_>
                )TVar4.Ptr;
      }
    }
    pFVar7 = *(FStaticMeshLODResources **)
              ((this_00->LODResources).Array.AllocatorInstance.Data + (longlong)iVar3 * 8);
  }
  pFVar5 = ::operator_new(0x68);
  if (pFVar5 == (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
    param_1->bPrintDebugMessages = false;
    param_1->bThickenThinMeshes = false;
    *(undefined6 *)&param_1->field_0x2 = 0;
  }
  else {
    pFVar5 = FStaticMeshLODResourcesMeshSurfaceAdapter::FStaticMeshLODResourcesMeshSurfaceAdapter
                       (pFVar5,pFVar7,*(UStaticMesh **)&this->field_0x18,*(bool *)(in_R8 + 0x20));
    *(FStaticMeshLODResourcesMeshSurfaceAdapter **)param_1 = pFVar5;
  }
  return (TUniquePtr<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>_>
          )(FStaticMeshLODResourcesMeshSurfaceAdapter *)param_1;
}

