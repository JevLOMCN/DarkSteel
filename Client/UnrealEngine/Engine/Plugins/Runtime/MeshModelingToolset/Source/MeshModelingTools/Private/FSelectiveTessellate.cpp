// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// ~FSelectiveTessellate @ 14cc22360

void __thiscall
UE::Geometry::FSelectiveTessellate::~FSelectiveTessellate(FSelectiveTessellate *this)

{
  this->_padding_ = (longlong)&___7FSelectiveTessellate_Geometry_UE__6B_;
  return;
}

// Validate @ 14cc88ce0

EOperationValidationResult __thiscall
UE::Geometry::FSelectiveTessellate::Validate(FSelectiveTessellate *this)

{
  FTessellationPattern *pFVar1;
  EOperationValidationResult EVar2;
  
  if ((((this->bInPlace != false) ||
       (((this->Mesh != (FDynamicMesh3 *)0x0 && (this->ResultMesh != (FDynamicMesh3 *)0x0)) &&
        (this->Pattern != (FTessellationPattern *)0x0)))) &&
      ((this->bInPlace != true ||
       ((this->ResultMesh != (FDynamicMesh3 *)0x0 && (this->Pattern != (FTessellationPattern *)0x0))
       )))) && (pFVar1 = this->Pattern, pFVar1 != (FTessellationPattern *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014cc88d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar2 = (**(code **)(pFVar1->_padding_ + 8))();
    return EVar2;
  }
  return Failed_UnknownReason;
}

