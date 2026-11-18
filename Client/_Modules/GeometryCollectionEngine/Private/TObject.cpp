// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// ~TObject<FGeometryCollectionMeshCollectorResources> @ 1463a4a60

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FGeometryCollectionMeshCollectorResources>::
~TObject<FGeometryCollectionMeshCollectorResources>
          (TObject<FGeometryCollectionMeshCollectorResources> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFGeometryCollectionMeshCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FGeometryCollectionMeshCollectorResources::~FGeometryCollectionMeshCollectorResources
            ((FGeometryCollectionMeshCollectorResources *)(this + 1));
  return;
}

