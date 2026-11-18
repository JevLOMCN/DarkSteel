// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// operator= @ 1497e36a0

FInstancedPropertyBag * __thiscall
FInstancedPropertyBag::operator=(FInstancedPropertyBag *this,FInstancedPropertyBag *param_1)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  
  if (this != param_1) {
    FInstancedStruct::Reset(&this->Value);
    puVar1 = (param_1->Value).StructMemory;
    pUVar2 = (param_1->Value).ScriptStruct.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->Value).ScriptStruct.field0_0x0.DebugPtr = pUVar2;
    (this->Value).StructMemory = puVar1;
    (param_1->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    (param_1->Value).StructMemory = (uchar *)0x0;
  }
  return this;
}

