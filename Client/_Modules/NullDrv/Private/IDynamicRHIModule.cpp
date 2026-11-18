// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// IsSupported @ 1446c3fb0

bool __thiscall IDynamicRHIModule::IsSupported(IDynamicRHIModule *this,Type param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001446c3fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x48))();
  return (bool)uVar1;
}

