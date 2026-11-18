// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 2

// GetHandle @ 14a88a330

FDelegateHandle __thiscall
TCommonDelegateInstanceState<enum_FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14a88a350

FDelegateHandle __thiscall
TCommonDelegateInstanceState<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

