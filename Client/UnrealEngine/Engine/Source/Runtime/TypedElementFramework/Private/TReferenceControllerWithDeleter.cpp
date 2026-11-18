// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 3

// DestroyObject @ 142caac50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypedElementList<FScriptTypedElementHandle>,SharedPointerInternals::DefaultDeleter<TTypedElementList<FScriptTypedElementHandle>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypedElementList<FScriptTypedElementHandle>,SharedPointerInternals::DefaultDeleter<TTypedElementList<FScriptTypedElementHandle>_>,1>
                *this)

{
  TTypedElementList<FScriptTypedElementHandle> *this_00;
  
  this_00 = this->Object;
  if (this_00 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    TTypedElementList<FScriptTypedElementHandle>::~TTypedElementList<FScriptTypedElementHandle>
              (this_00);
    ::operator_delete(this_00,0xe0);
    return;
  }
  return;
}

// DestroyObject @ 142caac90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypedElementList<FTypedElementHandle>,SharedPointerInternals::DefaultDeleter<TTypedElementList<FTypedElementHandle>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypedElementList<FTypedElementHandle>,SharedPointerInternals::DefaultDeleter<TTypedElementList<FTypedElementHandle>_>,1>
                *this)

{
  TTypedElementList<FTypedElementHandle> *this_00;
  
  this_00 = this->Object;
  if (this_00 != (TTypedElementList<FTypedElementHandle> *)0x0) {
    TTypedElementList<FTypedElementHandle>::~TTypedElementList<FTypedElementHandle>(this_00);
    ::operator_delete(this_00,0xe0);
    return;
  }
  return;
}

// DestroyObject @ 142cf4dc0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FAsyncLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FAsyncLatentCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationSpecBase::FAsyncLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FAsyncLatentCommand>,1>
                *this)

{
  FAsyncLatentCommand *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAsyncLatentCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142cf4dd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

