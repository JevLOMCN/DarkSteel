// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// MakeMeshAdapter @ 14cb23710

TUniquePtr<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>
 __thiscall
UE::Geometry::FSplineStaticMeshSpatialWrapperBase::MakeMeshAdapter
          (FSplineStaticMeshSpatialWrapperBase *this,FMeshSceneAdapterBuildOptions *param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>
  TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                     ,0x534,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FMeshDescriptionTriangleMeshSurfaceAdapter *)(*pcVar1)();
    return (TUniquePtr<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>
            )TVar3.Ptr;
  }
  param_1->bPrintDebugMessages = false;
  param_1->bThickenThinMeshes = false;
  *(undefined6 *)&param_1->field_0x2 = 0;
  return (TUniquePtr<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>
          )(FMeshDescriptionTriangleMeshSurfaceAdapter *)param_1;
}

