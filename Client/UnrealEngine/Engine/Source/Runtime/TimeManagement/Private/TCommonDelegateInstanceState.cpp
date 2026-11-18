// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 2

// GetHandle @ 14604c640

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FFrameRate),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(FFrameRate),FDefaultDelegateUserPolicy> *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14604c660

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FFrameRate>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FFrameRate>
           *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

