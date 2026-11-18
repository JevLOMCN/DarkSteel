// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FCustomLinkOwnerInfo @ 146d72b70

FCustomLinkOwnerInfo * __thiscall
FNavigationSystem::FCustomLinkOwnerInfo::FCustomLinkOwnerInfo
          (FCustomLinkOwnerInfo *this,INavLinkCustomInterface *param_1)

{
  UObject *local_res8 [4];
  
  this->LinkInterface = param_1;
  (this->LinkOwner).ObjectIndex = 0;
  (this->LinkOwner).ObjectSerialNumber = 0;
  local_res8[0] = (UObject *)(**(code **)((longlong)*param_1 + 0x50))(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  FWeakObjectPtr::operator=(&this->LinkOwner,(FObjectPtr)local_res8);
  return this;
}

