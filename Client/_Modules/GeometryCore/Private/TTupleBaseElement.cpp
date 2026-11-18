// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// ~TTupleBaseElement<TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,1,2> @ 14336a290

void __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,1,2>
::
~TTupleBaseElement<TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,1,2>
          (TTupleBaseElement<TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,1,2>
           *this)

{
  FConvexPart *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->Value).Ptr;
  if (this_00 != (FConvexPart *)0x0) {
    pFVar1 = (this_00->OverlapsNegativeSpace).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this_00->HullPlanes).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this_00->HullTriangles).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this_00->InternalGeo);
    ::operator_delete(this_00,0x2e0);
    return;
  }
  return;
}

