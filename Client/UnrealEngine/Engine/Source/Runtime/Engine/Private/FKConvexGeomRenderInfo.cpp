// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FKConvexGeomRenderInfo @ 1482d8750

FKConvexGeomRenderInfo * __thiscall
FKConvexGeomRenderInfo::FKConvexGeomRenderInfo(FKConvexGeomRenderInfo *this)

{
  this->VertexBuffers = (FStaticMeshVertexBuffers *)0x0;
  this->IndexBuffer = (FDynamicMeshIndexBuffer32 *)0x0;
  this->CollisionVertexFactory = (FLocalVertexFactory *)0x0;
  return this;
}

// HasValidGeometry @ 14830ed90

bool __thiscall FKConvexGeomRenderInfo::HasValidGeometry(FKConvexGeomRenderInfo *this)

{
  if ((((this->VertexBuffers != (FStaticMeshVertexBuffers *)0x0) &&
       ((this->VertexBuffers->PositionVertexBuffer).NumVertices != 0)) &&
      (this->IndexBuffer != (FDynamicMeshIndexBuffer32 *)0x0)) &&
     (0 < (this->IndexBuffer->Indices).ArrayNum)) {
    return true;
  }
  return false;
}

