// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// Unbind @ 142d19ad0

void __thiscall UE::Core::Private::Function::FFunctionStorage::Unbind(FFunctionStorage *this)

{
  FFunctionStorage *pFVar1;
  
  pFVar1 = this->HeapAllocation;
  if (this->HeapAllocation == (FFunctionStorage *)0x0) {
    pFVar1 = this;
  }
                    /* WARNING: Could not recover jumptable at 0x000142d19ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar1->InlineAllocation + 0x10))(pFVar1);
  return;
}

