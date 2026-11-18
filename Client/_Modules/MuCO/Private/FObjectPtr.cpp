// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// FObjectPtr @ 14abbcdf0

FObjectPtr * __thiscall FObjectPtr::FObjectPtr(FObjectPtr *this,FObjectPtr *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = (param_1->field0_0x0).Handle;
  (this->field0_0x0).Handle = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return this;
}

// operator= @ 14ac0d720

FObjectPtr * __thiscall FObjectPtr::operator=(FObjectPtr *this,FObjectPtr *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((param_1->field0_0x0).Handle != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((param_1->field0_0x0).Handle);
  }
  this->field0_0x0 = param_1->field0_0x0;
  return this;
}

