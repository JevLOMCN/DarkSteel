// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// operator= @ 14a192780

FRuntimeFloatCurve * __thiscall
FRuntimeFloatCurve::operator=(FRuntimeFloatCurve *this,FRuntimeFloatCurve *param_1)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UCurveFloat *pUVar4;
  
  pTVar1 = &(param_1->EditorCurveData).Keys;
  *(int *)&(this->EditorCurveData)._padding_ = (int)(param_1->EditorCurveData)._padding_;
  pTVar2 = &(this->EditorCurveData).Keys;
  *(undefined1 *)((longlong)&(this->EditorCurveData)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->EditorCurveData)._padding_ + 4);
  *(undefined1 *)((longlong)&(this->EditorCurveData)._padding_ + 5) =
       *(undefined1 *)((longlong)&(param_1->EditorCurveData)._padding_ + 5);
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->EditorCurveData).Keys.ArrayNum = (param_1->EditorCurveData).Keys.ArrayNum;
    (this->EditorCurveData).Keys.ArrayMax = (param_1->EditorCurveData).Keys.ArrayMax;
    (param_1->EditorCurveData).Keys.ArrayNum = 0;
    (param_1->EditorCurveData).Keys.ArrayMax = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->ExternalCurve).field0_0x0.DebugPtr, pUVar4 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ExternalCurve).field0_0x0 = (param_1->ExternalCurve).field0_0x0;
  return this;
}

