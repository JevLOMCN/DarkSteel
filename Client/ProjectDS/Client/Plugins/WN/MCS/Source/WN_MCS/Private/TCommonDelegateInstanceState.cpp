// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_MCS
// Functions: 1

// GetHandle @ 14accc920

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

