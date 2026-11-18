// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// ~FAdderPinAction @ 14e161010

void __thiscall
IOptimusNodeAdderPinProvider::FAdderPinAction::~FAdderPinAction(FAdderPinAction *this)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->ToolTip).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e16101c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

