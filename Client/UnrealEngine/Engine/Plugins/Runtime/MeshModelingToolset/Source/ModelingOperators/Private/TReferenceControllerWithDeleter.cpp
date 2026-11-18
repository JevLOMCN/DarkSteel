// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// DestroyObject @ 14c97c050

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Geometry::FDynamicMesh3,SharedPointerInternals::DefaultDeleter<UE::Geometry::FDynamicMesh3>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::Geometry::FDynamicMesh3,SharedPointerInternals::DefaultDeleter<UE::Geometry::FDynamicMesh3>,1>
                *this)

{
  FDynamicMesh3 *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDynamicMesh3 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014c97c061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

