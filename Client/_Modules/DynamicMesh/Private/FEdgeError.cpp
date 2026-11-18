// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// operator< @ 14c6e2260

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError::operator<
          (FEdgeError *this,FEdgeError *param_1)

{
  return this->error < param_1->error;
}

// operator< @ 14c6e2280

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError::
operator<(FEdgeError *this,FEdgeError *param_1)

{
  return this->error < param_1->error;
}

// operator< @ 14c6e22a0

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError::
operator<(FEdgeError *this,FEdgeError *param_1)

{
  return this->error < param_1->error;
}

