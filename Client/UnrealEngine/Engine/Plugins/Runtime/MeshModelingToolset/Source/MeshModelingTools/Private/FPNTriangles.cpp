// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// ~FPNTriangles @ 14cc221c0

void __thiscall UE::Geometry::FPNTriangles::~FPNTriangles(FPNTriangles *this)

{
  this->_padding_ = (longlong)&___7FPNTriangles_Geometry_UE__6B_;
  return;
}

// Validate @ 14cc88cc0

EOperationValidationResult __thiscall UE::Geometry::FPNTriangles::Validate(FPNTriangles *this)

{
  if (-1 < this->TessellationLevel) {
    return (EOperationValidationResult)(this->Mesh == (FDynamicMesh3 *)0x0);
  }
  return Failed_UnknownReason;
}

