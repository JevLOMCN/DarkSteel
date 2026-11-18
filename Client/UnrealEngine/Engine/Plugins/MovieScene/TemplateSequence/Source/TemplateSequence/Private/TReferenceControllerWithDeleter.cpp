// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// DestroyObject @ 14ac74b00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTemplateSequenceSpawnRegister,SharedPointerInternals::DefaultDeleter<FTemplateSequenceSpawnRegister>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTemplateSequenceSpawnRegister,SharedPointerInternals::DefaultDeleter<FTemplateSequenceSpawnRegister>,1>
                *this)

{
  FTemplateSequenceSpawnRegister *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTemplateSequenceSpawnRegister *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ac74b11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

