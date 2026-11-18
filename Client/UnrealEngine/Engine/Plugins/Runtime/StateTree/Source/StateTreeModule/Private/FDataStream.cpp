// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// Close @ 14d4b7d30

void __thiscall `FStateTreeDebugger::UpdateMetadata'::__l2::FDataStream::Close(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d4b7d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))();
  return;
}

// Read @ 14d4cc230

int __thiscall
`FStateTreeDebugger::UpdateMetadata'::__l2::FDataStream::Read(void *this,void *param_1,uint param_2)

{
  int iVar1;
  
  if (0xfffff < *(int *)((longlong)this + 0x10)) {
    *(undefined4 *)((longlong)this + 0x14) = 1;
    return 0;
  }
  iVar1 = (**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + iVar1;
  return iVar1;
}

