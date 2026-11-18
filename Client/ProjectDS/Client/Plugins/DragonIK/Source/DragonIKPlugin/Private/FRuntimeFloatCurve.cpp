// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 1

// FRuntimeFloatCurve @ 14d2b88f0

FRuntimeFloatCurve * __thiscall
FRuntimeFloatCurve::FRuntimeFloatCurve(FRuntimeFloatCurve *this,FRuntimeFloatCurve *param_1)

{
  UCurveFloat *pUVar1;
  
  FRichCurve::FRichCurve(&this->EditorCurveData,&param_1->EditorCurveData);
  pUVar1 = (param_1->ExternalCurve).field0_0x0.DebugPtr;
  (this->ExternalCurve).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

