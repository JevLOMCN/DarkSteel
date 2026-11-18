// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 2

// GetHandle @ 14f007b60

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14f007b80

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

