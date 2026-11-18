// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 1

// GetHandle @ 14d0de7b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<UNamingTokens_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<UNamingTokens_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

