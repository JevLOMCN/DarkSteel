// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 2

// DestroyObject @ 142d52d30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDialogCommands,SharedPointerInternals::DefaultDeleter<FDialogCommands>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDialogCommands,SharedPointerInternals::DefaultDeleter<FDialogCommands>,1>
                *this)

{
  FDialogCommands *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDialogCommands *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d52d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142d9e100

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FText,SharedPointerInternals::DefaultDeleter<FText>,1>::
DestroyObject(TReferenceControllerWithDeleter<FText,SharedPointerInternals::DefaultDeleter<FText>,1>
              *this)

{
  FText *pFVar1;
  ITextData *pIVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FText *)0x0) {
    pIVar2 = (pFVar1->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

