// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationUtils
// Functions: 1

// DestroyObject @ 14e7ef280

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationUtilsGameplayViewExtension,SharedPointerInternals::DefaultDeleter<FAutomationUtilsGameplayViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationUtilsGameplayViewExtension,SharedPointerInternals::DefaultDeleter<FAutomationUtilsGameplayViewExtension>,1>
                *this)

{
  FAutomationUtilsGameplayViewExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAutomationUtilsGameplayViewExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e7ef291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

