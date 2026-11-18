// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 1

// GetHandle @ 14cfd6a10

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

