// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// DestroyObject @ 14ad4ed80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::INode,SharedPointerInternals::DefaultDeleter<Metasound::INode>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::INode,SharedPointerInternals::DefaultDeleter<Metasound::INode>,1>
                *this)

{
  INode *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (INode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad4ed91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

