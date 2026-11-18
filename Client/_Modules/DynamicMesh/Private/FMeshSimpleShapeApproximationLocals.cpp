// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// ReparameterizeBoxCloserToWorldFrame @ 14c913f70

TOrientedBox3<double> * __cdecl
FMeshSimpleShapeApproximationLocals::ReparameterizeBoxCloserToWorldFrame
          (TOrientedBox3<double> *__return_storage_ptr__,TOrientedBox3<double> *param_1)

{
  UE::Geometry::TOrientedBox3<double>::ReparameterizedCloserToWorldFrame
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

