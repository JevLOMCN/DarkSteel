// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 2

// DestroyObject @ 146c52280

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLevelSequenceActorSpawner,SharedPointerInternals::DefaultDeleter<FLevelSequenceActorSpawner>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLevelSequenceActorSpawner,SharedPointerInternals::DefaultDeleter<FLevelSequenceActorSpawner>,1>
                *this)

{
  FLevelSequenceActorSpawner *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLevelSequenceActorSpawner *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c52291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x28))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146c522a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLevelSequenceSpawnRegister,SharedPointerInternals::DefaultDeleter<FLevelSequenceSpawnRegister>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLevelSequenceSpawnRegister,SharedPointerInternals::DefaultDeleter<FLevelSequenceSpawnRegister>,1>
                *this)

{
  FLevelSequenceSpawnRegister *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLevelSequenceSpawnRegister *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c522b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

