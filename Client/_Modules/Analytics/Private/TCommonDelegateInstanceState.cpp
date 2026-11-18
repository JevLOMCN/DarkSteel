// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 1

// GetHandle @ 14313a3a0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

