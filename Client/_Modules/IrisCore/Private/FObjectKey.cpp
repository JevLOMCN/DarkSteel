// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// FObjectKey @ 1442670a0

FObjectKey * __thiscall FObjectKey::FObjectKey(FObjectKey *this,UObject *param_1)

{
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    this->ObjectIndex = local_res8.ObjectIndex;
    this->ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  return this;
}

