// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 1

// GetHandle @ 14d287690

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

