// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 3

// FScopedSourceControl @ 146aff1b0

FScopedSourceControl * __thiscall
FScopedSourceControl::FScopedSourceControl(FScopedSourceControl *this)

{
  char cVar1;
  ISourceControlModule *pIVar2;
  longlong *plVar3;
  
  this->bInitSourceControl = false;
  pIVar2 = ISourceControlModule::Get();
  plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
  cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
  this->bInitSourceControl = cVar1 == '\0';
  if (cVar1 == '\0') {
    pIVar2 = ISourceControlModule::Get();
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
    (**(code **)(*plVar3 + 0x10))(plVar3,1);
  }
  return this;
}

// ~FScopedSourceControl @ 146b00dd0

void __thiscall FScopedSourceControl::~FScopedSourceControl(FScopedSourceControl *this)

{
  ISourceControlModule *pIVar1;
  longlong *plVar2;
  
  if (this->bInitSourceControl != false) {
    pIVar1 = ISourceControlModule::Get();
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x78))(pIVar1);
                    /* WARNING: Could not recover jumptable at 0x000146b00df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,*(code **)(*plVar2 + 0x18));
    return;
  }
  return;
}

// GetProvider @ 146b19430

ISourceControlProvider * __thiscall FScopedSourceControl::GetProvider(FScopedSourceControl *this)

{
  ISourceControlModule *pIVar1;
  ISourceControlProvider *pIVar2;
  
  pIVar1 = ISourceControlModule::Get();
                    /* WARNING: Could not recover jumptable at 0x000146b19447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar2 = (ISourceControlProvider *)
           (**(code **)((longlong)*pIVar1 + 0x78))(pIVar1,*(code **)((longlong)*pIVar1 + 0x78));
  return pIVar2;
}

