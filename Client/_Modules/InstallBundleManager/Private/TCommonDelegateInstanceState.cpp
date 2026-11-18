// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 2

// GetHandle @ 148bcb470

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 148bcb490

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

