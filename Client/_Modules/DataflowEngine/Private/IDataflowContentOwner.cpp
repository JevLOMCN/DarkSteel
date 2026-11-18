// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// BuildDataflowContent @ 1462d2f00

TObjectPtr<UDataflowBaseContent> __thiscall
IDataflowContentOwner::BuildDataflowContent(IDataflowContentOwner *this)

{
  TObjectPtr<UDataflowBaseContent>_u_0 in_RDX;
  UObject *local_res8;
  UObject *local_res18;
  undefined1 local_res20 [8];
  
  (**(code **)(this->_padding_ + 0x20))(this,&local_res8);
  if (local_res8 == (UObject *)0x0) {
    (in_RDX.DebugPtr)->_padding_ = 0;
  }
  else {
    local_res18 = local_res8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res8);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDataflowBaseContent>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->OnContentOwnerChanged,(TObjectPtr<UDataflowBaseContent>)local_res20,
               (pmf_4b8c3847)&local_res18);
    (in_RDX.DebugPtr)->_padding_ = (longlong)local_res8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
      return (TObjectPtr<UDataflowBaseContent>)in_RDX;
    }
  }
  return (TObjectPtr<UDataflowBaseContent>)in_RDX.DebugPtr;
}

