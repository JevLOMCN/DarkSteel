// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// operator= @ 14bce61b0

TSubclassOf<UDS_ButtonData> * __thiscall
TSubclassOf<UDS_ButtonData>::operator=
          (TSubclassOf<UDS_ButtonData> *this,TSubclassOf<UDS_ButtonData> *param_1)

{
  UClass *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Class).field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Class).field0_0x0 = (param_1->Class).field0_0x0;
  return this;
}

