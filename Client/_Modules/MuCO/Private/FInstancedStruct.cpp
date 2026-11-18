// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// SetStructData @ 14abf1e70

void __thiscall
FInstancedStruct::SetStructData(FInstancedStruct *this,UScriptStruct *param_1,uchar *param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ScriptStruct).field0_0x0.DebugPtr = param_1;
    this->StructMemory = param_2;
    return;
  }
  (this->ScriptStruct).field0_0x0.DebugPtr = param_1;
  this->StructMemory = param_2;
  return;
}

