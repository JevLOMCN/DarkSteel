// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// ResetAttributes @ 14cb32330

void __thiscall
UE::Geometry::FMeshShapeGenerator::ResetAttributes(FMeshShapeGenerator *this,bool param_1)

{
  (this->UVs).ArrayNum = 0;
  if ((this->UVs).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->UVs).AllocatorInstance,0,&(this->UVs).ArrayMax);
  }
  (this->UVParentVertex).ArrayNum = 0;
  if ((this->UVParentVertex).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UVParentVertex).AllocatorInstance,0,&(this->UVParentVertex).ArrayMax);
  }
  (this->Normals).ArrayNum = 0;
  if ((this->Normals).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Normals).AllocatorInstance,0,&(this->Normals).ArrayMax);
  }
  (this->NormalParentVertex).ArrayNum = 0;
  if ((this->NormalParentVertex).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->NormalParentVertex).AllocatorInstance,0,
               &(this->NormalParentVertex).ArrayMax);
  }
  (this->TriangleUVs).ArrayNum = 0;
  if ((this->TriangleUVs).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->TriangleUVs).AllocatorInstance,0,&(this->TriangleUVs).ArrayMax);
  }
  (this->TriangleNormals).ArrayNum = 0;
  if ((this->TriangleNormals).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->TriangleNormals).AllocatorInstance,0,
               &(this->TriangleNormals).ArrayMax);
  }
  if (param_1) {
    (this->TrianglePolygonIDs).ArrayNum = 0;
    if ((this->TrianglePolygonIDs).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->TrianglePolygonIDs).AllocatorInstance,0,
                 &(this->TrianglePolygonIDs).ArrayMax);
    }
  }
  return;
}

