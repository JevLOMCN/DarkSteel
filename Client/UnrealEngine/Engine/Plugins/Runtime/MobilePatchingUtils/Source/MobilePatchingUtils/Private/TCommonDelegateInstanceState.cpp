// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MobilePatchingUtils
// Functions: 2

// GetHandle @ 14f03e120

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,UMobilePendingContent_*,FOnContentInstallSucceeded,FOnContentInstallFailed>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,UMobilePendingContent_*,FOnContentInstallSucceeded,FOnContentInstallFailed>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14f03e140

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,UMobilePendingContent_*,FOnRequestContentSucceeded,FOnRequestContentFailed>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,UMobilePendingContent_*,FOnRequestContentSucceeded,FOnRequestContentFailed>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

