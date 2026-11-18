// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 1

// DestroyObject @ 14ea7d070

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCompositeCoreSceneViewExtension,SharedPointerInternals::DefaultDeleter<FCompositeCoreSceneViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FCompositeCoreSceneViewExtension,SharedPointerInternals::DefaultDeleter<FCompositeCoreSceneViewExtension>,1>
                *this)

{
  FCompositeCoreSceneViewExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FCompositeCoreSceneViewExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ea7d081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

