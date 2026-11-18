// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 2

// GetHandle @ 148da3dc0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 148da3de0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
           *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

