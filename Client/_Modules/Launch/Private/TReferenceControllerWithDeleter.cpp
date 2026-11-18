// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 2

// DestroyObject @ 148da1450

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAppMediaTimeSource,SharedPointerInternals::DefaultDeleter<FAppMediaTimeSource>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAppMediaTimeSource,SharedPointerInternals::DefaultDeleter<FAppMediaTimeSource>,1>
                *this)

{
  FAppMediaTimeSource *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAppMediaTimeSource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148da1461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 8))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148da1470

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FEnginePackageLocalizationCache,SharedPointerInternals::DefaultDeleter<FEnginePackageLocalizationCache>,1>
::DestroyObject(TReferenceControllerWithDeleter<FEnginePackageLocalizationCache,SharedPointerInternals::DefaultDeleter<FEnginePackageLocalizationCache>,1>
                *this)

{
  FEnginePackageLocalizationCache *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FEnginePackageLocalizationCache *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148da1481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

