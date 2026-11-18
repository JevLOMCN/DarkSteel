// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 1

// GetHandle @ 142390cd0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::GetHandle
          (TCommonDelegateInstanceState<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

