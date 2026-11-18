// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// GetIntermediateWrapper @ 14cb10750

TUniquePtr<UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>_>
 __thiscall
UE::Geometry::FCompressedSplineStaticMeshSpatialWrapper::GetIntermediateWrapper
          (FCompressedSplineStaticMeshSpatialWrapper *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *in_RDX;
  
  puVar3 = ::operator_new(0x308);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
    memset(puVar3 + 8,0,0x2c8);
    *(undefined4 *)(puVar3 + 2) = 1;
    puVar3[1] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = &___7FSplineStaticMeshSpatialWrapperBase_Geometry_UE__6B_;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    FMeshDescription::FMeshDescription((FMeshDescription *)(puVar3 + 8));
    puVar3[0x60] = 0;
    *puVar3 = &___7FSplineStaticMeshSourceDataSpatialWrapper_Geometry_UE__6B_;
  }
  uVar1 = *(undefined8 *)&this->field_0x8;
  uVar2 = *(undefined8 *)&this->field_0x10;
  in_RDX->_padding_ = (longlong)puVar3;
  puVar3[1] = uVar1;
  puVar3[2] = uVar2;
  puVar3[3] = *(undefined8 *)&this->field_0x18;
  puVar3[0x60] = this->SplineMeshComponent;
  return (TUniquePtr<UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>_>
          )in_RDX;
}

