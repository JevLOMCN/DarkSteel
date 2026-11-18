// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 1

// CreateNetHandle @ 1441d7e30

FNetHandle __thiscall
UE::Net::FNetHandleManager::FPimpl::CreateNetHandle(FPimpl *this,UObject *param_1)

{
  UObject *in_R8;
  FWeakObjectPtr local_res18;
  undefined1 local_res20 [8];
  
  if ((in_R8 != (UObject *)0x0) && ((*(uint *)&in_R8->field_0x8 >> 0x1e & 1) == 0)) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable(in_R8);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(in_R8);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_res20);
    *(int *)&param_1->field_0x0 = local_res18.ObjectIndex;
    *(int *)&param_1->field_0x4 = local_res18.ObjectSerialNumber;
    return (FNetHandle)(FNetHandle_u_0)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (FNetHandle)(FNetHandle_u_0)param_1;
}

