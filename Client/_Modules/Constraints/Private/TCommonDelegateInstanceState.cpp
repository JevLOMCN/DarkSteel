// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 2

// GetHandle @ 1464b3e00

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UTransformableHandle_*,enum_EHandleEvent),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 1464b3e20

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

