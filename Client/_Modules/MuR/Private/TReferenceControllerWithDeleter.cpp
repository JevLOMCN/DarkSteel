// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// DestroyObject @ 14ab6ce30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Mutable::Private::FMaterial,SharedPointerInternals::DefaultDeleter<UE::Mutable::Private::FMaterial>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::Mutable::Private::FMaterial,SharedPointerInternals::DefaultDeleter<UE::Mutable::Private::FMaterial>,1>
                *this)

{
  FMaterial *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMaterial *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ab6ce41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ab6ce50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Mutable::Private::FMesh,SharedPointerInternals::DefaultDeleter<UE::Mutable::Private::FMesh>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::Mutable::Private::FMesh,SharedPointerInternals::DefaultDeleter<UE::Mutable::Private::FMesh>,1>
                *this)

{
  FMesh *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMesh *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ab6ce61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
    return;
  }
  return;
}

