// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// operator() @ 14337c0d0

void __thiscall
TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>::operator()
          (TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart> *this,
          FConvexPart *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != (FConvexPart *)0x0) {
    pFVar1 = (param_1->OverlapsNegativeSpace).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->HullPlanes).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->HullTriangles).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&param_1->InternalGeo);
    ::operator_delete(param_1,0x2e0);
  }
  return;
}

// operator() @ 143463710

void __thiscall
TDefaultDelete<UE::Geometry::FDynamicMeshAttributeChangeSet>::operator()
          (TDefaultDelete<UE::Geometry::FDynamicMeshAttributeChangeSet> *this,
          FDynamicMeshAttributeChangeSet *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != (FDynamicMeshAttributeChangeSet *)0x0) {
    DestructItems<TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>,int>
              ((TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
                *)(param_1->RegisteredAttributeChanges).AllocatorInstance.Data,
               (param_1->RegisteredAttributeChanges).ArrayNum);
    pFVar1 = (param_1->RegisteredAttributeChanges).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>,int>
              ((TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
                *)(param_1->WeightChanges).AllocatorInstance.Data,(param_1->WeightChanges).ArrayNum)
    ;
    pFVar1 = (param_1->WeightChanges).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>,int>
              ((FDynamicMeshTriangleAttributeChange<int,1> *)
               (param_1->PolygroupChanges).AllocatorInstance.Data,
               (param_1->PolygroupChanges).ArrayNum);
    pFVar1 = (param_1->PolygroupChanges).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if ((param_1->MaterialIDAttribChange).bIsSet != false) {
      (param_1->MaterialIDAttribChange).TypedValue._padding_ =
           (longlong)&___7__FDynamicMeshTriangleAttributeChange_H_00_Geometry_UE__6B_;
      pFVar1 = (param_1->MaterialIDAttribChange).TypedValue.NewTriangleAttributes.AllocatorInstance.
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (param_1->MaterialIDAttribChange).TypedValue.OldTriangleAttributes.AllocatorInstance.
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->MaterialIDAttribChange).TypedValue._padding_ =
           (longlong)
           &___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    }
    if ((param_1->ColorChange).bIsSet != false) {
      UE::Geometry::TDynamicMeshAttributeChange<float,4>::~TDynamicMeshAttributeChange<float,4>
                (&(param_1->ColorChange).TypedValue);
    }
    DestructItems<UE::Geometry::TDynamicMeshAttributeChange<float,3>,int>
              ((TDynamicMeshAttributeChange<float,3> *)
               (param_1->NormalChanges).AllocatorInstance.Data,(param_1->NormalChanges).ArrayNum);
    pFVar1 = (param_1->NormalChanges).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<UE::Geometry::TDynamicMeshAttributeChange<float,2>,int>
              ((TDynamicMeshAttributeChange<float,2> *)(param_1->UVChanges).AllocatorInstance.Data,
               (param_1->UVChanges).ArrayNum);
    pFVar1 = (param_1->UVChanges).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0xe8);
  }
  return;
}

