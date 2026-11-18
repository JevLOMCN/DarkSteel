// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 2

// DestroyObject @ 14ac95ce0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FEasyParticleGroupState,SharedPointerInternals::DefaultDeleter<FEasyParticleGroupState>,1>
::DestroyObject(TReferenceControllerWithDeleter<FEasyParticleGroupState,SharedPointerInternals::DefaultDeleter<FEasyParticleGroupState>,1>
                *this)

{
  if (this->Object != (FEasyParticleGroupState *)0x0) {
    FEasyParticleGroupState::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 14ac95d00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FEasyParticleRootState,SharedPointerInternals::DefaultDeleter<FEasyParticleRootState>,1>
::DestroyObject(TReferenceControllerWithDeleter<FEasyParticleRootState,SharedPointerInternals::DefaultDeleter<FEasyParticleRootState>,1>
                *this)

{
  FEasyParticleRootState *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FEasyParticleRootState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ac95d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

