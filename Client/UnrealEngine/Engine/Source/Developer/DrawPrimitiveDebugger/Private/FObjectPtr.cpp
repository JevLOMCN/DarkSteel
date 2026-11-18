// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 1

// FObjectPtr @ 146d035e0

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

