// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 2

// TUniquePtr<FTypedElementSelectionCustomization,TDefaultDelete<FTypedElementSelectionCustomization>_> @ 14453ed60

TUniquePtr<FTypedElementSelectionCustomization,TDefaultDelete<FTypedElementSelectionCustomization>_>
* __thiscall
TUniquePtr<FTypedElementSelectionCustomization,TDefaultDelete<FTypedElementSelectionCustomization>_>
::
TUniquePtr<FTypedElementSelectionCustomization,TDefaultDelete<FTypedElementSelectionCustomization>_>
          (TUniquePtr<FTypedElementSelectionCustomization,TDefaultDelete<FTypedElementSelectionCustomization>_>
           *this)

{
  this->Ptr = (FTypedElementSelectionCustomization *)0x0;
  return this;
}

// ~TUniquePtr<FTypedElementSelectionCustomization,TDefaultDelete<FTypedElementSelectionCustomization>_> @ 14453f380

void __thiscall
TUniquePtr<FTypedElementSelectionCustomization,TDefaultDelete<FTypedElementSelectionCustomization>_>
::
~TUniquePtr<FTypedElementSelectionCustomization,TDefaultDelete<FTypedElementSelectionCustomization>_>
          (TUniquePtr<FTypedElementSelectionCustomization,TDefaultDelete<FTypedElementSelectionCustomization>_>
           *this)

{
  FTypedElementSelectionCustomization *pFVar1;
  
  pFVar1 = this->Ptr;
  if (pFVar1 != (FTypedElementSelectionCustomization *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014453f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

