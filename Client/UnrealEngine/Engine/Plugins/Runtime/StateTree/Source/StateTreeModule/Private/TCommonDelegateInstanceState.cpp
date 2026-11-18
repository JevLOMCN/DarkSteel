// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// GetHandle @ 14d4bd880

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14d4bd8a0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy>::
GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

