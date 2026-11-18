// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// operator= @ 1464dd930

FRuntimeFloatCurve * __thiscall
FRuntimeFloatCurve::operator=(FRuntimeFloatCurve *this,FRuntimeFloatCurve *param_1)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  UCurveFloat *pUVar6;
  
  *(int *)&(this->EditorCurveData)._padding_ = (int)(param_1->EditorCurveData)._padding_;
  *(undefined1 *)((longlong)&(this->EditorCurveData)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->EditorCurveData)._padding_ + 4);
  *(undefined1 *)((longlong)&(this->EditorCurveData)._padding_ + 5) =
       *(undefined1 *)((longlong)&(param_1->EditorCurveData)._padding_ + 5);
  pTVar1 = &(param_1->EditorCurveData).Keys;
  pTVar2 = &(this->EditorCurveData).Keys;
  if (pTVar2 != pTVar1) {
    iVar4 = (this->EditorCurveData).Keys.ArrayMax;
    piVar3 = &(this->EditorCurveData).Keys.ArrayMax;
    _Src = (pTVar1->AllocatorInstance).Data;
    iVar5 = (param_1->EditorCurveData).Keys.ArrayNum;
    (this->EditorCurveData).Keys.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar5,iVar4,&pTVar2->AllocatorInstance,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar5 * 0x1c);
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->ExternalCurve).field0_0x0.DebugPtr, pUVar6 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ExternalCurve).field0_0x0 = (param_1->ExternalCurve).field0_0x0;
  return this;
}

