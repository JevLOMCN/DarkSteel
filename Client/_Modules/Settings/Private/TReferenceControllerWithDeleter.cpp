// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Settings
// Functions: 3

// DestroyObject @ 142693c60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSettingsContainer,SharedPointerInternals::DefaultDeleter<FSettingsContainer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSettingsContainer,SharedPointerInternals::DefaultDeleter<FSettingsContainer>,1>
                *this)

{
  FSettingsContainer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSettingsContainer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142693c71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142698370

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSettingsCategory,SharedPointerInternals::DefaultDeleter<FSettingsCategory>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSettingsCategory,SharedPointerInternals::DefaultDeleter<FSettingsCategory>,1>
                *this)

{
  FSettingsCategory *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSettingsCategory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142698381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142698390

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSettingsSection,SharedPointerInternals::DefaultDeleter<FSettingsSection>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSettingsSection,SharedPointerInternals::DefaultDeleter<FSettingsSection>,1>
                *this)

{
  FSettingsSection *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSettingsSection *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426983a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xf0))(pFVar1,1);
    return;
  }
  return;
}

